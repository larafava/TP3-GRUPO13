#pragma once
#include "cEnum.h"
#include "cPaciente.h"
#include "cFecha.h"
#include "cLista.h"
#include "cReceptores.h"

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#pragma warning(disable:4996)

using namespace std;

class cDonantes:
	public cPaciente
{
private:
	tm fecha;
	cFecha* fechayhoradefallecimiento;
	cFecha* fechayhoradeablacion;
	cFecha* Hoy;
	string patologia;
	eEstado estado;
	cLista<eOrganos>* listadeorganos;

public:
#pragma region Constructores y destructores
	cDonantes( string _patologia, string _nombre, string _sexo, int _numtelefono);
	
	~cDonantes();
#pragma endregion

#pragma region Metodos
	string To_string();
	void ImprimirDonante();
	int coincidencia(cReceptores*p);
	bool esdonante();
	bool MismoDia(cFecha* fecha1, cFecha* fecha2);
	
	
#pragma endregion

#pragma region Getters y setter
	void SetAblacion();
	void Sethoy();
	tm getfechaablacion() { return this->fecha; }
	cLista<eOrganos>* getlistaorganos() { return this->listadeorganos; }
	
#pragma endregion
};

