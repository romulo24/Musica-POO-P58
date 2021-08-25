#ifndef CUERDA_H
#define CUERDA_H
#include<instrumentos.h>

class Cuerda :public Instrumentos
{

public:
    Cuerda(string,string,float,string);
    virtual string Afinar();
    virtual string getDatos();

};

#endif // CUERDA_H
