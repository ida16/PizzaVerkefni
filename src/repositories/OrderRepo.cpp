#include "OrderRepo.h"

OrderRepo::OrderRepo()
{
    //ctor
}

void OrderRepo::read(vector<Order>& orders){

    ifstream fin;
    string str;
    fin.open("activeorders.txt");

    if (fin.is_open()){
        while (!fin.eof()){
            Order dummyorder;
            getline(fin, str, ',');
            dummyorder.set_loc(str);
            getline(fin, str, ',');
            dummyorder.set_paid(str);
            getline(fin, str, ',');
            dummyorder.set_delivery(str);
            getline(fin, str, ',');
            dummyorder.set_price(atoi(str.c_str()));
            getline(fin, str, ',');
            dummyorder.set_status(atoi(str.c_str()));
            getline(fin, str, ',');
            int no_pizza = atoi(str.c_str());
            for (int i = 0; i < no_pizza; i++){
                PizzaMenu pizza;
                getline(fin, str, ',');
                pizza.setname(str);
                getline(fin, str, ',');
                pizza.set_size(atoi(str.c_str()));
                getline(fin, str, ',');
                pizza.settoppingCnt(atoi(str.c_str()));
                for (int j = 0; j < pizza.get_topping_cnt(); j++){
                    getline(fin, str, ',');
                    Toppings topping(str);
                    pizza.topp_vector.push_back(topping);
                }
                pizza.setprice(price_service.calculate(pizza.get_topping_cnt(), pizza.get_size()));
                dummyorder.pizza_vector.push_back(pizza);
            }
            getline(fin, str);
            orders.push_back(dummyorder);
        }
        orders.pop_back();
        fin.close();
    }
    else{

        cout << "can not write in file, file is closed" << endl;
    }
}

void OrderRepo::write(Order& order)
{
    ofstream fout;
    fout.open("activeorders.txt", ios::app);
    if(fout.is_open()){
        fout << order;
    }
    fout.close();
}
