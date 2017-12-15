#include "ToppingRepo.h"

using namespace std;

ToppingRepo::ToppingRepo()
{

}

void ToppingRepo::write(Toppings& toppings){

    ofstream fout;
    fout.open("toppings.txt", ios::app);
    if(fout.is_open()){
        fout << toppings << ",";
    }
    fout.close();
}

void ToppingRepo::read(vector<Toppings>& toppingVector){

    ifstream fin;
    string str;
    fin.open("toppings.txt");


    if (fin.is_open()){
            while (!fin.eof()){
                getline(fin,str, ',');
                Toppings topping(str);
                toppingVector.push_back(topping);
            }

        fin.close();
        toppingVector.pop_back();
    }
    else{

        cout << "can not write in file, file is closed" << endl;
    }
}
