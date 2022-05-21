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
	string To_string();
	void ImprimirReceptor();
	bool esdonante();
	void setprioridad(int prioridad) { this->prioridad = prioridad; }
#pragma endregion 

#pragma region Getters
	int getprioridad();
	cFecha* getfechalistaespera();
	eOrganos getorgano();
	eTipodeSangre gettiposangre() { return this->tipodesangre; }

#pragma endregion
};

