#ifndef WORKPLACESERVICE_H
#define WORKPLACESERVICE_H
#include "WorkplacesRepo.h"


class WorkplaceService
{
    public:
        WorkplaceService();
        void save(workplaces& workplace);
    private:
        WorkplacesRepo repo;
};

#endif // WORKPLACESERVICE_H
