#include "cDonantes.h"


using namespace std;

cDonantes::cDonantes( string _patologia, string _nombre, string _sexo, int _numtelefono):cPaciente(_nombre, _sexo, _numtelefono) {
	
	this->patologia = _patologia;
	this->listadeorganos = new cLista<eOrganos>(9);

}

string cDonantes::to_string() {
	return  this->patologia + "";
}

void cDonantes::ImprimirDonante() {
	cout << this->to_string();
}

void cDonantes::SetAblacion() {
	time_t ablacion = time(0);
	tm* aux = localtime(&ablacion); //obtengo fecha y hora de ablacion
	fecha.tm_mday = aux->tm_mday;
	fecha.tm_mon = aux->tm_mon;
	fecha.tm_year = aux->tm_year;

}
