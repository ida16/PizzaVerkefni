#include "Price.h"

Price::Price(){
    pizza = 0;
    size = 0;
    topping = 0;
}

void Price::setPrice(int, pizza, int size, int topping){
    this->pizza = pizza;
    this->size = size;
    this->topping = topping;
}


ostream& operator << (ostream& out, const Price& price){


    return out;
}

istream& operator >> (istream& in, Price& price){

    return in;
}
