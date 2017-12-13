#include "../../include/UI/ManagementUI.h"

ManagementUI::ManagementUI()
{
    //ctor
}

void ManagementUI::mainMenu(){
    bool running = true;
    char selection;
    while (running == true){
        cout << endl << "  -MANAGEMENT-" << endl << endl;
        cout << "t : Register Toppings" << endl;
        cout << "m : Register Menu items" << endl;
        cout << "s : Read Menu items" << endl;
       // cout << "p : Register Prices" << endl;
        cout << "l : Register Locations" << endl;
        cout << "r : Return" << endl;

        cin >> selection;

        if(selection == 't'){
            clear_screen();
            registerTopping();

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
            registerLocation();
        }
        else if(selection == 'r'){
            clear_screen();
            running = false;

        }
    }
}

void ManagementUI::regesterPizza() {

    char inpute = 'y';
    string name;
    int t;

    while (inpute == 'y'|| inpute == 'Y')
    {   clear_screen();
        //PizzaMenu pizza;

        cout << "Name of the pizza? ";
        cin >> name;
        //pizza.setname(str);
        cout << "How many toppings are on " << name << " ? ";
        cin >> t;
        PizzaMenu pizza(name,t);

       // pizza.settoppingCnt(t);
        cout << "What toppings are on " << name << " ? ";
        for (int i = 0; i < t; i++)
        {
            string str;
            cin >> str;

            pizza.pizzaToppings.push_back(str);
        }
        pizza.finalPrice();

           service.save(pizza);

        cout << "Do you want to regestir more pizza's on the menu 'y' for yes or 'n' for no: ";
        cin >> inpute;
        clear_screen();

    }

}

void ManagementUI::registerTopping()
{

    char inpute = 'y';
    string str;


    while (inpute == 'y'|| inpute == 'Y')
    {
        clear_screen();

        cout << "Name of the topping? ";
        cin >> str;

        Toppings topping(str);

        toppingservice.write(topping);


        cout << "Do you want to register more toppings on the menu 'y' for yes or 'n' for no: ";
        cin >> inpute;
        clear_screen();

    }
}

void ManagementUI::selectTopping()
{
    char input = 'y';
    while((input = 'y') || (input = 'Y'))
    {
        vector<Toppings> toppingVector;
        toppingservice.read(toppingVector);
        for (int i = 0; i < toppingVector.size(); i++)
        {
            cout << i+1 << " - " << toppingVector[i].get_name() << endl;
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
                regesterPizza();
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

void ManagementUI::registerLocation()
{
    char input = 'y';

    while (input == 'y'|| input == 'Y')
    {
        workplaces workplace;
        cout << "Enter a Location: ";
        cin >> workplace;
       // workplace.save();

        cout << "Do you want to register more Locations? Type 'y' for yes or 'n' for no: ";
        cin >> input;
    }
}

void ManagementUI::clear_screen(){

    for(int i = 0; i < 30; i++){
        cout << endl;
    }
}
