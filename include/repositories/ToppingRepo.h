#ifndef TOPPINGREPO_H
#define TOPPINGREPO_H
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "../models/Toppings.h"

using namespace std;

class ToppingRepo
{
    public:
        ToppingRepo();
        void write(Toppings& toppings);
        void read(vector<Toppings>& topping_vector);

    private:

};

#endif // TOPPINGREPO_H
