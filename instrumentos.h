#ifndef INSTRUMENTOS_H
#define INSTRUMENTOS_H
#include<string>
using namespace std;
class Instrumentos
{
public:
    string nombre;
    string material;
    float costo;
    string tipoInstrumento;
public:
    Instrumentos();
    Instrumentos(string,string,float,string);
    float getCosto() ;
    string getNombre();
    virtual string Afinar();
    virtual string getDatos();
};

#endif // INSTRUMENTOS_H
