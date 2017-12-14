#ifndef PIZZAMENUSERVICE_H
#define PIZZAMENUSERVICE_H
#include "PizzaMenuRepo.h"
#include "InvalidInputException.h"


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
        bool is_valid_input(PizzaMenu& pizza);

    private:
        PizzaMenuRepo repo;
        int price_s;


};

#endif // PIZZAMENUSERVICE_H
