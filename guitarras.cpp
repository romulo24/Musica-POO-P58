#include "guitarras.h"

Guitarras::Guitarras(string _nombre, string _material, float _costo ,string _tipo,string _electrico) : Cuerda(_nombre,_material,_costo,_tipo) ,electrico(_electrico)
{

    this->electrico=_electrico;
}

string Guitarras::getDatos()
{
    return "Nombre: "+ this->nombre+"\n"+
                "Material: "+this->material+"\n"+
                "Costo: "+to_string(this->costo)+"\n"+
                "Tipo: "+this->tipoInstrumento+"\n"+
                this->electrico+"\n";

}
