#include "../../include/UI/MainUI.h"
#include <iostream>
#include <string>
#include "../../include/models/PizzaMenu.h"
#include "../../include/models/Toppings.h"
#include "../../include/models/Workplaces.h"


using namespace std;

MainUI::MainUI() {
    //ctor
}

void MainUI::main() {
    clear_screen();
    char selection;
    bool running = true;
    while (running == true){
        cout << endl << "What would you like to do?" << endl << endl;
        cout << "m : Management" << endl;
        cout << "s : Sales" << endl;
        cout << "k : Kitchen" << endl;
        cout << "d : Delivery" << endl;
        cout << "q : Quit" << endl;

        cin >> selection;

        if(selection == 'm'){
            clear_screen();
            main_m.main_menu();
        }
        else if(selection == 's'){
            clear_screen();
            main_s.sales();
        }
        else if(selection == 'k'){
            clear_screen();
            main_k.kitchen();
        }
        else if(selection == 'd'){
            clear_screen();
            main_d.delivery();
        }
        else if(selection == 'q'){
            running = false;
        }
     }
}

void MainUI::clear_screen(){

    for(int i = 0; i < 30; i++){
        cout << endl;
    }
}
