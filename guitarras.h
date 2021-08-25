#ifndef GUITARRAS_H
#define GUITARRAS_H
#include "cuerda.h"

class Guitarras: public Cuerda
{
private:
    string electrico;
public:
    Guitarras(string,string,float,string,string);
    virtual string getDatos();

};

#endif // GUITARRAS_H
