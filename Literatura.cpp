#include "Literatua.h"

Literatura::Literatura(){
}

Literatura::Literatura(string genero_literario,string epoca,string lid, string lnombre, string artista,string lfecha )::Obras(string oid,  string onombre, string oartista,string ofecha){
    this->genero_literario=genero_literario;
    this->epoca=epoca;
}

void Literatura::setGenero_literario(string genero){
    this->genero_literario=genero;
}

string Literatura::getGenero_literario(){
    return genero_literaio;
}

void Literatura::setEpoca(string epoca){
    this->epoca=epoca;
}

string Literatura::getEpoca(){
    return epoca;
}


