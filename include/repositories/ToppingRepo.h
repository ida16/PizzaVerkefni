#ifndef TOPPINGREPO_H
#define TOPPINGREPO_H
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "../models/Toppings.h"

class ToppingRepo
{
    public:
        ToppingRepo();
        void write(Toppings& toppings);
        void read(vector<Toppings>& toppingVector);

    private:

};

#endif // TOPPINGREPO_H
