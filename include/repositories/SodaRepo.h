#ifndef SODAREPO_H
#define SODAREPO_H
#include "Soda.h"
#include <iostream>
#include <fstream>
#include <vector>


class SodaRepo
{
    public:
        SodaRepo();
        void write(Soda& soda);
        void read();


    private:
};

#endif // SODAREPO_H
