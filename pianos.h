#ifndef PIANOS_H
#define PIANOS_H
#include"cuerda.h"

class Pianos :public Cuerda
{
public:
    Pianos(string,string,float,string);
     virtual string getDatos();
};

#endif // PIANOS_H
