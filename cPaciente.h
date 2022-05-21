#pragma once
#include <string>
#include <iostream>
#include "cFecha.h"
#include "cEnum.h"
#include "cCentrodesalud.h"
#include "cVehiculo.h"
#include "cAmbulancia.h"
#include "cAvion.h"
#include "cHelicoptero.h"

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
	string To_string();
	void ImprimirPaciente();
	cVehiculo* asignarvehiculo(cCentrodesalud* aux);
#pragma endregion

#pragma region Getters
	eTipodeSangre gettiposangre() { return this->tipodesangre; };
	cCentrodesalud* getcentro() { return this->asociado; };
	
	
#pragma endregion

#pragma region Metodos virtuales
	virtual bool esdonante()=0;
};

