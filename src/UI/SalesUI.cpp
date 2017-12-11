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
    char input;
    // Kalla � pizzuval til a� velja pizzu � order
    // Pizzuval s�kir vector af pizzum og prentar � sk�ja
    // Notandi velur pizzu af lista ( PizzaMenu object )

    // Kalla � location val til a� velja sta�setningu
    // location val s�kir vector af location og prentar
    // Notandi velur location ( Workplace object

    // Spyrja hvort p�ntun s� s�tt e�a send ( bool delivery )
    cout << "Is the order a delivery? Type 'y' for yes and 'n' for no: ";
    cin >> input;
    if ((input = 'y') || (input = 'Y'))
    {
        bool delivery = true;
    }
    else if ((input = 'n') || (input = 'N'))
    {
        bool delivery = false;
    }
    // Finna �t ver�, skrifa �t og skrifa � order ( int price )

    // Merkja hvort p�ntun s� greidd ( bool paid )
    cout << "Has the order been paid for? Type 'y' for yes and 'n' for no: ";
    cin >> input;
    if ((input = 'y') || (input = 'Y'))
    {
        bool paid = true;
    }
    else if ((input = 'n') || (input = 'N'))
    {
        bool paid = false;
    }
    // B�a til order ( Order order() ) me� �llu innif�ldu
    ///Order order(pizza, loc, paid, delivery, price);
    ///order_service.write(order);
    // Senda order ni�ur � Service klasa sem sendir � Repo og skrifar � skjal.


}
