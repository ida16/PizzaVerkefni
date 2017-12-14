#ifndef ORDERSERVICE_H
#define ORDERSERVICE_H

#include "Order.h"
#include "OrderRepo.h"
#include "PriceService.h"


class OrderService
{
    public:
        OrderService();
        void write(Order& order);
        void read(vector<Order>& orders);
        int price(Order& order);
        void statusUpdate(Order& order);
        int calculate_price(Order& order);

    private:
        OrderRepo repo;
        PriceService price_service;

};

#endif // ORDERSERVICE_H
