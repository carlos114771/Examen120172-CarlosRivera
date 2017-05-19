#include "Obras.h"
#include <string>

#ifndef DISEÑOSA_H
#define DISEÑOSA_H

using namespace std;

class DiseñosA:public Obras{
    private:
        string terreno;
    public:
        DiseñosA();
        DiseñosA(string, string, string, string, string);

        void setTerreno(string);
        string getTerreno();

};
#endif

