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
        cout << "p : Register Pizza on Menu" << endl;
        cout << "s : Register Soda on menu" << endl;
        cout << "l : Register Locations" << endl;
        cout << "m : Read Menu items" << endl;
        cout << "r : Return" << endl;

        cin >> selection;

        if(selection == 't' || selection == 'T'){
            clear_screen();
            register_topping();

        }
        else if(selection == 'p'|| selection == 'P'){
            clear_screen();
            regester_pizza();

        }
        else if(selection == 's'){
            clear_screen();
            regester_soda();

        }
        else if(selection == 'l'|| selection == 'L'){
            clear_screen();
            register_location();
        }
        else if(selection == 'm'|| selection == 'M'){

            clear_screen();
            cout << "---Pizza Menu---" << endl;
            service.read();
            cout << endl << endl;
            cout << "---Soda Menu--" << endl;
            soda.read();
            cout << endl << endl << endl;

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

void ManagementUI::regester_soda(){
    char input = 'y';
    do{
    cout << "Please regester name of the soda and the size" << endl << endl;
    cout << "name of the soda? ";
    string str;
    cin >> str;
    cout << endl;
    cout << "Size of the soda, small(s) or large(l)";
    char s;
    cin >> s;
    cout << endl;
    Soda sodas(str, s, soda.final_price(s));
    soda.write(sodas);
    clear_screen();
    cout << "Do you want to register more soda on the menu 'y' for yes or 'n' for no: ";
    cin >> input;
    clear_screen();
    }
    while (input == 'y' || input == 'y');

}

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
