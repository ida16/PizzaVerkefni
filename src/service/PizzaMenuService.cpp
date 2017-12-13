#include "../../include/service/PizzaMenuService.h"


PizzaMenuService::PizzaMenuService(){
    //ctor
}

void PizzaMenuService::write(PizzaMenu& menu){
    repo.write(menu);

}

void PizzaMenuService::read(){
    repo.read();

}




