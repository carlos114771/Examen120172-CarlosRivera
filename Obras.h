#ifndef OBRAS_H
#define OBRAS_H

class Obras{
    private:
        string id;
        string nombre;
        string autor;
        string fecha_ingreso;

    public:
        Obras();
        Obras(string,string,string,string);
        
        void setId(string);
        int getRadio();

        void setNombre(string);
        string getNombre();

        void setAutor();
        string getAutor();

        void setFecha_ingreso();
        string getFecha_ingreso();


};

#endif
