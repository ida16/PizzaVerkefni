#include "WorkplaceService.h"

WorkplaceService::WorkplaceService(){
    //ctor
}

void WorkplaceService::write(workplaces& workplace){
    wplace_repo.write(workplace);

}

void WorkplaceService::read(vector<workplaces>& wplace_vector){
    wplace_repo.read(wplace_vector);
}
