#pragma once
#include "cEnum.h"
#include "cPaciente.h"
#include "cFecha.h"
#include "cLista.h"
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
	string patologia;
	eEstado estado;
	cLista<eOrganos>* listadeorganos;

public:
#pragma region Constructores y destructores
	cDonantes( string _patologia, string _nombre, string _sexo, int _numtelefono);
	
	~cDonantes();
#pragma endregion

#pragma region Metodos
	string to_string();
	void ImprimirDonante();
	void SetAblacion();

	tm getfechaablacion() { return this->fecha; }
	cLista<eOrganos>* getlistaorganos() { return this->listadeorganos; }
};

