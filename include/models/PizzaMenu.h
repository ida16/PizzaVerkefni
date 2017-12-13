#ifndef PIZZAMENU_H
#define PIZZAMENU_H
#include <string>
#include <istream>
#include <iostream>
#include <fstream>
#include "toppings.h"
#include <vector>
#include "Other.h"

using namespace std;


class PizzaMenu

{
    public:
        PizzaMenu();
        PizzaMenu(string name,  int toppingCnt);
        friend ostream& operator <<(ostream& out, PizzaMenu& pizza);
        friend istream& operator >>(istream& in, PizzaMenu& pizza);
        string get_name();
        int get_topping_cnt();
        int get_price();
        string set_name(string str);
        int set_topping_cnt(int t);
        int set_price(int p);
        vector <string> pizza_toppings;
    private:
        int topping_cnt;
        string name;
        int price;
};

#endif // PIZZAMENU_H
