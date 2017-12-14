#ifndef SALESUI_H
#define SALESUI_H

#include <iostream>

#include "../models/Toppings.h"
#include "../models/PizzaMenu.h"
#include "../models/Workplaces.h"
#include "../models/Other.h"
#include "../models/Order.h"
#include "../service/OrderService.h"
#include "PizzaMenuService.h"
#include "ToppingService.h"
#include "PriceService.h"
#include "WorkplaceService.h"

class SalesUI
{
    public:
        SalesUI();
        void sales();
        void clear_screen();
        void new_order();
        void select_pizza(Order& order);
        void select_topping(PizzaMenu& pizza);
        string select_workplace();

    private:
        OrderService order_service;
        PizzaMenuService pizza_service;
        ToppingService topping_service;
        PriceService service_price;
        WorkplaceService workplace_service;
};

#endif // SALESUI_H
