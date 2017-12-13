#include "WorkplaceService.h"

WorkplaceService::WorkplaceService(){
    //ctor
}

void WorkplaceService::save(workplaces& workplace){
    wplace_repo.save(workplace);

}

void read(vector<workplaces> wplace_vector){
    wplace_repo.read(wplace_vector);
}
