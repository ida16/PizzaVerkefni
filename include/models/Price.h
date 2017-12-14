#ifndef PRICE_H
#define PRICE_H

#include <iostream>

using namespace std;

class Price
{
    public:
        Price();
        Price(int pizza, int sizeprice, int topping);
        void read_in(int price, int counter);
        int get_pizza();
        int get_sizeprice();
        int get_topping();
        friend ostream& operator << (ostream& out, const Price& price);
        friend istream& operator >> (istream& in, Price& price);

    private:
        int pizza;
        int sizeprice;
        int topping;
};

#endif // PRICE_H
