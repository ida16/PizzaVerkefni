#include "../../include/models/PizzaMenu.h"
#include <string>
#include <istream>
#include <iostream>
#include <fstream>
#include "../../include/models/Toppings.h"
#include <vector>

//Klasi sem gerir starfsmanni kleift a� b�a til pizzur fyrir matse�il.

PizzaMenu::PizzaMenu(){

    int toppingCnt = 0;
    string name = "";
    int price = 0;
}

PizzaMenu::PizzaMenu(string name, int toppingCnt){
    this -> name = name;
    this -> toppingCnt = toppingCnt;

}

ostream& operator <<(ostream& out, PizzaMenu& pizza){

    return out;
}

istream& operator >>(istream& in, PizzaMenu& pizza){

    return in;

}

string PizzaMenu::getname() {

this -> name  = name;
return name;

}

int PizzaMenu::gettoppingCnt(){

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


