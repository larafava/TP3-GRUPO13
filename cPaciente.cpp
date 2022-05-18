#include "cPaciente.h"
#include <string>

cPaciente::cPaciente(string _nombre, string _sexo, int _numtelefono) {
	this->nombre = _nombre;
	this->sexo = _sexo;
	this->numtelefono = _numtelefono;
	
}

string cPaciente::to_string() {
	return this->nombre + "" + this->sexo + "" + std::to_string(this->numtelefono);
}

void cPaciente::ImprimirPaciente() {
	cout << this->to_string();
}

cPaciente::~cPaciente() {

}
eVehiculo cPaciente::asignarvehiculo(cCentrodesalud* aux) {
	if (aux->getprovincia() == this->asociado->getprovincia()) {
		if (aux->getpartido() == this->asociado->getpartido())
			return eVehiculo::ambulancia;
	}

	if (aux->getprovincia() == this->asociado->getprovincia()) {
		if (aux->getpartido() != this->asociado->getpartido())
			return eVehiculo::avion;
	}
	if (aux->getprovincia() != this->asociado->getprovincia()) {
		return eVehiculo::helicoptero;
	}

}