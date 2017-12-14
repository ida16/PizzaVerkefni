#include "InvalidInputException.h"

InvalidInputException::InvalidInputException(string message) {
    this->message = message;
}

string InvalidInputException::get_message() {
    return message;
}
