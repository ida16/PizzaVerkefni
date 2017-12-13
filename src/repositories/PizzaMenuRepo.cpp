#include "PizzaMenuRepo.h"

PizzaMenuRepo::PizzaMenuRepo(){
    //ctor
}
void PizzaMenuRepo::read(){
    vector<string> from_file;
    ifstream fin;
    string str;
    fin.open("Pizza-Menu.txt");

    if (fin.is_open()){
            while (getline(fin,str)){
                from_file.push_back(str);
                str = "";

            }
        for(int i = 0; i < from_file.size(); i++){
        cout << from_file[i] << endl;

        fin.close();
    }
    }
    else{

        cout << "can not write in file, file is closed" << endl;
    }
    }


void PizzaMenuRepo::write(PizzaMenu& menu){
 ofstream fout;
    fout.open("Pizza-Menu.txt", ios::app);
    if(fout.is_open()){
        fout << menu;
    }
    fout.close();
}
