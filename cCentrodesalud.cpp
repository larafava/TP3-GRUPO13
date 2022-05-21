#include "cCentrodesalud.h"
#include "cDonantes.h"

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

string cCentrodesalud::To_string() {
	return this->nombre + "" + this->direccion + "" + this->partido + "" + this->provincia + "" + std::to_string(this->telefono) + "";
}

void cCentrodesalud::ImprimirCentro() {
	cout << this->To_string();
}

bool cCentrodesalud::RealizarTrasplante(cDonantes *donante) {
	if (donante->getfechaablacion().tm_mday == getfechahoy().tm_mday) {
		bool tf = (rand() % 2) != 0;
		if (tf == true) {
			std::cout << "TRASPLANTE EXITOSO";
			return true;
		}
	}
	return false;
}