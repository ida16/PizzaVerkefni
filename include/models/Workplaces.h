#ifndef WORKPLACES_H
#define WORKPLACES_H
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class workplaces
{
    public:
        workplaces();
        void set_name(string name);
        string get_name();
        friend ostream& operator <<(ostream& out, workplaces& workplace);
        friend istream& operator >>(istream& in, workplaces& workplace);

    private:
        string name;
};

#endif // WORKPLACES_H
