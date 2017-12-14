#include "Price.h"

Price::Price(){
    pizza = 0;
    sizeprice = 0;
    topping = 0;
}

Price::Price(int pizza, int sizeprice, int topping){
    this->pizza = pizza;
    this->sizeprice = sizeprice;
    this->topping = topping;
}

void Price::read_in(int price, int counter){
    if(counter = 0){
        this-> pizza = price;
    }
    else if(counter = 1){
        this-> sizeprice = price;
    }
    else if(counter = 2){
        this-> topping = price;
    }
}

int Price::get_pizza(){
    return this-> pizza;
}

int Price::get_sizeprice(){
    return this-> sizeprice;
}

int Price::get_topping(){
    return this-> topping;
}

ostream& operator << (ostream& out, const Price& price){
    out << price.pizza << endl << price.sizeprice << endl << price.topping;

    return out;
}

istream& operator >> (istream& in, Price& price){
    in >> price.pizza >> price.sizeprice >> price.topping;
}
