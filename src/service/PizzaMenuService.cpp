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

bool PizzaMenuService::is_valid(char topping_cnt){
    if (!isdigit(topping_cnt)) {
        throw (InvalidInputException("Invalid input"));
        return false;
    }
    else{
        return true;
    }

}
