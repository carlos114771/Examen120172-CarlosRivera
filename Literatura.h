#include "Obra.h"
#include <string>
#ifndef LITERATURA_H
#define LITERATURA_H
using namespace std;

class Literatura:public Obras{
    private:
        string genero_literario;
        string epoca;
    public:
        Literatura();
        Literatura(string, string,string, string,string,string);

        void setGenero_literario(string);
        string getGenero_literario();

        void setEpoca(string);
        string getEpoca();

      
};

#endif

