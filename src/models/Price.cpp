#include "Price.h"

Price::Price(){
    pizza = 0;
    size = 0;
    topping = 0;
}

void Price::setPrice(int pizza, int size, int topping){
    this->pizza = pizza;
    this->size = size;
    this->topping = topping;
}

void Price::read_in(int price, int counter){
    if(counter = 0){
        this-> pizza = price;
    }
    else if(counter = 1){
        this-> size = price;
    }
    else if(counter = 2){
        this-> topping = price;
    }
}

ostream& operator << (ostream& out, const Price& price){
    out << price.pizza << "," << price.size << "," << price.topping;

    return out;
}

istream& operator >> (istream& in, Price& price){
    in >> price.pizza >> price.size >> price.topping;
    return in;
}
