#ifndef INVALIDINPUTEXCEPTION_H
#define INVALIDINPUTEXCEPTION_H
#include <string>

using namespace std;


class InvalidInputException
{
    public:
        InvalidInputException(string message);
        string get_message();

    private:
        string message;
};

#endif // INVALIDINPUTEXCEPTION_H
