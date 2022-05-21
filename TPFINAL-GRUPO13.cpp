// TPFINAL-GRUPO13.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "cReceptores.h"
#include "cDonantes.h"



using namespace std;

int main()
{
  cPaciente* Jorge = new cReceptores(1, "Hola", "Jorge", "Masculino", 2915226293);
  cPaciente* Maria = new cDonantes("Hola", "Maria", "Femenino", 2914611921);
  if(!Jorge->esdonante())
    std::cout << "Jorge no es donante";
    
    
    cLista<cFecha>* ListaFecha = new cLista<cFecha>(2);
    cFecha* fecha1 = new cFecha();
    cFecha* fecha2 = new cFecha(10,02,2022);

    (*ListaFecha) + fecha1;
    (*ListaFecha) + fecha2;

    cout << (*ListaFecha);


}

