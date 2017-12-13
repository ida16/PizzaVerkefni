#ifndef PIZZAMENUREPO_H
#define PIZZAMENUREPO_H

#include <iostream>
#include <fstream>
#include <vector>
#include "../models/PizzaMenu.h"
#include <string>

using namespace std;


class PizzaMenuRepo
{
    public:
        PizzaMenuRepo();
        void read();
        void write(PizzaMenu& pizza);
        void read_in_vector(string line);

    private:
        PizzaMenu menu;
};

#endif // PIZZAMENUREPO_H
