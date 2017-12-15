#ifndef MANAGEMENTUI_H
#define MANAGEMENTUI_H
#include <iostream>
#include <string>

#include "../models/Workplaces.h"
#include "../models/Toppings.h"
#include "../models/Other.h"
#include "../models/PizzaMenu.h"
#include "Price.h"
#include "../service/PizzaMenuService.h"
#include "../service/OtherService.h"
#include "../service/ToppingService.h"
#include "WorkplaceService.h"
#include "PriceService.h"
#include "LowerCase.h"
#include "InvalidInputException.h"
#include <stdlib.h>



class ManagementUI
{
    public:
        ManagementUI();
        void main_menu();
        void clear_screen();
        void register_location();
        void regester_pizza() throw(InvalidInputException);
        void register_topping();
        void register_prices();
        void select_topping(PizzaMenu& pizza);
        void menu();

    private:
        PizzaMenuService service;
        ToppingService topping_service;
        WorkplaceService service_w;
        PriceService service_price;
        LowerCase lower;
};

#endif // MANAGMENTUI_H
