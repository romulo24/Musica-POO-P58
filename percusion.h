#ifndef PERCUSION_H
#define PERCUSION_H
#include"instrumentos.h"

class Percusion : public Instrumentos
{
public:
    Percusion(string,string,float,string);
    virtual string Afinar();
    virtual string getDatos();
};

#endif // PERCUSION_H
