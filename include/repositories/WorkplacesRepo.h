#ifndef WORKPLACESREPO_H
#define WORKPLACESREPO_H

#include "../models/Workplaces.h"
#include <string>
#include <iostream>
#include <fstream>


class WorkplacesRepo
{
    public:
        WorkplacesRepo();
        void write(workplaces& workplaces);
        void read(vector<workplaces> wplace_vector);


    private:
};

#endif // WORKPLACESREPO_H
