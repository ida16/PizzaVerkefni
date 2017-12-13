#include "../../include/models/Workplaces.h"

workplaces::workplaces(){

    name = "";
}

void workplaces::set_name() {
    this->name = name;
}

string workplaces::get_name() {
    return this->name;
}

ostream& operator <<(ostream& out, workplaces& workplace){
    out << workplace.name << ",";

    return out;
}

istream& operator >>(istream& in, workplaces& workplace){
    in >> workplace.name;

    return in;
}

/*void workplaces::save() {

    ofstream fout;
    fout.open("workplaces.txt", ios::app);
    if(fout.is_open()){
        fout << name << endl;
    }
    fout.close();
}

void workplaces::print() {

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
    else {
        cout << "can not write in file, file is closed" << endl;
    }
}

void workplaces::print_line(int line_no){ // Prentar uppgefna línu eftir línunúmeri

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

}*/

/*void workplaces::start_register() {

    char input = 'y';

    while (input == 'y'|| input == 'Y')
    {
        workplaces workplace;
        cout << "Enter a Location: ";
        cin >> workplace;
        wRepo.save();

        cout << "Do you want to register more Locations? Type 'y' for yes or 'n' for no: ";
        cin >> input;
    }
}*/
/*
int workplaces::number_locations() {
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
*/
