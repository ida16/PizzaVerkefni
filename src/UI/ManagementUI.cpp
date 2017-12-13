#include "../../include/UI/ManagementUI.h"

ManagementUI::ManagementUI() {
    //ctor
}

void ManagementUI::main_menu(){
    bool running = true;
    char selection;
    while (running == true){
        cout << endl << "  -MANAGEMENT-" << endl << endl;
        cout << "t : Register Toppings" << endl;
        cout << "m : Register Menu items" << endl;
        cout << "s : Register Sizes" << endl;
        cout << "p : Register Prices" << endl;
        cout << "l : Register Locations" << endl;
        cout << "r : Return" << endl;

        cin >> selection;

        if(selection == 't'){
            clear_screen();
            register_topping();

        }
        else if(selection == 'm'){
            clear_screen();
            Menu();

        }
        else if(selection == 's'){
            clear_screen();

        }
        else if(selection == 'p'){
            clear_screen();

        }
        else if(selection == 'l'){
            clear_screen();
            register_location();
        }
        else if(selection == 'r'){
            clear_screen();
            running = false;
        }
    }
}

void ManagementUI::regester_pizza() {

    char input = 'y';
    string name;
    int t;

    while (input == 'y'|| input == 'Y')
    {   clear_screen();

        cout << "Name of the pizza? ";
        cin >> name;
        cout << "How many toppings are on " << name << " ? ";
        cin >> t;
        PizzaMenu pizza(name,t);

        cout << "What toppings are on " << name << " ? ";
        for (int i = 0; i < t; i++)
        {
            string str;
            cin >> str;

            pizza.pizza_toppings.push_back(str);
        }

           service.save(pizza);

        cout << "Do you want to register more pizza's on the menu 'y' for yes or 'n' for no: ";
        cin >> input;
        clear_screen();
    }

}

void ManagementUI::register_topping() {
    char input = 'y';
    string str;

    while (input == 'y'|| input == 'Y')
    {
        clear_screen();

        cout << "Name of the topping? ";
        cin >> str;

        Toppings topping(str);

        topping_service.write(topping);

        cout << "Do you want to register more toppings on the menu 'y' for yes or 'n' for no: ";
        cin >> input;
        clear_screen();
    }
}

void ManagementUI::select_topping() {

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

void ManagementUI::Menu(){

    char input;
    ManagementUI ui;
    do{
        clear_screen();
///        cout << "Do you want to register a pizza (type 'p') or other items(type 'o') on the menu? " << endl;
///        cin >> input;
///        if (input == 'P' || input == 'p'){
                regester_pizza();
///        }
/*        if (input == 'o'|| input == 'O'){
           Other other;
         ui.registerOther(other);

        }*/

        cout << "Do you want to register more items on the menu? Type 'y' for yes or 'n' for no: " << endl;
        cin >> input;
        clear_screen();
        }

        while (input == 'y' || input =='Y');
}

/*void ManagementUI::register_other(Other& other){

    char input;
    string str;

    do {
    other.clear_screen();

    cout << "What would you like to register?" << endl << endl;
    cout << "s : Soda" << endl;
    cout << "b : Bread " << endl;
    cout << "d : Desserts" << endl;
    cout << "q : Quit" << endl;
    cin >> input;

    if (input == 's' || input == 'S'){
        char input;
        do{
            other.clear_screen();
            cout << "Type in the name of the soda: ";
            cin >> str;
            Other other(str);
            otherservice.save_soda(other);

            cout << "Do you want to register more sodas on the menu 'y' for yes or 'n' for no: ";
            cin >> input;
        }
        while (input == 'y'|| input == 'Y');
        other.clear_screen();

}
     if (input == 'b' || input == 'B'){
        char inputb;
        do{
        other.clear_screen();

        cout << "Type in the name of the bread: ";
        cin >> str;
        Other other(str);
        otherservice.save_bread(other);

        cout << "Do you want to register more breads on the menu 'y' for yes or 'n' for no: ";
        cin >> input;
        }
        while (input == 'y'|| input == 'Y');
        other.clear_screen();
    }
     if (input == 'd' || input == 'D'){

        char inputb;
        do{
        other.clear_screen();

        cout << "Type in the name of the dessert: ";
        cin >> str;
        Other other(str);
        otherservice.save_dessert(other);

        cout << "Do you want to register more deserts on the menu 'y' for yes or 'n' for no: ";
        cin >> input;
        }
        while (input == 'y'|| input == 'Y');
        other.clear_screen();
    }
}
    while (input == 'y' || input == 'Y');
}*/

void ManagementUI::register_location() {

    char input = 'y';

    while (input == 'y'|| input == 'Y')
    {
        workplaces workplace;
        cout << "Enter a Location: ";
        cin >> workplace;
       // workplace.save();

        cout << "Do you want to register more locations? Type 'y' for yes or 'n' for no: ";
        cin >> input;
    }
}

void ManagementUI::clear_screen(){

    for(int i = 0; i < 30; i++){
        cout << endl;
    }
}
