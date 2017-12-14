#ifndef PIZZAMENUREPO_H
#define PIZZAMENUREPO_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdlib.h>

#include "PizzaMenu.h"


class PizzaMenuRepo
{
    public:
        PizzaMenuRepo();
        void read(vector<PizzaMenu>& pizza);
        void write(PizzaMenu& pizza);

    private:
};

#endif // PIZZAMENUREPO_H
