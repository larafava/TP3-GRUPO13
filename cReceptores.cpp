#include "cReceptores.h"

using namespace std;

cReceptores::cReceptores(int _prioridad, string _patologia, string _nombre, string _sexo, int _numtelefono):cPaciente( _nombre, _sexo, _numtelefono) {
	this->prioridad = _prioridad;
	this->patologia = _patologia;
}

string cReceptores::to_string1() {
	return this->prioridad + "" + this->patologia + "";
}

void cReceptores::ImprimirReceptor() {
	cout << this->to_string1();
}

bool cReceptores::esdonante() {
	return false;
}

int cReceptores::getprioridad(){
	return this->prioridad;
}

cFecha* cReceptores::getfechalistaespera() {
	return this->Listadeespera;
}

eOrganos cReceptores::getorgano() {
	return this->organos;

}