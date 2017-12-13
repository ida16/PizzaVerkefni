#ifndef MANAGEMENTUI_H
#define MANAGEMENTUI_H
#include <iostream>
#include <string>

#include "../models/Workplaces.h"
#include "../models/Toppings.h"
#include "../models/Other.h"
#include "../models/PizzaMenu.h"
#include "../service/PizzaMenuService.h"
#include "../service/OtherService.h"
#include "../service/ToppingService.h"

using namespace std;


class ManagementUI
{
    public:
        ManagementUI();
        void main_menu();
        void clear_screen();
        void register_location();
        void regester_pizza();
        void register_topping();
        void select_topping();
        void Menu();
//        void register_other(Other& other);

    private:
        PizzaMenuService service;
 //       OtherService otherservice;
        ToppingService topping_service;
};

#endif // MANAGMENTUI_H
