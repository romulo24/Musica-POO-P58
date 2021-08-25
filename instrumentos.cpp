#include "instrumentos.h"

float Instrumentos::getCosto()
{
    return costo;
}

string Instrumentos::getNombre()
{
    return nombre;
}

string Instrumentos::Afinar()
{
    return "Todos los Instrumentos pueden Afinarse ";
}

string Instrumentos::getDatos()
{
    return "Nombre: "+ this->nombre+"\n"+
                "Material: "+this->material+"\n"+
                "Costo: "+to_string(this->costo)+"\n"+
                "Tipo Instrumento: "+this->tipoInstrumento+"\n";


}

Instrumentos::Instrumentos()
{
    this->nombre=" ";
    this->material=" ";
    this->costo=0;
    this->tipoInstrumento=" ";
}

Instrumentos::Instrumentos(string _nombre, string _material, float _costo, string _tipoInstrumento)
{
    this->nombre=_nombre;
        this->material=_material;
        this->costo=_costo;
    this->tipoInstrumento=_tipoInstrumento;
}
