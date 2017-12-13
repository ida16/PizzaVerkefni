#include "SodaService.h"

SodaService::SodaService()
{
    //ctor
}

void SodaService::read(){
    repo.read();

}

void SodaService::write(Soda& soda){
    repo.write(soda);

}

int SodaService::final_price(char s){
    if( s == 's' || s == 'S'){
        return 200;

    }
    if (s == 'l' || s == 'L'){
        return 300;

    }
}
