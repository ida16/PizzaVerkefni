#ifndef PRICEREPO_H
#define PRICEREPO_H

#include "Price.h"

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

class PriceRepo
{
    public:
        PriceRepo();
        void write(Price& price);
        void read(Price& price);

    private:
};

#endif // PRICEREPO_H
