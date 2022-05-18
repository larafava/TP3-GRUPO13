#pragma once
#include "cFecha.h"
#include <string>
#include "cEnum.h"
#include "cPaciente.h"

using namespace std;

class cReceptores :
	public cPaciente
{
private:
	cFecha* Listadeespera;
	int prioridad;
	string patologia;
	eOrganos organos;
	eEstado estado;

public:
#pragma region Constructores y destructores
	cReceptores(int _prioridad, string _patologia, string _nombre, string _sexo, int _numtelefono);
	~cReceptores();
#pragma endregion

#pragma region Metodos
	string to_string1();
	void ImprimirReceptor();
	bool esdonante();
	int getprioridad();
	cFecha* getfechalistaespera();
	eOrganos getorgano();
	eTipodeSangre gettiposangre() { return this->tipodesangre; }
};

