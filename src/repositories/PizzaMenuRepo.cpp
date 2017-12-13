#include "PizzaMenuRepo.h"

PizzaMenuRepo::PizzaMenuRepo(){
    //ctor
}


void PizzaMenuRepo::save(PizzaMenu& menu){
 ofstream fout;
    fout.open("Pizza-Menu.txt", ios::app);
    if(fout.is_open()){
        fout << menu;
    }
    fout.close();
}

void PizzaMenuRepo::read(){

    ifstream fin;
    string str;
    fin.open("Pizza-Menu.txt");
    vector<string> pizza;

    if (fin.is_open()){

            while (getline(fin, str)){
                    pizza.push_back(str);
                    str = "";
            }
            for(size_t i = 0; i < pizza.size(); i++){
        cout << pizza[i] << endl;
         fin.close();
        }
    }

    else{

        cout << "can not write in file, file is closed" << endl;
    }
}


