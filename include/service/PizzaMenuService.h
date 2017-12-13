#ifndef PIZZAMENUSERVICE_H
#define PIZZAMENUSERVICE_H
#include "PizzaMenuRepo.h"


class PizzaMenuService
{
    public:
        PizzaMenuService();
        int number_locations();
        void print_line (int line_no);
        void write(PizzaMenu& pizza);
        int final_price(PizzaMenu& pizza, int price);
        int size_price(char input);
        void read();

    private:
        PizzaMenuRepo repo;
        int price_s;

};

#endif // PIZZAMENUSERVICE_H
