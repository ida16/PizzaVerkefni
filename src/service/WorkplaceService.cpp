#include "WorkplaceService.h"

WorkplaceService::WorkplaceService()
{
    //ctor
}

void WorkplaceService::save(workplaces& workplace){
    repo.save(workplace);

}
