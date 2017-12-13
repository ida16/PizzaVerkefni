#ifndef PRICESERVICE_H
#define PRICESERVICE_H

#include "Price.h"
#include "PriceRepo.h"

class PriceService
{
    public:
        PriceService();
        void write(Price& price);
        void read(Price& price);

    private:
        PriceRepo repo;
};

#endif // PRICESERVICE_H
