#include "../../include/service/PizzaMenuService.h"


PizzaMenuService::PizzaMenuService(){
    //ctor
}

void PizzaMenuService::write(PizzaMenu& menu){
    repo.write(menu);

}
void PizzaMenuService::read(vector<PizzaMenu>& pizza){
    repo.read(pizza);

}
