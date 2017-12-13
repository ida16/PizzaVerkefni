#ifndef PRICE_H
#define PRICE_H
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


class Price
{
    public:
        Price();
        virtual ~Price();
        void set_price(double meat, double vegetable, double cheese);
        void set_number(int numb_meat, int numb_vegetable, int numb_cheese);
        void txt_price();
        void print_price();
        //void readPrice();
        void multiple_topping();
        void calc_topping();
        void total_price();

        friend ostream& operator << (ostream& out, const Price& price);


    private:
        double meat;
        double vegetable;
        double cheese;
        int numb_meat;
        int numb_vegetable;
        int numb_cheese;
};

#endif // PRICE_H
