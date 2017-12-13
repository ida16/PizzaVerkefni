#include "PriceService.h"

PriceService::PriceService(){
    //ctor
}

void write(Price& price){
    repo.write(price);
}

void read(Price& price){
    repo.read(price);
}
