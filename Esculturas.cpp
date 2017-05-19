#include "Esculturas.h"

Esculturas::Esculturas(){
}

Esculturas::Esculturas(double peso, string material, string enombre, string eid, string eartista, string efecha)::Obras(string oid, string onombre,string oartista, string ofecha){
    this->peso=peso;
    this->material=material;
}

void Esculturas::setPeso(double peso){
    this->peso=peso;
}

double Esculturas::getPeso(){
    return peso;
}

void Esculturas::setMaterial(string material){
    this->material=material;
}

string Esculturas::getMaterial(){
    return material;
}
