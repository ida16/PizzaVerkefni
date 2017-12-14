#include "../../include/UI/SalesUI.h"

using namespace std;

SalesUI::SalesUI()
{
    //ctor
}

void SalesUI::sales(){
    bool running = true;
    char selection;
    while (running == true){
        cout << endl << "  -SALES-" << endl << endl;
        cout << "n : New Order" << endl;
        cout << "v : View Active Orders" << endl;
        cout << "c : Change Order" << endl;
        cout << "r : Return" << endl;

        cin >> selection;

        if(selection == 'n'){
            clear_screen();
            new_order();
        }
        else if(selection == 'v'){
            clear_screen();
            view_active_orders();
        }
        else if(selection == 'c'){
            clear_screen();
            change_order();
        }
        else if(selection == 'r'){
            clear_screen();
            running = false;

        }
    }
}

void SalesUI::clear_screen(){

    for(int i = 0; i < 30; i++){
        cout << endl;
    }
}

void SalesUI::new_order()
{
    char input1, input2;
    string delivery, paid;

    Order order;
    // Kalla í pizzuval til að velja pizzu í order
    // Pizzuval sækir vector af pizzum og prentar á skjá
    // Notandi velur pizzu af lista ( PizzaMenu object )

    select_pizza(order);
    // Kalla í location val til að velja staðsetningu
    // location val sækir vector af location og prentar
    // Notandi velur location ( Workplace object
    order.set_loc(select_workplace());
    // Spyrja hvort pöntun sé sótt eða send ( bool delivery )
    cout << "Is the order a delivery? Type 'y' for yes and 'n' for no: ";
    cin >> input1;
    if ((input1 = 'y') || (input1 = 'Y'))
    {
        delivery = "Yes";
    }
    else if ((input1 = 'n') || (input1 = 'N'))
    {
        delivery = "No";
    }
    order.set_delivery(delivery);
    // Finna út verð, skrifa út og skrifa í order ( int price )
    cout << "Price: " << order_service.calculate_price(order) << endl;
    // Merkja hvort pöntun sé greidd ( bool paid )
    cout << "Has the order been paid for? Type 'y' for yes and 'n' for no: ";
    cin >> input2;
    if ((input2 = 'y') || (input2 = 'Y'))
    {
        paid = "Yes";
    }
    else if ((input2 = 'n') || (input2 = 'N'))
    {
        paid = "No";
    }
    order.set_paid(paid);
    order_service.write(order);
    // Senda order niður í Service klasa sem sendir í Repo og skrifar í skjal.


}

void SalesUI::select_pizza(Order& order){
    int number, s;
    char number_char, s_char;
    char input1 = 'y';
    vector<PizzaMenu> pizza_vector;
    pizza_service.read(pizza_vector);

    while (input1 == 'y' || input1 == 'Y'){
        PizzaMenu pizzacopy;
        cout << "0 - Make your own!" << endl;
        for (int i = 1; i <= pizza_vector.size(); i++){
            cout << i << " - " << pizza_vector[i-1].getname() << endl;
        }

    do{
        cout << "Select a pizza by number: ";
        try{
            cin >> number_char;
            if(!isdigit(number_char)) {
                throw InvalidInputException("invalid Input, should be a integer.");
            }
        }
        catch (InvalidInputException e){
            cout << e.get_message() << endl;
            }
        }
    while (!isdigit(number_char));
    number = number_char - '0';

        /*if(number = 0){
            ///call custom pizza code
        }
        else{*/
        number--;
        string name = pizza_vector[number].getname();
        pizzacopy.setname(name);

        int top_cnt = pizza_vector[number].get_topping_cnt();
        pizzacopy.settoppingCnt(top_cnt);

        vector<Toppings> top_cpy = pizza_vector[number].topp_vector;
        pizzacopy.topp_vector = top_cpy;

        cout << endl;
    do{
        cout << "What is the size of the pizza? " << endl;
        cout << "   1 : 9 Inches" << endl;
        cout << "   2 : 12 Inches" << endl;
        cout << "   3 : 16 Inches" << endl;
        try {
            cin >> s_char;
            if(!isdigit(s_char)) {
                throw InvalidInputException("Invalid input, should be an integer.");
            }
        }
        catch (InvalidInputException e) {
            cout << e.get_message() << endl;
        }
    }
    while(!isdigit(s_char));
        s = s_char - '0';
        pizzacopy.set_size(s);

        char input2 = 'y';

        while (input2 == 'y' || input2 == 'Y'){
            cout << "Would you like to add more toppings (y/n)? ";
            cin >> input2;
            if(input2 == 'y' || input2 == 'Y'){
                select_topping(pizzacopy);
            }
        }

        pizzacopy.setprice(service_price.calculate(pizzacopy.get_topping_cnt(), s));
        order.pizza_vector.push_back(pizzacopy);
        cout << "Would you like to add another pizza (y/n)? ";
        cin >> input1;

    }
}

void SalesUI::select_topping(PizzaMenu& pizza)
{
    int number;
    vector<Toppings> topping_vector;
    topping_service.read(topping_vector);
    for (unsigned int i = 0; i < topping_vector.size(); i++)
    {
        cout << i+1 << " - " << topping_vector[i].get_name() << endl;
    }
    cout << "Select a topping by number: ";
    cin >> number;
    number--;

    Toppings topping(topping_vector[number].get_name());
    pizza.topp_vector.push_back(topping);
    pizza.settoppingCnt(pizza.get_topping_cnt() + 1);
}

string SalesUI::select_workplace(){
    vector<workplaces> wplace_vector;
    workplace_service.read(wplace_vector);

    cout << endl << "   -SELECT LOCATION-" << endl << endl;

    for (int i = 1; i <= wplace_vector.size(); i++){

        cout << i << " - " << wplace_vector[i-1].get_name() << endl;
    }

    int input;
    cin >> input;
    input--;
    return wplace_vector[input].get_name();
}

void SalesUI::view_active_orders(){
    vector<Order> orders;
    order_service.read(orders);
    for (int i = 0; i < orders.size(); i++){
        cout << orders[i].get_loc() << endl;
        cout << "Delivery: " << orders[i].get_delivery() << " - Paid: " << orders[i].get_paid() << endl;
        for (int j = 0; j < orders[i].pizza_vector.size(); j++){
            cout << "   - " << orders[i].pizza_vector[j].getname() << " - " << endl;
            cout << "Toppings: ";
            for (int n = 0; n < orders[i].pizza_vector[j].topp_vector.size(); n++){
                cout << orders[i].pizza_vector[j].topp_vector[n].get_name() << ", ";
            }
            cout << endl;
            cout << "Pizza price: " << orders[i].pizza_vector[j].getprice() << endl;
        }
        cout << "Total Order Price: " << orders[i].get_price() << endl  << " ****** "<< endl;
    }
}

void SalesUI::change_order(){
    int input;
    char in2;
    bool running = true;
    vector<Order> orders;
    order_service.read(orders);

    order_list(orders);
    cout << "Pick an order to change: ";
    cin >> input;
    while (running){
        show_order(input, orders);
        input--;
        cout << "l : Set location" << endl;
        cout << "d : Set delivery" << endl;
        cout << "c : Set paid" << endl;
        cout << "s : Set status" << endl;
        cout << "p : Change pizza" << endl;
        cout << "r : Return" << endl;

        cin >> in2;

        if (in2 == 'l' || in2 == 'L'){
            orders[input].set_loc(select_workplace());
        }
        else if (in2 == 'd' || in2 == 'D'){

        }
        else if (in2 == 'c' || in2 == 'C'){

        }
        else if (in2 == 's' || in2 == 'S'){

        }
        else if (in2 == 'p' || in2 == 'P'){

        }
        else if (in2 == 'r' || in2 == 'R'){
            running = false;
        }
    }
}

void SalesUI::order_list(vector<Order>& orders){
    for (int i = 0; i < orders.size(); i++){
        cout <<  i+1 << " - " << orders[i].get_loc() << " - " << "D: " << orders[i].get_delivery() << " - P: " << orders[i].get_paid();
        for (int j = 0; j < orders[i].pizza_vector.size(); j++){
            cout << " - " << orders[i].pizza_vector[j].getname();
        }
        cout << endl << "Total Price: " << orders[i].get_price() << endl;
    }
}

void SalesUI::show_order(int i, vector<Order>& orders){
    i--;
    cout << orders[i].get_loc() << endl;
    cout << "Delivery: " << orders[i].get_delivery() << " - Paid: " << orders[i].get_paid() << endl;
    for (int j = 0; j < orders[i].pizza_vector.size(); j++){
        cout << "   - " << orders[i].pizza_vector[j].getname() << " - " << endl;
        cout << "Toppings: ";
        for (int n = 0; n < orders[i].pizza_vector[j].topp_vector.size(); n++){
            cout << orders[i].pizza_vector[j].topp_vector[n].get_name() << ", ";
        }
        cout << endl;
        cout << "Pizza price: " << orders[i].pizza_vector[j].getprice() << endl;
    }
    cout << "Total Order Price: " << orders[i].get_price() << endl  << " ****** "<< endl;
}
