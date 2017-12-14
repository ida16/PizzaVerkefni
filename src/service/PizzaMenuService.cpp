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

int PizzaMenuService::number_locations()
{
    ifstream fin;
    string str;
    // open file to search
    fin.open("Pizza-Menu.txt");
    if(fin.is_open()) {
        unsigned int count_line = 0;
        while(getline(fin, str)) {
            count_line++;
        }
        fin.close();
        return count_line;
    }
    else cout << "Unable to open file.";

}

void PizzaMenuService::print_line (int line_no){ // Prentar uppgefna línu eftir línunúmeri

    ifstream fin;
    string str;
    // open file to search
    fin.open("Pizza-Menu.txt");
    if(fin.is_open()) {
        unsigned int count_line = 0;
        while(getline(fin, str)) {
            count_line++;
            if (count_line == line_no) {
                cout << str << endl;
            }
        }
            fin.close();
    }
    else cout << "Unable to open file.";
}

int PizzaMenuService::final_price(PizzaMenu& pizza, int price){

    int t = 0;
    t = price + (pizza.get_topping_cnt() * pizza.get_topping_price());
    return pizza.set_price(t);

}

int PizzaMenuService::size_price(char input){

    //if(validate_input(input)) {

    if (input == '1'){

        this -> price_s = 1200;
        return price_s;

    }
    else if (input == '2') {

        this -> price_s = 1600;
        return price_s;

    }
    else if (input == '3'){

        this -> price_s = 1800;
        return price_s;
    }
}

bool PizzaMenuService::is_valid_topping_count(int topping_count) {
    if(!isdigit(topping_count)) {
        throw (InvalidInputException("Invalid!"));
        return false;
    }
    else
        return true;

}
