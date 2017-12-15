#include "PriceService.h"

PriceService::PriceService(){

}

void PriceService::write(Price& price){
    repo.write(price);
}

void PriceService::read(Price& price){
    repo.read(price);
}

int PriceService::calculate(int toppingCnt, int sizeprice){
    Price price;
    read(price);
    return (toppingCnt * price.get_topping()) + price.get_pizza() + ((sizeprice-1) * price.get_sizeprice());
}
