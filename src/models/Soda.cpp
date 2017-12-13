#include "Soda.h"

Soda::Soda()
{
    //ctor
}

Soda::Soda(string name,char size, int price){
this -> name = name;
this -> size = size;
this -> price = price;
}

string Soda::set_soda(string str){

    name = str;

}
string Soda::get_soda(){
    return this -> name;

}

char Soda::get_size(){
    return this -> size;

}

ostream& operator << (ostream& out, Soda& soda){
  out << soda.name << "," << soda.size << "," << soda.price;

    return out;
}

istream& operator >> (istream& in, Soda& soda){
    in >>soda.name >> soda.size >> soda.price;

    return in;
}
