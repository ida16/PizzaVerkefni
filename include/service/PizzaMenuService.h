#ifndef PIZZAMENUSERVICE_H
#define PIZZAMENUSERVICE_H
#include "PizzaMenuRepo.h"
#include "InvalidInputException.h"


class PizzaMenuService
{
    public:
        PizzaMenuService();
        void write(PizzaMenu& pizza);
        void read(vector<PizzaMenu>& pizza);
        bool is_valid(char topping_cnt);

    private:
        PizzaMenuRepo repo;

};

#endif // PIZZAMENUSERVICE_H
