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
//#include "InvalidInputException.h"



class ManagementUI
{
    public:
        ManagementUI();
        void main_menu();
        void clear_screen();
        void register_location();
        void regester_pizza();
        void register_topping();
        void register_prices();
        void select_topping(PizzaMenu& pizza);
        void menu();
//        void registerOther(Other& other);

    private:
        PizzaMenuService service;
 //       OtherService otherservice;
        ToppingService topping_service;
        WorkplaceService service_w;
        PriceService service_price;
};

#endif // MANAGMENTUI_H
