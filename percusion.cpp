#include "percusion.h"

Percusion::Percusion(string _nombre, string _material, float _costo, string _tipoInstrumento):Instrumentos(_nombre,_material,_costo,_tipoInstrumento)
{

}

string Percusion::Afinar()
{
     return "Nombre: "+ this->nombre+"\n"+"Tensar los tambores ";
}

string Percusion::getDatos()
{
    return "Nombre: "+ this->nombre+"\n"+
                "Material: "+this->material+"\n"+
                "Costo: "+to_string(this->costo)+"\n"+
                this->tipoInstrumento+"\n";
}
