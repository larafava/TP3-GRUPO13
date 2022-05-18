#pragma once
#include <iostream>
#include <ctime>
#include <stdio.h>
#include <iostream>
#include <string>


using namespace std;

class cFecha
{
private:
    tm fecha;
    /*int _dia;
    int _mes;
    int _anio;
    int _horas;
    int _minutos;*/


public:
    //Constructor por default
    cFecha();
     //Construcor que inicia en dia, mes y anio
    cFecha(int d, int m, int a);

    cFecha(int dia, int mes, int anio, int hora, int minutos);
    ~cFecha();
    string To_string();
    void ImprimirFecha();
    bool fechamenor(cFecha*aux);
   // void setdia(int dia);

  /*  cFecha(int dia, int mes, int anio, int horas, int minutos);
    ~cFecha();
 
    void imprimiFecha();*/
};

