#include "LowerCase.h"

LowerCase::LowerCase()
{
    //ctor
}

string LowerCase::to_lower(string name){
    for(unsigned i = 0; i < name.length(); i++){

        name[i] = tolower(name[i]);
    }
    return name;

}
