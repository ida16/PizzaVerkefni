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


