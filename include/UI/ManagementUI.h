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
#include "WorkplaceService.h"
#include "LowerCasevalidation.h"
#include "SodaService.h"
#include "Soda.h"



using namespace std;


class ManagementUI
{
    public:
        ManagementUI();
        void main_mnu();
        void clear_screen();
        void register_location();
        void regester_pizza();
        void register_topping();
        void select_topping();
        void regester_soda();
//        void registerOther(Other& other);

    private:
        PizzaMenuService service;
 //       OtherService otherservice;
        ToppingService topping_service;
        WorkplaceService service_w;
        LowerCasevalidation lower;
        SodaService soda;
};

#endif // MANAGMENTUI_H
