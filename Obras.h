#include <string>
#ifndef OBRAS_H
#define OBRAS_H
using namespace std;

class Obras{
    protected:
        string id;
        string nombre;
        string artista;
        string fecha_ingreso;

    public:
        Obras();
        Obras(string,string,string,string);
        
        void setId(string);
        string getId();

        void setNombre(string);
        string getNombre();

        void setArtista(string);
        string getArtista();

        void setFecha_ingreso(string);
        string getFecha_ingreso();


};

#endif
