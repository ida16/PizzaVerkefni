#include "WorkplacesRepo.h"

WorkplacesRepo::WorkplacesRepo() {
    //ctor
}

void WorkplacesRepo::save(workplaces& workplaces) {
    //string name = "";
    ofstream fout;
    fout.open("workplaces.txt", ios::app);
    if(fout.is_open()){
        fout << workplaces.get_name() << endl;
    }
    fout.close();
}

void WorkplacesRepo::print() {
    ifstream fin;
    string str;
    fin.open("workplaces.txt");

    if (fin.is_open()){
            while (!fin.eof()){
                getline(fin,str);
                cout << str << endl;
            }

        fin.close();
    }
    else
    {
        cout << "File is closed" << endl;
    }
}

void WorkplacesRepo::print_line(int line_no){ // Prentar uppgefna línu eftir línunúmeri

    ifstream fin;
    string str;
    // open file to search
    fin.open("workplaces.txt");
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

int WorkplacesRepo::number_locations() {
    ifstream fin;
    string str;
    // open file to search
    fin.open("workplaces.txt");
    if(fin.is_open()) {
        unsigned int count_line = 0;
        while(getline(fin, str)) {
            count_line++;
        }
        fin.close();
        return count_line;
    }
    else {
        cout << "Unable to open file.";
    }
}
