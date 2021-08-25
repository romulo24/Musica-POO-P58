#include "pianos.h"

Pianos::Pianos(string _nombre, string _material, float _costo ,string _tipo):Cuerda(_nombre,_material,_costo,_tipo)
{

}

string Pianos::getDatos()
{
    return "Nombre: "+ this->nombre+"\n"+
                "Material: "+this->material+"\n"+
                "Costo: "+to_string(this->costo)+"\n"+
                this->tipoInstrumento+"\n";

}
