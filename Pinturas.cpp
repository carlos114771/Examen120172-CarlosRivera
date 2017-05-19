#include "Pinturas.h"

Pinturas::Pinturas(){
}

Pinturas::Pinturas(string material_lienzo, string tecnica, string pid, string pnombre, string partista, string pfecha):Obras(pid,pnombre,partista,pfecha){
    this->material_lienzo=material_lienzo;
    this->tecnica=tecnica;
}

void Pinturas::setMaterial_lienzo(string material){
    material_lienzo=material;
}

string Pinturas::getMaterial_lienzo(){
    return material_lienzo;
}

void Pinturas::setTecnica(string tecnica){
    this->tecnica=tecnica;
}

string Pinturas::getTecnica(){
    return tecnica;
}
