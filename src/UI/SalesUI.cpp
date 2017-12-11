#include "../../include/UI/SalesUI.h"

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

    // Kalla � pizzuval til a� velja pizzu � order
    // Pizzuval s�kir vector af pizzum og prentar � sk�ja
    // Notandi velur pizzu af lista ( PizzaMenu object )

    // Kalla � location val til a� velja sta�setningu
    // location val s�kir vector af location og prentar
    // Notandi velur location ( Workplace object

    // Spyrja hvort p�ntun s� s�tt e�a send ( bool delivery )

    // Finna �t ver�, skrifa �t og skrifa � order ( int price )

    // Merkja hvort p�ntun s� greidd ( bool paid )

    // B�a til order ( Order order() ) me� �llu innif�ldu

    // Senda order ni�ur � Service klasa sem sendir � Repo og skrifar � skjal.
}
