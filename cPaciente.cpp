#include "cPaciente.h"
#include <string>

cPaciente::cPaciente(string _nombre, string _sexo, int _numtelefono) {
	this->nombre = _nombre;
	this->sexo = _sexo;
	this->numtelefono = _numtelefono;
	
}

string cPaciente::To_string() {
	return this->nombre + "" + this->sexo + "" + std::to_string(this->numtelefono);
}

void cPaciente::ImprimirPaciente() {
	cout << this->To_string();
}

cPaciente::~cPaciente() {

}
cVehiculo* cPaciente::asignarvehiculo(cCentrodesalud* aux) {
	cVehiculo* tor = NULL;
	if (aux->getprovincia() == this->asociado->getprovincia()) {
		
		if (aux->getpartido() == this->asociado->getpartido())
		tor = new cAmbulancia;
			return tor;
	}

	if (aux->getprovincia() == this->asociado->getprovincia()) {
		
		if (aux->getpartido() != this->asociado->getpartido())
			tor = new cHelicoptero;
			return tor;
	}
	if (aux->getprovincia() != this->asociado->getprovincia()) {
		
		tor = new cAvion;
		return tor;
	}
	return tor;
}