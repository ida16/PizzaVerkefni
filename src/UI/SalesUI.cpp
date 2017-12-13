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
    char input;
    // Kalla í pizzuval til að velja pizzu í order
    // Pizzuval sækir vector af pizzum og prentar á sk´ja
    // Notandi velur pizzu af lista ( PizzaMenu object )

    // Kalla í location val til að velja staðsetningu
    // location val sækir vector af location og prentar
    // Notandi velur location ( Workplace object

    // Spyrja hvort pöntun sé sótt eða send ( bool delivery )
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
    // Finna út verð, skrifa út og skrifa í order ( int price )

    // Merkja hvort pöntun sé greidd ( bool paid )
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
    // Búa til order ( Order order() ) með öllu inniföldu
    ///Order order(pizza, loc, paid, delivery, price);
    ///order_service.write(order);
    // Senda order niður í Service klasa sem sendir í Repo og skrifar í skjal.


}
