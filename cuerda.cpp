#include "cuerda.h"

Cuerda::Cuerda(string _nombre,string _material ,float _costo,string _tipo) : Instrumentos(_nombre,_material,_costo,_tipo){

}

string Cuerda::Afinar()
{
   return "Nombre: "+ this->nombre+"\n"+"Ajustando Cuerdas\n";
}

string Cuerda::getDatos()
{
    return "Nombre: "+ this->nombre+"\n"+
                "Material: "+this->material+"\n"+
                "Costo: "+to_string(this->costo)+"\n"+
                "Clase: "+this->tipoInstrumento+"\n";

}
