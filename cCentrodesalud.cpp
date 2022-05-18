#include "cCentrodesalud.h"
#include <string>
#include <iostream>

using namespace std;

cCentrodesalud::cCentrodesalud(string _nombre, string _direccion, string _partido, string _provincia, int _telefono) {
	this->nombre = _nombre;
	this->direccion = _direccion;
	this->partido = _partido;
	this->provincia = _provincia;
	this->telefono = _telefono;
}

string cCentrodesalud::to_string() {
	return this->nombre + "" + this->direccion + "" + this->partido + "" + this->provincia + "" + std::to_string(this->telefono) + "";
}

void cCentrodesalud::ImprimirCentro() {
	cout << this->to_string();
}
