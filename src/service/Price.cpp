#include "../../include/service/Price.h"

Price::Price() {
    meat = 0.0;
    vegetable = 0.0;
    cheese = 0.0;
}

Price::~Price() {
    //dtor
}

void Price::set_price(double meat, double vegetable, double cheese) {
    this->meat = meat;
    this->vegetable = vegetable;
    this->cheese = cheese;
}

void Price::txt_price() {
    cout << "What is the price of meat? ";
    cin >> meat;
    cout << "What is the price of vegetables? ";
    cin >> vegetable;
    cout << "What is the price of extra cheese? ";
    cin >> cheese;
    cout << endl;


    ofstream fout;
    fout.open("PriceList.txt", ios::app);
    if(fout.is_open()){
      fout << meat << endl;
      fout << vegetable << endl;
      fout << cheese << endl;
    }
    fout.close();
}

void Price::print_price() {
    string str;
    ifstream fin;
    fin.open("PriceList.txt");
    if(fin.is_open()) {
        while(!fin.eof()) {
            getline(fin, str);
            fin >> meat;
            fin >> vegetable;
            fin >> cheese;

            cout << "The price that you entered for toppings are " << endl;
            cout << "Price for meat:        " << meat << endl;
            cout << "Price for vegetables:  " << vegetable << endl;
            cout << "Price for cheese:      " << cheese << endl;
        }
        cout << fin.eof() << endl;
    }
    else {
        cout << "File not open" << endl;
    }
}

/*void Price::read_price() {
    cout << "What is the price of meat? ";
    cin >> meat;
    cout << "What is the price of vegetables? ";
    cin >> vegetable;
    cout << "What is the price of extra cheese? ";
    cin >> cheese;
    cout << endl;
}*/

void Price::set_number(int numb_meat, int numb_vegetable, int numb_cheese) {
    this->numb_meat = numb_meat;
    this->numb_vegetable = numb_vegetable;
    this->numb_cheese = numb_cheese;
}

void Price::multiple_topping() {
    cout << "How many toppings of meat do you want? ";
    cin >> numb_meat;
    cout << "How many toppings of vegetables do you want? ";
    cin >> numb_vegetable;
    cout << "How many layers of extra cheese do you want? ";
    cin >> numb_cheese;
    cout << endl;

}

void Price::calc_topping() {
    meat = numb_meat*meat;
    vegetable = numb_vegetable*vegetable;
    cheese = numb_cheese*cheese;
}

void Price::total_price() {
    cout << "Total price for your pizza with " << numb_meat << " toppings of meat, ";
    cout << numb_vegetable << " toppings of vegetables and " << numb_cheese << " layers of extra cheese is: ";
    cout << meat+vegetable+cheese << endl;

    cout << endl;
}

ostream& operator << (ostream& out, const Price& price) {
    out << "The price for meat is: " << price.meat << endl;
    out << "The price vegetables is: " << price.vegetable << endl;
    out << "The price for cheese is: " << price.cheese << endl;

    return out;
}
