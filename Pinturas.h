#include "Obras.h"
#include <string>

#ifndef PINTURAS_H
#define PINTURAS_H

using namespace std;

class Pinturas:public Obras{
    private:
        string material_lienzo;
        string tecnica;
    public:
        Pinturas();
        Pinturas(string, string, string, string, string, string);

        void setMaterial_lienzo(string);
        string getMaterial_lienzo();

        void setTecnica(string);
        string getTecnica();

};

#endif
