#ifndef ORDERREPO_H
#define ORDERREPO_H

#include <iostream>
#include <fstream>
#include <vector>
#include "Order.h"
#include <stdlib.h>
#include <PriceService.h>

using namespace std;

class OrderRepo
{
    public:
        OrderRepo();
        void write(Order& order);
        void read(vector<Order>& orders);

    private:
        PriceService price_service;
};

#endif // ORDERREPO_H
