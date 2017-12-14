#ifndef WORKPLACESERVICE_H
#define WORKPLACESERVICE_H

#include <vector>

#include "WorkplacesRepo.h"
#include "Workplaces.h"

class WorkplaceService
{
    public:
        WorkplaceService();
        void write(workplaces& workplace);
        void read(vector<workplaces>& wplace_vector);

    private:
        WorkplacesRepo wplace_repo;
};

#endif // WORKPLACESERVICE_H
