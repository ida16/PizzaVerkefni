/*#include "../../include/models/Other.h"

Other::Other() {

    string soda = "";
    string bread = "";
    string dessert = "";
}

Other::Other(string soda){
    this -> soda = soda;
}

string Other::set_soda(string str){

    soda = str;

}

string Other::set_bread(string str){

    bread = str;

}

string Other::set_dessert(string str){

    dessert = str;

}

string Other::get_soda(){
    return this -> soda;

}

string Other::get_bread(){

    return this -> bread;

}

string Other::get_dessert(){

    return this -> dessert;

}

ostream& operator << (ostream& out, Other& other) {
    out << other.soda << " " << other.bread;
    out << " " << other.dessert << endl;

    return out;
}

istream& operator >> (istream& in, Other& other) {
    char answer = ' ';

    while(answer != 'N' || answer != 'n') {
        cout << "Please type in sodas: ";
        in >> other.soda;
        cout << "Please type in other types of bread: ";
        in >> other.bread;
        cout << "Please type in desserts: ";
        in >> other.dessert;
        cout << endl << endl;
        cout << "Do you want to regester more? ";
        in >> answer;
    }

    return in;
}


void Other::clear_screen(){

    for(int i = 0; i < 30; i++){
        cout << endl;
    }
}*/

