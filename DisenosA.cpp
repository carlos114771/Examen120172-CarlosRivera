#include "DisenosA.h"

DisenosA::DisenosA(){
}

DisenosA::DisenosA(string terreno, string did, string dnombre, string dartista, string dfecha):Obras(did,dnombre,dartista,dfecha){
    this->terreno=terreno;
}

void DisenosA::setTerreno(string terreno){
    this->terreno=terreno;
}

string DisenosA::getTerreno(){
    return terreno;
}
