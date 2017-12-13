#ifndef PRICE_H
#define PRICE_H

#include <iostream>

using namespace std;

class Price
{
    public:
        Price();
        void setPrice(int pizza, int size, int topping);
        void read_in(int price, int counter);
        friend ostream& operator << (ostream& out, const Price& price);
        friend istream& operator >> (istream& in, Price& price);

    private:
        int pizza;
        int size;
        int topping;
};

#endif // PRICE_H
