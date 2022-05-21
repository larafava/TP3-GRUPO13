#include "cDonantes.h"


using namespace std;

cDonantes::cDonantes(string _patologia, string _nombre, string _sexo, int _numtelefono):cPaciente(_nombre, _sexo, _numtelefono) {
	
	this->patologia = _patologia;
	this->listadeorganos = new cLista<eOrganos>(9);

}
cDonantes::~cDonantes() {

}
string cDonantes::To_string() {
	return  this->patologia + "";
}

void cDonantes::ImprimirDonante() {
	cout << this->To_string();
}

void cDonantes::SetAblacion() {
	time_t ablacion = time(0);
	tm aux;
	localtime_s(&aux, &ablacion); //obtengo fecha y hora de ablacion
	fecha.tm_mday = aux.tm_mday;
	fecha.tm_mon = aux.tm_mon;
	fecha.tm_year = aux.tm_year;

}

int cDonantes::coincidencia(cReceptores*p) {
	for (int i = 0; i < this->getlistaorganos()->getCA(); i++)
	{
		if (p->getorgano() == *this->getlistaorganos()->Buscar(i))
			return i;

	}
	return -1;
}

bool cDonantes::esdonante() {
	return true;
}

void cDonantes::Sethoy() {
	time_t now = time(0);
	tm aux;
	localtime_s(&aux, &now); //obtengo fecha y hora de hoy
	fecha.tm_mday = aux.tm_mday;
	fecha.tm_mon = aux.tm_mon;
	fecha.tm_year = aux.tm_year;
}
