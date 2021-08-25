#ifndef ALMACEN_H
#define ALMACEN_H
#include"cuerda.h"
#include"guitarras.h"
#include"violines.h"
#include"pianos.h"
#include"viento.h"
#include"percusion.h"
class Almacen
{
private:
    Instrumentos *listarInstrumentos[10];
    int totalInstrumentos;
public:
    Almacen();
    void ingresarCuerda();
    void ingresarViento();
    void ingresarPercusion();
    void listar();
    void Afinar();
    float costoPromedio();
    int totalInst();
};

#endif // ALMACEN_H
               
