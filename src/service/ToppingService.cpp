#include "ToppingService.h"

ToppingService::ToppingService()
{

}

void ToppingService::write(Toppings& topping)
{
    repo.write(topping);
}

void ToppingService::read(vector<Toppings>& toppingVector)
{
    repo.read(toppingVector);
}
