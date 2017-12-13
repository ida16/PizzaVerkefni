#ifndef SALESUI_H
#define SALESUI_H

#include <iostream>

#include "../models/Toppings.h"
#include "../models/PizzaMenu.h"
#include "../models/Workplaces.h"
#include "../models/Other.h"
#include "../models/Order.h"
#include "../service/OrderService.h"

class SalesUI
{
    public:
        SalesUI();
        void sales();
        void clear_screen();
        void new_order();

    private:
        OrderService order_service;
};

#endif // SALESUI_H
