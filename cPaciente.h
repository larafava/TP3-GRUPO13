#pragma once
#include <string>
#include <iostream>
#include "cFecha.h"
#include "cEnum.h"
#include "cCentrodesalud.h"

using namespace std;

class cPaciente
{
protected:
	string nombre;
	cFecha* fechadenacimiento;
	string sexo;
	int numtelefono;
	eTipodeSangre tipodesangre;
	cCentrodesalud* asociado;

public:
#pragma region Constructores y Destructores
	cPaciente(string _nombre, string _sexo, int _numtelefono);
	~cPaciente();
#pragma endregion

#pragma region Metodos
	string to_string();
	void ImprimirPaciente();
	eVehiculo asignarvehiculo(cCentrodesalud* aux);
	eTipodeSangre gettiposangre() { return this->tipodesangre; }
	cCentrodesalud* getcentro() { return this->asociado; }
	
#pragma endregion

#pragma region Metodos virtuales
	virtual bool esdonante()=0;
};

