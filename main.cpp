#include <iostream>
#include <iomanip>
#include<string>
#include"instrumentos.h"
#include"almacen.h"
using namespace std;

int main()
{
    cout<<setprecision(2)<<fixed;

    Almacen Observatorio;
    int opc;
    cout<<"              ________________________________________________           "<<endl;
    cout<<endl;
    cout<<"               = = = Conservatorio Nacional de Musica = = =              "<<endl;
    cout<<endl;
    cout<<"               Sistema de Informacion de Instumentos Musicales           "<<endl;
    cout<<endl;
    cout<<"              ________________________________________________           "<<endl;
    cout<<"                               Bienvenido                                "<<endl;
cout<<endl;
system("pause");
do{
   cout<<"                         Funcionalidades del Programa                         "<<endl;
   cout<<"                                   Menu                                       "<<endl;
   cout<<"                         1)Ingresar instrumentos de Cuerda                    "<<endl;
   cout<<"                         2)Ingresar instrumentos de Viento                    "<<endl;
   cout<<"                         3)Ingresar instrumentos de Percusion                 "<<endl;
   cout<<"                         4)Listar todos los Intrumentos                       "<<endl;
   cout<<"                         5)Afinar todos los Intrumentos                       "<<endl;
   cout<<"                         6)Obtener el total Intrumentos                       "<<endl;
   cout<<"                         7)Costo promedio de los instrumentos                 "<<endl;
   cout<<"                         8)Finalizar                                          "<<endl;
   cout<<endl;
   cout<<"                         Seleccionar una opcion:                              "<<endl;
   cin>>opc;
   switch (opc) {
   case 1:
           Observatorio.ingresarCuerda();
           break;
   case 2:
           Observatorio.ingresarViento();
           break;
   case 3:
           Observatorio.ingresarPercusion();
           break;

   case 4:
           Observatorio.listar();
           break;
   case 5:
           Observatorio.Afinar();
           break;
   case 6:
         cout<<"Total de instrumentos: " <<Observatorio.totalInst()<<endl;
           break;
   case 7:
           cout<<"Costo promedio: "<<Observatorio.costoPromedio()<<endl;
case 8:
       cout<<"Programa Finalizando"<<endl;

       system("pause");
       break;
   }

}while (opc !=8);
return 0;

}
