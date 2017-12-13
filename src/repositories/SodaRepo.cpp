#include "SodaRepo.h"

SodaRepo::SodaRepo()
{
    //ctor
}

void SodaRepo::write(Soda& soda)
{
    ofstream fout;
    fout.open("Soda.txt", ios::app);
    if(fout.is_open()) {
        fout << soda << endl;
    }
    fout.close();
}

void SodaRepo::read(){
    vector<string> from_file;
    ifstream fin;
    string str;
    fin.open("Soda.txt");

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
