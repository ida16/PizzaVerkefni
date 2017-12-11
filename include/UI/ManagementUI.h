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
        void mainMenu();
        void clear_screen();
        void registerLocation();
        void regesterPizza();
        void registerTopping();
        void selectTopping();
        void Menu();
        void registerOther(Other& other);

    private:
        PizzaMenuService service;
        OtherService otherservice;
        ToppingService toppingservice;
};

#endif // MANAGMENTUI_H
