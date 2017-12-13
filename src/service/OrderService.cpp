#include "OrderService.h"

OrderService::OrderService(){
    //ctor
}

void OrderService::write(Order& order){
    repo.write(order);
}

int OrderService::price(Order& order){
    int p = 0;
    ///p = pizza1 + pizza2;
    return order.set_price(p);

}

void OrderService::status_update(Order& order){
    order.status_advance();
    int status = order.get_status();

    if (status = 0){
        /// First stage - Active order
    }
    else if (status = 1){
        /// Second stage - In Kitchen
    }
    else if (status = 2){
        /// Third stage - Finished by kitchen, ready for delivery.
    }
    else if (status = 3){
        /// Fourth stage - Delivered, move to legacy orders file.
    }
}
