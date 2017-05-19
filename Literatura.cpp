#include "Literatura.h"

Literatura::Literatura(){
}

Literatura::Literatura(string genero_literario,string epoca,string lid, string lnombre, string lartista,string lfecha):Obras( lid, lnombre, lartista, lfecha){
    this->genero_literario=genero_literario;
    this->epoca=epoca;
}

void Literatura::setGenero_literario(string genero){
    this->genero_literario=genero;
}

string Literatura::getGenero_literario(){
    return genero_literario;
}

void Literatura::setEpoca(string epoca){
    this->epoca=epoca;
}

string Literatura::getEpoca(){
    return epoca;
}






