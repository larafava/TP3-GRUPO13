#pragma once
#include <string>
#include "cEnum.h"
#include "cFecha.h"

class cDonantes;
using namespace std;

class cCentrodesalud
{
private:
	tm fechita;
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
	string To_string();
	void ImprimirCentro();
	bool RealizarTrasplante(cDonantes* donante);
#pragma endregion

#pragma region Getters
	string getprovincia() { return this->provincia; };
	string getpartido() { return this->partido; }
	tm getfechahoy() { return this->fechita; };
	

#pragma endregion
};

