#include "almacen.h"
#include<iostream>

Almacen::Almacen()

{
    this->totalInstrumentos=0;
}

void Almacen::ingresarCuerda()
{
    string nombre;
    string material;
    float costo;
    string tipo;
    string definir;
    string definiendo;
    if(this->totalInstrumentos<11){
        cout<<"Ingrese el Nombre del Instrumento: "<<endl;
        cin>>nombre;
        cout<<"Material:"<<endl;
        cin>>material;
        cout<<"Costo Instrumento: "<<endl;
        cin>>costo;
        cout<<"Clase de Instrumento: /Guitarra/Violin/Piano:"<<endl;
        cin>>tipo;
        if(tipo=="Guitarra"){
            cout<<"Electrica o Acustica :"<<endl;
            cin>>definir;
            listarInstrumentos[this->totalInstrumentos]=new Guitarras(nombre,material,costo,tipo,definir);
            this->totalInstrumentos++;
        }else if(tipo=="Violin"){
            cout<<"Electrica o Acustica :"<<endl;
            cin>>definir;
            listarInstrumentos[this->totalInstrumentos]=new Violines(nombre,material,costo,tipo,definir);
            this->totalInstrumentos++;
        }else if (tipo=="Piano") {
            cout<<"Vertica o de Cola"<<endl;
            cin>>definiendo;
            listarInstrumentos[this->totalInstrumentos]=new Pianos(nombre,material,costo,definiendo);
            this->totalInstrumentos++;
        }else
            cout<<"El Alamcen alcanzo el valor Maxino de Registros "<<endl;
        system("pause");
    }


}

void Almacen::ingresarViento()
{
    string nombre;
    string material;
    float costo;
    string clasificacion;
    if(this->totalInstrumentos<11){
        cout<<"Ingrese el Nombre del Instrumento: "<<endl;
        cin>>nombre;
        cout<<"Material:"<<endl;
        cin>>material;
        cout<<"Costo Instrumento: "<<endl;
        cin>>costo;
        cout<<"Clasificacion /Bisel/Lengueta/Dobles/Enbocadura :"<<endl;
        cin>>clasificacion;
         listarInstrumentos[this->totalInstrumentos]=new Viento(nombre,material,costo,clasificacion);
         this->totalInstrumentos++;


    }
}

void Almacen::ingresarPercusion()
{
    string nombre;
    string material;
    float costo;
    string altura;
    if(this->totalInstrumentos<11){
        cout<<"Ingrese el Nombre del Instrumento: "<<endl;
        cin>>nombre;
        cout<<"Material:"<<endl;
        cin>>material;
        cout<<"Costo Instrumento: "<<endl;
        cin>>costo;
        cout<<"Altura Determinada o Indetermida: "<<endl;
        cin>>altura;
        listarInstrumentos[this->totalInstrumentos]=new Percusion(nombre,material,costo,altura);
        this->totalInstrumentos++;
    }
    else{
        cout<<"El Alamcen alcanzo el valor Maxino de Registros "<<endl;
        system("pause");
    }
}

void Almacen::listar()
{
    for(int i=0;i<this->totalInstrumentos;i++){
        cout<<listarInstrumentos[i]->getDatos()<<endl;
        cout<<endl;
    }

}

void Almacen::Afinar()
{
    for(int i=0;i<this->totalInstrumentos;i++){
        cout<<listarInstrumentos[i]->Afinar();
        cout<<endl;
    }
}

float Almacen::costoPromedio()
{
    float total=0;
    for(int i=0;i<this->totalInstrumentos;i++){
        total+=listarInstrumentos[i]->getCosto();
    }
    return total/totalInstrumentos;
}

int Almacen::totalInst()
{
    return totalInstrumentos;
}



