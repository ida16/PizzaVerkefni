#ifndef PRICE_H
#define PRICE_H


class Price
{
    public:
        Price();
        void setPrice(int, pizza, int size, int topping);
        friend ostream& operator << (ostream& out, const Price& price);
        friend istream& operator >> (istream& in, Price& price);

    private:
        int pizza;
        int size;
        int topping;
};

#endif // PRICE_H
