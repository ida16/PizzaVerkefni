#include "../../include/models/Toppings.h"

//constructor sem n�ll stillir
Toppings::Toppings(){

    string name = "";
}

//constructor til a� sl� inn
Toppings::Toppings(string name){

    this -> name = name;
}

string Toppings::get_name(){
    return this-> name;
}

ostream& operator <<(ostream& out, Toppings& topping){

    out << topping.name;

    return out;
}

istream& operator >>(istream& in, Toppings& topping){

    in >> topping.name;

    return in;

}
