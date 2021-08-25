#include "viento.h"


Viento::Viento(string _nombre, string _material, float _costo, string _tipoInstrumento):Instrumentos(_nombre,_material,_costo,_tipoInstrumento)
{

}

string Viento::Afinar()
{
      return "Nombre: "+ this->nombre+"\n"+"Limpiando Agujeros y Valvulas \n";
}

string Viento::getDatos()
{
    return "Nombre: "+ this->nombre+"\n"+
                "Material: "+this->material+"\n"+
                "Costo: "+to_string(this->costo)+"\n"+
                "Clasificacion: "+this->tipoInstrumento+"\n";


}
