#include "InvalidInputException.h"

InvalidInputException::InvalidInputException(string name){

    this -> message = name;
}

string InvalidInputException::get_message() {

    return this-> message;
}




