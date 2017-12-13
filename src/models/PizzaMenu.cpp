#include "../../include/models/PizzaMenu.h"
#include <string>
#include <istream>
#include <iostream>
#include <fstream>
#include "../../include/models/Toppings.h"
#include <vector>

//Klasi sem gerir starfsmanni kleift að búa til pizzur fyrir matseðil.

PizzaMenu::PizzaMenu(){

    int toppingCnt = 0;
    string name = "";
    int price = 0;
}

PizzaMenu::PizzaMenu(string name, int toppingCnt){
    this -> name = name;
    this -> toppingCnt = toppingCnt;
    int price = 0;

}

ostream& operator <<(ostream& out, PizzaMenu& pizza){
    out << pizza.name << ", " << pizza.price << ", ";
    for (int i = 0; i < pizza.get_topping_cnt(); i++)
        {
            out << pizza.pizzaToppings[i] << ", ";
        }
    out << endl;

    return out;
}

istream& operator >>(istream& in, PizzaMenu& pizza){

    return in;

}

string PizzaMenu::getname() {

this -> name  = name;
return name;

}

int PizzaMenu::get_topping_cnt(){

    this -> toppingCnt = toppingCnt;
    return toppingCnt;
}


int PizzaMenu::getprice(){

    this -> price = price;
    return price;
}


string PizzaMenu::setname(string str) {

    this -> name = str;

}

int PizzaMenu::settoppingCnt(int t){

   this -> toppingCnt = t;
}


int PizzaMenu::setprice(int p){

    this -> price = p;
}

int PizzaMenu::finalPrice(){

    price = basePrice + (toppingCnt * toppingPrice);
    return price;

}
