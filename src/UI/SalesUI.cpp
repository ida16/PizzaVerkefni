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

        }
        else if(selection == 'c'){
            clear_screen();

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
