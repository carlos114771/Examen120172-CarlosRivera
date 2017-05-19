#include "Obras.h"

Obras::Obras(){
       
}

Obras::Obras(string id,string nombre,string artista,string fecha){
    this->id=id;
    this->nombre=nombre;
    this->artista=artista;
    fecha_ingreso=fecha;

}

void Obras::setId(string id){
    this->id=id;
}

string Obras::getId(){
    return id;
}

void Obras::setNombre(string nombre){
    this->nombre=nombre;
}

string Obras::getNombre(){
    return nombre;
}

void Obras::setArtista(string artista){
    this->artista=artista;
}

string Obras::getArtista(){
    return artista;
}


void Obras::setFecha_ingreso(string fecha){
    fecha_ingreso=fecha;
}

string Obras::getFecha_ingreso(){
    return fecha_ingreso;
}
