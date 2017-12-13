#include "LowerCasevalidation.h"

LowerCasevalidation::LowerCasevalidation()
{
    //ctor
}
//If user input has upper case letters the function will change it all to lower.
string LowerCasevalidation::switch_to_lower(string input){
    for(size_t i = 0; i < input.length();i++){

        input[i] = tolower(input[i]);
    }
    return input;
}
