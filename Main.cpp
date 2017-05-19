#include <iostream>
#include <string>
#include "Obras.h"
#include "Esculturas.h"
#include "Literatura.h"
#include "Pinturas.h"
#include "DisenosA.h"
#include <vector>

void lista(vector<Obras*>);
using namespace std;

int main(){
    vector<Obras*> obras;
    vector<Obras*> lista2;

    int respuesta=9;

    while(respuesta!=4){
        cout<<endl<<"Bienvenido\n1-Agregar\n2-Lista\n3-Buscar\n4-Transferir\n5-Eliminar\n6-Salir\nIngrese su opcion: ";
        cin>>respuesta;
        //agregar
        if(respuesta==1){
            int opcion =9;
            while(opcion!=5){
                cout<<"1-Literatura"<<endl
                    <<"2-Escultura"<<endl
                    <<"3-Pinturas"<<endl
                    <<"4-Diseños Arquitectonicos"<<endl
                    <<"5-Salir"<<endl;
                cout<<"Ingrese una opcion: ";
                cin>>opcion;

                string id,nombre,artista,fecha;

                if(opcion!=5){
                    cout<<"Ingrese el id de la obra: "<<endl;
                    cin>>id;
                    cout<<"Ingrese el nombre de la obra: "<<endl;
                    cin>>nombre;
                    cout<<"Ingrese el nombre del artista: "<<endl;
                    cin>>artista;
                    cout<<"Ingrese la fecha de ingreso: "<<endl;
                    cin>>fecha;
                    //agregar literatura
                    if(opcion==1){
                        string genero, epoca;
                        cout<<"Ingrese el genero literario: "<<endl;
                        cin>>genero;
                        cout<<"Ingrese la epoca: "<<endl;
                        cin>>epoca;
                        obras.push_back(new Literatura(id,nombre,artista,fecha,genero,epoca));
                        cout<<"La literatura fue agregada "<<endl;
                        cout<<endl;
                    }
                    //agregar escultura
                    if(opcion==2){
                        string material;
                        double peso;
                        cout<<"Ingrese el peso de la escultura "<<endl;
                        cin>>peso;
                        cout<<"Ingrese el materila de la escultura "<<endl;
                        cin>>material;
                        obras.push_back(new Esculturas(peso,material,id,nombre,artista,fecha));
                        cout<<"La escultura fue agregada "<<endl;
                    }
                    //agregar pintura
                    if(opcion==3){
                        string material,tecnica;
                        cout<<"Ingrese el material de lienzo que se utiliza en la pintura"<<endl;
                        cin>>material;
                        cout<<"Ingrese la tecnica que utilizo en la pintura "<<endl;
                        cin>>tecnica;
                        obras.push_back(new Pinturas(id,nombre,artista,fecha,material,tecnica));
                        cout<<"La pintura fue agregada "<<endl;
                    }
                    //agregar arquitectura
                    if(opcion==4){
                        string terreno;
                        cout<<"Ingrese el terreno donde esta diseñada la arquitectura: "<<endl;
                        cin>>terreno;
                        obras.push_back(new DisenosA(id,nombre,artista,fecha,terreno));
                        cout<<"La arquitectura fue agregada "<<endl;
                    }
                }
            }
        }
        //listar
        if(respuesta==2){
            cout<<"Museo Britanico "<<endl;
            lista(obras);
            cout<<"Otros Museos "<<endl;
            lista(lista2);

        }
        //buscar
        if(respuesta==3){
            string filtro;
            cout<<"Ingrese el nombre del autor: "<<endl;
            cin>>filtro;
            for(int i=0;i<obras.size();i++){
                cout<<"Obras del museo "<<endl;
                if(obras.at(i)->getArtista()==filtro){
                    cout<<"Nombre: "<<obras.at(i)->getNombre()<<endl;
               }
               cout<<endl;
            }
            cout<<endl;
        }
        //transferir
        if(respuesta==4){
            int numero;
            Obras* obratemp;

            cout<<"Ingrese la obra a transferrir: "<<endl;
           
            cin>>numero;
            
            obratemp=obras.at(numero);
            lista2.push_back(obratemp);
            obras.erase(obras.begin()+numero);
            
        }
        //eliminar
        if(respuesta==5){
            int opcion;
            cout<<"Ingrese la posicion a eliminar"<<endl;
            cin>>opcion;
            obras.erase(obras.begin()+opcion);
        }
    }
    return 0;
}


//funcion para listar las obras

void lista(vector<Obras*> listarobras){
    cout<<"Obras en el Museo"<<endl;
    for(int i=0;i<listarobras.size();i++){
        cout<<"Numero de la obra: "<<(i)<<endl;
        cout<<"Id de la obra"<<listarobras.at(i)->getId()<<endl;
        cout<<"Nombre de la obra: "<<listarobras.at(i)->getNombre()<<endl;
        cout<<"Artista de la obra: "<<listarobras.at(i)->getArtista()<<endl;
        cout<<"Fecha de ingreso de la obra: "<<listarobras.at(i)->getFecha_ingreso()<<endl;
    }

}
