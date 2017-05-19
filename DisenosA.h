#include "Obras.h"
#include <string>

#ifndef DISENOSA_H
#define DISENOSA_H

using namespace std;

class DisenosA:public Obras{
    private:
        string terreno;
    public:
        DisenosA();
        DisenosA(string, string, string, string, string);

        void setTerreno(string);
        string getTerreno();

};
#endif

