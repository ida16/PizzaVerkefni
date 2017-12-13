#ifndef TOPPINGSERVICE_H
#define TOPPINGSERVICE_H

#include <vector>
#include "../models/Toppings.h"
#include "../repositories/ToppingRepo.h"

class ToppingService
{
    public:
        ToppingService();
        void write(Toppings& topping);
        void read(vector<Toppings>& topping_vector);

    private:
        ToppingRepo repo;
};

#endif // TOPPINGSERVICE_H
