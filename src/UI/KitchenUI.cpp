#include "../../include/UI/KitchenUI.h"

KitchenUI::KitchenUI() {
    //ctor
}

void KitchenUI::kitchen(){

    bool running = true;
    char selection;
    int phase = 1;
    while (running == true){

        if(phase == 1){

            WorkplacesRepo loc;
            int number_loc = loc.number_locations();

            cout << endl << "   -SELECT WORKPLACE-" << endl << endl;

            for (int i = 1; i <= number_loc; i++){

                cout << i << " - ";
                loc.print_line(i);
                cout << endl;
            }

            int input;
            cin >> input;
            //kitchen_set_place(input);
            phase = 2;
            clear_screen();
        }
        else if(phase == 2){
            cout << endl << "  -KITCHEN-" << endl << endl;
            // LIST ACTIVE ORDERS WITH MINIMAL INFO
            // ALLOW USER TO SELECT AN ORDER FOR MORE DETAIL
            // ON SELECTION, ALLOW TO FLAG AS STARTED, AND READY.

            cout << "r : Return" << endl;

            cin >> selection;

            if(selection == 'r'){
                clear_screen();
                running = false;
            }
        }
    }
}

void KitchenUI::clear_screen(){

    for(int i = 0; i < 30; i++){
        cout << endl;
    }
}
