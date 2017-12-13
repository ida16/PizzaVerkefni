#include "ToppingService.h"

ToppingService::ToppingService() {
    //ctor
}

void ToppingService::write(Toppings& topping) {
    repo.write(topping);
}

void ToppingService::read(vector<Toppings>& topping_vector) {
    repo.read(topping_vector);
}
