#include "../../include/models/PizzaMenu.h"
#include <string>
#include <istream>
#include <iostream>
#include <fstream>
#include "../../include/models/Toppings.h"
#include <vector>

//Klasi sem gerir starfsmanni kleift að búa til pizzur fyrir matseðil.

PizzaMenu::PizzaMenu(){

    int topping_cnt = 0;
    string name = "";
    int price = 0;
}

PizzaMenu::PizzaMenu(string name, int topping_cnt){

    this -> name = name;
    this -> topping_cnt = topping_cnt;

}

ostream& operator <<(ostream& out, PizzaMenu& pizza){

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

    this -> topping_cnt = topping_cnt;
    return topping_cnt;
}


int PizzaMenu::get_price(){

    this -> price = price;
    return price;
}


string PizzaMenu::set_name(string str) {

    this -> name = str;
}

int PizzaMenu::set_topping_cnt(int t){

   this -> topping_cnt = t;
}


int PizzaMenu::set_price(int p){

    this -> price = p;
}
