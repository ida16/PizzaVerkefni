#include "WorkplacesRepo.h"

WorkplacesRepo::WorkplacesRepo()
{
    //ctor
}

void WorkplacesRepo::write(workplaces& workplaces)
{
    //string name = "";
    ofstream fout;
    fout.open("workplaces.txt", ios::app);
    if(fout.is_open()){
        fout << workplaces;
    }
    fout.close();
}

void WorkplacesRepo::read(vector<workplaces> wplace_vector)
{
    ifstream fin;
    string str;
    workplaces wplace;
    fin.open("workplaces.txt");

    if (fin.is_open()){
            while (!fin.eof()){
                getline(fin,str, ',');
                wplace.set_name(str);
                wplace_vector.push_back(wplace);
            }

        fin.close();
    }
    else
    {
        cout << "can not write in file, file is closed" << endl;
    }
}
