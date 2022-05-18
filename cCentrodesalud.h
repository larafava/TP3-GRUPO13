#pragma once
#include <string>
#include "cEnum.h"

using namespace std;

class cCentrodesalud
{
private:
	string nombre;
	string direccion;
	string partido;
	string provincia;
	int telefono;

public:
#pragma region Constructores y destructores
	cCentrodesalud(string _nombre, string _direccion, string _partido, string _provincia, int _telefono);
	~cCentrodesalud();
#pragma endregion

#pragma region Metodos
	string to_string();
	void ImprimirCentro();
	string getprovincia() { return this->provincia; };
	string getpartido() { return this->partido; }

	//eVehiculo asignarvehiculo(cCentrodesalud* aux);
#pragma endregion
};

