#include "Order.h"

using namespace std;

Order::Order(){
    loc = "";
    paid = "";
    delivery = "";
    price = 0;
    status = 0;
}

string Order::get_paid(){
    return this->paid;
}

string Order::get_delivery(){
    return this->delivery;
}

int Order::get_price(){
    return this->price;
}

int Order::get_status(){
    return this->status;
}

string Order::get_loc(){
    return this->loc;
}


void Order::set_loc(string loc){
    this->loc = loc;
}

void Order::set_paid(string paid){
    this->paid = paid;
}

void Order::set_delivery(string delivery){
    this->delivery = delivery;
}

int Order::set_price(int price){
    this->price = price;
}

int Order::set_status(int status){
    this->status = status;
}

void Order::status_advance(){
    this->status++;
}

ostream& operator << (ostream& out, Order& order){
    out << order.loc << "," << order.paid << "," << order.delivery << "," << order.price << "," << order.status << "," << order.pizza_vector.size() << ",";
    for (int i = 0; i < order.pizza_vector.size(); i++){
        out << order.pizza_vector[i];
    }
    out << endl;
    return out;
}

istream& operator >> (istream& in, Order& order){

    return in;
}
