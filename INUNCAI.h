#pragma once
#include "cPaciente.h"
#include "cDonantes.h"
#include "cReceptores.h"
#include "cLista.h"


using namespace std;

class INUNCAI
{
public:
	INUNCAI();
#pragma region Metodos
	cPaciente* RecibirPaciente(cPaciente* paciente);
	void IngresarPaciente(cDonantes* c);
	cLista<cPaciente>* Buscarporcentrodesalud(cCentrodesalud* centro);
	void match(cDonantes *a,cReceptores*r, int organo, int pos);
	cReceptores* eliminarreceptor( int receptor);
	string To_string();
	void ImprimirLista();
#pragma endregion

private:
#pragma region Creacion de listas con template
	cLista<cDonantes>* ListaDonantes;
	cLista<cReceptores>* ListaReceptores;
	cLista<cPaciente>* ListaPaciente;
#pragma endregion

#pragma region Metodos con Listas
	cReceptores* ElegirReceptor(cLista<cReceptores>*sublista);
	cLista<cReceptores>* BuscarReceptores(eOrganos organo, eTipodeSangre tipodesangre);
	cLista<cReceptores>* getlistareceptores() { return this->ListaReceptores; };

#pragma endregion
};

