#include "../../include/UI/ManagementUI.h"

using namespace std;

ManagementUI::ManagementUI()
{
    //ctor
}

void ManagementUI::main_menu(){
    bool running = true;
    char selection;
    while (running == true){
        cout << endl << "  -MANAGEMENT-" << endl << endl;
        cout << "t : Register Toppings" << endl;
        cout << "m : Register Menu items" << endl;
        //cout << "s : Register Sizes" << endl;
        cout << "p : Register Prices" << endl;
        cout << "l : Register Locations" << endl;
        cout << "i : Read Menu items" << endl;
        cout << "r : Return" << endl;

        cin >> selection;

        if(selection == 't' || selection == 'T'){
            clear_screen();
            register_topping();

        }
        else if(selection == 'm'|| selection == 'M'){
            clear_screen();
            menu();

        }
       /* else if(selection == 's'){
            clear_screen();

        }*/
        else if(selection == 'p'){
            clear_screen();
            register_prices();
        }
        else if(selection == 'l'|| selection == 'L'){
            clear_screen();
            register_location();
        }
        else if(selection == 'i'|| selection == 'I'){
            clear_screen();
            cout << "---Pizza Menu---" << endl << endl;
            vector<PizzaMenu> pizza_vector;
            service.read(pizza_vector);
            for (int i = 0; i < pizza_vector.size(); i++){
                cout << pizza_vector[i] << endl;
            }
        }

        else if(selection == 'r'|| selection == 'R'){
            clear_screen();
            running = false;

        }
    }
}

void ManagementUI::regester_pizza() throw(InvalidInputException) {

    char input = 'y';
    string name;
    int topp;
    char t;



    while (input == 'y'|| input == 'Y')
    {   clear_screen();
        //PizzaMenu pizza;
        cout << "Please register the name and toppings of the pizza." << endl << endl << endl;
        cout << "Name of the pizza? ";
        cin >> ws;
        getline(cin, name);
        cout << endl;
        do{
        cout << "How many toppings are on " << name << "? ";
        try{
        cin >> t;
        if (!isdigit(t)){
            throw InvalidInputException("invalid Input, should be a integer.");
        }
        }
        catch (InvalidInputException e){
         cout << e.get_message() << endl;

        }
        }
        while (!isdigit(t));
        topp = t - '0';
        PizzaMenu pizza(lower.to_lower(name),topp);


        for (int i = 0; i < topp; i++)
        {
            cout << "- SELECT TOPPINGS - " << endl;
            select_topping(pizza);
            clear_screen();
        }

        service.write(pizza);

        cout << endl;
        cout << "Do you want to register more pizzas on the menu 'y' for yes or 'n' for no: ";
        cin >> input;
        clear_screen();

    }

}

void ManagementUI::register_topping()
{

    char input = 'y';
    string str;


    while (input == 'y'|| input == 'Y')
    {
        clear_screen();

        cout << "Name of the topping? ";
        cin >> str;

        Toppings topping(lower.to_lower(str));

        topping_service.write(topping);


        cout << "Do you want to register more toppings on the menu 'y' for yes or 'n' for no: ";
        cin >> input;
        clear_screen();

    }
}

void ManagementUI::register_prices(){

    string pizza, size, topping;
    int pizzai, sizei, toppingi;
    bool digit = true;

    do{
    cout << "Base Pizza price: ";
    try{
    cin >> pizza;
    for(int i = 0; i < pizza.length(); i++){
        if (!isdigit(pizza[i])){
            digit = false;
            break;
        }
        else{
            digit = true;
        }
    }
    if (!digit){
        throw InvalidInputException("Invalid input, should be an integer.");
    }
    }
    catch(InvalidInputException e){
    cout << e.get_message() << endl;
    }
    }
    while (!digit);
    pizzai = atoi(pizza.c_str());

    do{
    cout << "Size increase price: ";
    try{
    cin >> size;
    for(int i = 0; i < size.length(); i++){
        if (!isdigit(size[i])){
            digit = false;
            break;
        }
        else{
            digit = true;
        }
    }
    if (!digit){
        throw InvalidInputException("Invalid input, should be an integer.");
    }
    }
    catch(InvalidInputException e){
    cout << e.get_message() << endl;
    }
    }
    while (!digit);
    sizei = atoi(size.c_str());

    do{
    cout << "Topping price: ";
    try{
    cin >> topping;
    for(int i = 0; i < topping.length(); i++){
        if (!isdigit(topping[i])){
            digit = false;
            break;
        }
        else{
            digit = true;
        }
    }
    if (!digit){
        throw InvalidInputException("Invalid input, should be an integer.");
    }
    }
    catch(InvalidInputException e){
    cout << e.get_message() << endl;
    }
    }
    while (!digit);
    toppingi = atoi(topping.c_str());

    Price price(pizzai,sizei,toppingi);
    service_price.write(price);
}

void ManagementUI::select_topping(PizzaMenu& pizza)
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

void ManagementUI::menu(){
    char input;
    ManagementUI ui;
    do{
        clear_screen();
//        cout << "Do you want to register a pizza (type 'p') or other items(type 'o') on the menu? " << endl;
//        cin >> input;
//        if (input == 'P' || input == 'p'){
                regester_pizza();
//        }
/*        if (input == 'o'|| input == 'O'){
           Other other;
         ui.registerOther(other);

        }

        cout << "Do you want to register more items on the menu? Type 'y' for yes or 'n' for no: " << endl;
        cin >> input;
        clear_screen();*/
        }

        while (input == 'y' || input =='Y');
}

/*void ManagementUI::registerOther(Other& other){

    char input;
    string str;

    do {
    other.clear_screen();

    cout << "What would you like to regester?" << endl << endl;
    cout << "s : Soda" << endl;
    cout << "b : Bread " << endl;
    cout << "d : Desserts" << endl;
    cout << "q : Quit" << endl;
    cin >> input;

    if (input == 's' || input == 'S'){
        char inputs;
        do{
            other.clear_screen();
            cout << "Type in the name of the soda: ";
            cin >> str;
            Other other(str);
            otherservice.saveSoda(other);

            cout << "Do you want to regester more soda's on the menu 'y' for yes or 'n' for no: ";
            cin >> inputs;
        }
        while (inputs == 'y'|| inputs == 'Y');
        other.clear_screen();

}
     if (input == 'b' || input == 'B'){
        char inputb;
        do{
        other.clear_screen();

        cout << "Type in the name of the bread: ";
        cin >> str;
        Other other(str);
        otherservice.saveBread(other);

        cout << "Do you want to regester more bread's on the menu 'y' for yes or 'n' for no: ";
        cin >> input;
        }
        while (input == 'y'|| input == 'Y');
        other.clear_screen();
    }
     if (input == 'd' || input == 'D'){

        char inputb;
        do{
        other.clear_screen();

        cout << "Type in the name of the Desert: ";
        cin >> str;
        Other other(str);
        otherservice.saveDessert(other);

        cout << "Do you want to regester more bread's on the menu 'y' for yes or 'n' for no: ";
        cin >> input;
        }
        while (input == 'y'|| input == 'Y');
        other.clear_screen();
    }
}
    while (input == 'y' || input == 'Y');
}*/

void ManagementUI::register_location()
{
    char input = 'y';

    while (input == 'y'|| input == 'Y')
    {
        workplaces workplace;
        cout << "Enter a Location: ";
        cin >> workplace;
        service_w.write(workplace);

        cout << "Do you want to register more locations? Type 'y' for yes or 'n' for no: ";
        cin >> input;
    }
    clear_screen();
}

void ManagementUI::clear_screen(){

    for(int i = 0; i < 30; i++){
        cout << endl;
    }
}
