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

PizzaMenu::PizzaMenu(string name, int toppingCnt, char s){
    this -> name = name;
    this -> toppingCnt = toppingCnt;
    int price = 0;
    this -> s = s;

}


ostream& operator <<(ostream& out, PizzaMenu& pizza){
    out << pizza.name << ", " << pizza.price << ", ";
    for (int i = 0; i < pizza.get_topping_cnt(); i++)
        {
            out << pizza.pizza_toppings[i] << ", ";
        }
    out << endl;

    return out;
}

istream& operator >>(istream& in, PizzaMenu& pizza){

    return in;

}

string PizzaMenu::get_name() {

this -> name  = name;
return name;

}

int PizzaMenu::get_topping_cnt(){

    this -> toppingCnt = toppingCnt;
    return toppingCnt;
}

int PizzaMenu::get_topping_price(){

    this -> toppingPrice = toppingPrice;
    return toppingPrice;
}


int PizzaMenu::get_price(){

    this -> price = price;
    return price;
}


string PizzaMenu::setname(string str) {

    this -> name = str;

}

int PizzaMenu::set_topping_cnt(int t){

   this -> toppingCnt = t;
}


int PizzaMenu::set_price(int p){

    this -> price = p;
}

int PizzaMenu::final_price(){

    price = basePrice + (toppingCnt * toppingPrice);
    return price;

}
