#include "../../include/service/PizzaMenuService.h"


PizzaMenuService::PizzaMenuService(){
    //ctor
}

void PizzaMenuService::save(PizzaMenu& menu){

    repo.write(menu);
}

int PizzaMenuService::number_locations() {

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
