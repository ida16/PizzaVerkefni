#include "PizzaMenuRepo.h"

using namespace std;

PizzaMenuRepo::PizzaMenuRepo(){
    //ctor
}


void PizzaMenuRepo::write(PizzaMenu& menu){
 ofstream fout;
    fout.open("Pizza-Menu.txt", ios::app);
    if(fout.is_open()){
        fout << menu << endl;
    }
    fout.close();
}

void PizzaMenuRepo::read(vector<PizzaMenu>& pizza_vector){

    ifstream fin;
    string str;
    fin.open("Pizza-Menu.txt");

    if (fin.is_open()){
        while (!fin.eof()){
            PizzaMenu pizza;
            getline(fin, str, ',');
            pizza.setname(str);
            getline(fin, str, ',');
            pizza.settoppingCnt(atoi(str.c_str()));
            for (int i = 0; i < pizza.get_topping_cnt(); i++){
                getline(fin, str, ',');
                Toppings topping(str);
                pizza.topp_vector.push_back(topping);
            }
            getline(fin, str);
            pizza_vector.push_back(pizza);
        }
        pizza_vector.pop_back();
        fin.close();
    }
    else{

        cout << "can not write in file, file is closed" << endl;
    }
}
