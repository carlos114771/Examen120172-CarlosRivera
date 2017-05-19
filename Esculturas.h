#include "Obras.h"
#include <string>

#ifndef ESCULTURAS_H
#define ESCULTURAS_H

using namespace std;

class Esculturas:public Obras{
    private:
        double peso;
        string material;
    public:
        Esculturas();
        Esculturas(double, string, string, string, string, string);

        void setPeso(double);
        double getPeso();

        void setMaterial(string);
        string getMaterial();
};
#endif
