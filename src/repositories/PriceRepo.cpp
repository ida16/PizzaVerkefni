#include "PriceRepo.h"

PriceRepo::PriceRepo()
{

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
    int counter = 0;
    ifstream fin;
    fin.open("PriceList.txt");
    if(fin.is_open()) {
        while(!fin.eof()) {
            fin >> price;
        }
    }
    else {
        cout << "File not open" << endl;
    }
}
