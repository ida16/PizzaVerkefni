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
        PizzaMenu(string name,  int toppingCnt, char s);
        friend ostream& operator <<(ostream& out, PizzaMenu& pizza);
        friend istream& operator >>(istream& in, PizzaMenu& pizza);
        string get_name();
        int get_topping_cnt();
        int get_price();
        string setname(string str);
        int set_topping_cnt(int t);
        int set_price(int p);
        vector <string> pizza_toppings;
        int final_price();
        int get_topping_price();
    private:
        char s;
        int toppingCnt;
        string name;
        int price;
        int basePrice = 1200;
        int toppingPrice = 250;
};

#endif // PIZZAMENU_H
