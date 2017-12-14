#include "OrderService.h"

OrderService::OrderService(){
    //ctor
}

void OrderService::write(Order& order){
    repo.write(order);
}

void OrderService::statusUpdate(Order& order){
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

int OrderService::calculate_price(Order& order){
    int result = 0;
    for (int i = 0; i < order.pizza_vector.size(); i++){
        result += order.pizza_vector[i].getprice();
        cout << "check.>" << endl;
    }
    order.set_price(result);
    return result;
}

void OrderService::read(vector<Order>& orders){
    repo.read(orders);

}
