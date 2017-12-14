#ifndef PIZZAMENUSERVICE_H
#define PIZZAMENUSERVICE_H
#include "PizzaMenuRepo.h"


class PizzaMenuService
{
    public:
        PizzaMenuService();
        void write(PizzaMenu& pizza);
        void read(vector<PizzaMenu>& pizza);

    private:
        PizzaMenuRepo repo;

};

#endif // PIZZAMENUSERVICE_H
