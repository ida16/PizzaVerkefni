#include "../../include/models/PizzaMenu.h"
#include <string>
#include <istream>
#include <iostream>
#include "../../include/models/Toppings.h"
#include <vector>

//Klasi sem gerir starfsmanni kleift a� b�a til pizzur fyrir matse�il.

PizzaMenu::PizzaMenu(){

    string name = "";
}

PizzaMenu::PizzaMenu(string name){
    this -> name = name;

}

ostream& operator <<(ostream& out, PizzaMenu& pizza){
    out << pizza.name;
    return out;
}

istream& operator >>(istream& in, PizzaMenu& pizza){
    in >> pizza.name;
    return in;

}

string PizzaMenu::getname() {

this -> name  = name;
return name;

}

string PizzaMenu::setname(string str) {

    this -> name = str;

}

