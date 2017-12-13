/*#ifndef OTHER_H
#define OTHER_H
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class Other
// bua til 2 klasa í viðbot
{
    public:
        Other();
        Other(string soda);
        Other(string soda, string bread, string dessert);
        void print_soda();
        void print_bread();
        void print_dessert();
        void clear_screen();
        string get_soda();
        string get_bread();
        string get_dessert();
        string set_soda(string str);
        string set_bread(string str);
        string set_dessert(string str);

        friend ostream& operator << (ostream& out, Other& other);
        friend istream& operator >> (istream& in, Other& other);

    private:
        string soda;
        string bread;
        string dessert;

};

#endif // OTHER_H
*/
