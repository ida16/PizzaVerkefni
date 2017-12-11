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
        PizzaMenu(string name,  int toppingCnt, int price);
        friend ostream& operator <<(ostream& out, PizzaMenu& pizza);
        friend istream& operator >>(istream& in, PizzaMenu& pizza);
        string getname();
        int gettoppingCnt();
        int getprice();
        string setname(string str);
        int settoppingCnt(int t);
        int setprice(int p);
        vector <string> pizzaToppings;
        int finalPrice();
    private:
        int toppingCnt;
        string name;
        int price;
        int const basePrice = 1200;
        int const toppingPrice = 250;
};

#endif // PIZZAMENU_H
