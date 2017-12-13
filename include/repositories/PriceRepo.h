#ifndef PRICEREPO_H
#define PRICEREPO_H

#include "Price.h"

class PriceRepo
{
    public:
        PriceRepo();
        void write(Price& price);
        void read(Price& price);

    private:
};

#endif // PRICEREPO_H
