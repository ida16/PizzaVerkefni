#ifndef SODA_H
#define SODA_H
#include "string"
#include "iostream"

using namespace std;


class Soda
{
    public:
        Soda();
        Soda(string name, int price);
        string get_soda();
        string set_soda(string str);
        char get_size();
        int set_price();
        int get_price();
        friend istream& operator >> (istream& in, Soda& soda);
        friend ostream& operator << (ostream& out, Soda& soda);


    private:
        string name;
        int price;
        char size;

};

#endif // SODA_H
