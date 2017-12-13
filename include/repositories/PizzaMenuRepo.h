#ifndef PIZZAMENUREPO_H
#define PIZZAMENUREPO_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "PizzaMenu.h"


using namespace std;

class PizzaMenuRepo
{
    public:
        PizzaMenuRepo();
        void read();
        void write(PizzaMenu& pizza);

    private:
};

#endif // PIZZAMENUREPO_H
