#ifndef MAINUI_H
#define MAINUI_H
#include "ManagementUI.h"
#include "SalesUI.h"
#include "KitchenUI.h"
#include "DeliveryUI.h"


class MainUI
{
    public:
        MainUI();
        void main();
        void management();
        void sales();
        void kitchen();
        void delivery();
        void clear_screen();


    private:
        ManagementUI main_m;
        SalesUI main_s;
        KitchenUI main_k;
        DeliveryUI main_d;
};

#endif // MAINUI_H
