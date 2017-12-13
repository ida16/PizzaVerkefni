#include "PriceRepo.h"

PriceRepo::PriceRepo()
{
    //ctor
}

void PriceRepo::write(Price& price)
{
    ofstream fout;
    fout.open("PriceList.txt");
    if(fout.is_open()){
      fout << price;
    }
    fout.close();
}

void PriceRepo::read(Price& price)
{
    string str;
    int input = 0;
    ifstream fin;
    fin.open("PriceList.txt");
    if(fin.is_open()) {
        while(!fin.eof()) {
            getline(fin, str);
            input = atoi(str.c_str());
            input >> price;
        }
    }
    else {
        cout << "File not open" << endl;
    }
}
