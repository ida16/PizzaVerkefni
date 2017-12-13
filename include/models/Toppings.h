#ifndef TOPPINGS_H
#define TOPPINGS_H
//#include "ToppingRepo.h"
#include <string>
#include <istream>
#include <iostream>
#include <fstream>

using namespace std;

// Class to regester toppings
// Tók út price þar sem manegment er með sér flokk fyrir price
class Toppings
{
    public:
        Toppings();
        Toppings (string name);
        string get_name();
        friend ostream& operator <<(ostream& out, Toppings& topping);
        friend istream& operator >>(istream& in, Toppings& topping);
        //void save();
        //void print();
        void start_regester(Toppings& toppings);


    private:
        string name;
        //int price;

};

#endif // TOPPINGS_H
