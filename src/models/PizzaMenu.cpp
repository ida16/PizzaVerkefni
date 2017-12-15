#include "../../include/models/PizzaMenu.h"
#include <string>
#include <istream>
#include <iostream>
#include <fstream>
#include "../../include/models/Toppings.h"
#include "PriceService.h"
#include <vector>

//Klasi sem gerir starfsmanni kleift að búa til pizzur fyrir matseðil.

PizzaMenu::PizzaMenu(){

    this->toppingCnt = 0;
    this->name = "";
    this->size = 0;
    this->price = 0;
}

PizzaMenu::PizzaMenu(string name, int toppingCnt){
    this -> name = name;
    this -> toppingCnt = toppingCnt;
}

ostream& operator <<(ostream& out, PizzaMenu& pizza){
    out << pizza.name << "," << pizza.size << "," << pizza.toppingCnt << ",";
    for (int i = 0; i < pizza.topp_vector.size(); i++)
        {
            out << pizza.topp_vector[i] << ",";
        }

    return out;
}

istream& operator >>(istream& in, PizzaMenu& pizza){

    return in;

}

string PizzaMenu::getname() {
    return this -> name  = name;
}

int PizzaMenu::get_topping_cnt(){
    return this->toppingCnt;
}


int PizzaMenu::getprice(){
    return this-> price;
}

int PizzaMenu::get_size(){
    return this-> size;
}


void PizzaMenu::setname(string str) {
    this -> name = str;
}

void PizzaMenu::settoppingCnt(int t){
   this -> toppingCnt = t;
}


void PizzaMenu::setprice(int p){
    this -> price = p;
}

void PizzaMenu::set_size(int s){
    this -> size = s;
}
