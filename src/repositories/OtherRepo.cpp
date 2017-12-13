/*#include "OtherRepo.h"

OtherRepo::OtherRepo() {
    //ctor
}

void OtherRepo::save_soda(Other& other) {
    ofstream fout;
    fout.open("Soda.txt", ios::app);
    if(fout.is_open()) {
        fout << other.get_soda() << endl;
    }
    fout.close();
}

void OtherRepo::save_bread(Other& other) {
    ofstream fout;
    fout.open("Bread.txt", ios::app);
    if(fout.is_open()) {
        fout << other.get_bread() << endl;
    }
    fout.close();
}

void OtherRepo::save_dessert(Other& other) {
    ofstream fout;
    fout.open("Dessert.txt", ios::app);
    if(fout.is_open()) {
        fout << other.get_dessert() << endl;
    }
    fout.close();
}

void Other::print_soda() {
    ifstream fin;
    string str;
    fin.open("Soda.txt");

    if(fin.is_open()) {
        while (!fin.eof()) {
            getline(fin, str);
            cout << str << endl;
        }
        fin.close();
    }
    else {
        cout << "Can not open file." << endl;
    }
}

void Other::print_bread() {
    ifstream fin;
    string str;
    fin.open("Bread.txt");

    if(fin.is_open()) {
        while (!fin.eof()) {
            getline(fin, str);
            cout << str << endl;
        }
        fin.close();
    }
    else {
        cout << "Can not open file." << endl;
    }
}

void Other::print_dessert() {
    ifstream fin;
    string str;
    fin.open("Dessert.txt");

    if(fin.is_open()) {
        while (!fin.eof()) {
            getline(fin, str);
            cout << str << endl;
        }
        fin.close();
    }
    else {
        cout << "Can not open file." << endl;
    }
}*/
