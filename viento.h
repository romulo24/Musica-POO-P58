#ifndef VIENTO_H
#define VIENTO_H
#include "instrumentos.h"
class Viento :public Instrumentos{
public:
    Viento(string,string,float,string);
    virtual string Afinar();
    virtual string getDatos();
};

#endif // VIENTO_H
