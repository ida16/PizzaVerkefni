#ifndef ORDER_H
#define ORDER_H

#include <iostream>

#include "PizzaMenu.h"


class Order
{
    public:
        Order();
        string get_paid();
        string get_delivery();
        int get_price();
        int get_status();
        string get_loc();
        void set_loc(string loc);
        void set_paid(string paid);
        void set_delivery(string delivery);
        int set_price(int price);
        int set_status(int status);
        void status_advance();
        friend ostream& operator << (ostream& out, Order& order);
        friend istream& operator >> (istream& in, Order& order);
        vector<PizzaMenu> pizza_vector;
    private:
        string loc;
        string paid;
        string delivery;
        int price;
        int status;

};

#endif // ORDER_H
