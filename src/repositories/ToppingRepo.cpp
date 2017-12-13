#include "ToppingRepo.h"

ToppingRepo::ToppingRepo()
{
    //ctor
}

void ToppingRepo::write(Toppings& toppings){

    ofstream fout;
    fout.open("toppings.txt", ios::app);
    if(fout.is_open()){
        fout << toppings << ",";
    }
    fout.close();
}

void ToppingRepo::read(vector<Toppings>& topping_vector){

    ifstream fin;
    string str;
    fin.open("toppings.txt");

    if (fin.is_open()){
            while (!fin.eof()){
                getline(fin,str, ',');
                Toppings topping(str);
                topping_vector.push_back(topping);
            }

        fin.close();
        topping_vector.pop_back();
    }
    else{

        cout << "File is closed" << endl;
    }
}
