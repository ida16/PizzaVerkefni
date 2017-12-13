#ifndef SODASERVICE_H
#define SODASERVICE_H
#include "SodaRepo.h"


class SodaService
{
    public:
        SodaService();
        void read();
        void write(Soda& soda);
        int final_price(char s);

    private:
        SodaRepo repo;
};

#endif // SODASERVICE_H
