#include "../../include/UI/ManagementUI.h"

ManagementUI::ManagementUI()
{
    //ctor
}

void ManagementUI::main_mnu(){
    bool running = true;
    char selection;
    while (running == true){
        cout << endl << "  -MANAGEMENT-" << endl << endl;
        cout << "t : Register Toppings" << endl;
        cout << "m : Register Menu items" << endl;
        //cout << "s : Register Sizes" << endl;
        //cout << "p : Register Prices" << endl;
        cout << "l : Register Locations" << endl;
        cout << "p : Read Menu items" << endl;
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

        }
        else if(selection == 'p'){
            clear_screen();

        }*/
        else if(selection == 'l'|| selection == 'L'){
            clear_screen();
            register_location();
        }
        else if(selection == 'p'|| selection == 'P'){
            clear_screen();
            service.read();
        }

        else if(selection == 'r'|| selection == 'R'){
            clear_screen();
            running = false;

        }
    }
}

void ManagementUI::regester_pizza() {

    char input = 'y';
    string name;
    int t;
    char s;


    while (input == 'y'|| input == 'Y')
    {   clear_screen();
        //PizzaMenu pizza;
        cout << "Please register the name and toppings of the pizza." << endl << endl << endl;
        cout << "Name of the pizza? ";
        cin >> name;
        cout << "What is the size of the pizza? " << endl;
        cout << "   1 : 9 Inches" << endl;
        cout << "   2 : 12 Inches" << endl;
        cout << "   3 : 16 Inches" << endl;
        cin >> s;

        cout << "How many toppings are on " << name << "? ";
        cin >> t;
        service.is_valid_input(t);

        PizzaMenu pizza(lower.switch_to_lower(name),t,s);
        cout << "What toppings are on " << name << " ? ";
        for (int i = 0; i < t; i++)
        {
            string str;
            cin >> str;

            pizza.pizza_toppings.push_back(str);
        }
        service.final_price(pizza, service.size_price(s));

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

        Toppings topping(lower.switch_to_lower(str));

        topping_service.write(topping);


        cout << "Do you want to register more toppings on the menu 'y' for yes or 'n' for no: ";
        cin >> input;
        clear_screen();

    }
}

void ManagementUI::select_topping()
{
    char input = 'y';
    while((input = 'y') || (input = 'Y'))
    {
        vector<Toppings> topping_vector;
        topping_service.read(topping_vector);
        for (unsigned int i = 0; i < topping_vector.size(); i++)
        {
            cout << i+1 << " - " << topping_vector[i].get_name() << endl;
        }
    }
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
        service_w.save(workplace);

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
