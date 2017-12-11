#ifndef KITCHENUI_H
#define KITCHENUI_H

#include <iostream>

#include "../models/Toppings.h"
#include "../models/PizzaMenu.h"
#include "../models/Workplaces.h"
#include "../models/Other.h"
#include "WorkplacesRepo.h"


class KitchenUI
{
    public:
        KitchenUI();
        void kitchen();
        void clear_screen();


    private:
};

#endif // KITCHENUI_H
