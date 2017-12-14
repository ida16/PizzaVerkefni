#ifndef PIZZAMENU_H
#define PIZZAMENU_H
#include <string>
#include <istream>
#include <iostream>
#include "Toppings.h"
#include "PriceService.h"
#include <vector>

using namespace std;


class PizzaMenu

{
    public:
        PizzaMenu();
        PizzaMenu(string name,  int toppingCnt);
        friend ostream& operator <<(ostream& out, PizzaMenu& pizza);
        friend istream& operator >>(istream& in, PizzaMenu& pizza);
        string getname();
        int get_topping_cnt();
        int getprice();
        int get_size();
        void setname(string str);
        void settoppingCnt(int t);
        void setprice(int p);
        void set_size(int s);
        vector<Toppings> topp_vector;
    private:
        int toppingCnt;
        string name;
        int size;
        int price;
};

#endif // PIZZAMENU_H
