#include "Obras.h"

Obras::Obras(){
       
}

Obras::Obras(string id,string nombre,string autor,string artista,string fecha){
    this->id=id;
    this->nombre=nombre;
    this->autor=autor;
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

void Obras::setAutor(string){
    this->autor=autor;
}

string Obras::getAutor(){
    return autor;
}

void Obras::setArtista(string){
    this->artista=artista;
}

string Obras::getArtista(string){
    return artista;
}

void Obras::setFecha_ingreso(string){
    fecha_ingreso=fecha;
}

string Obras::getFecha_ingreso(){
    return fecha_ingreso;
}
