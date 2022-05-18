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
	void RecibirPaciente(cPaciente* paciente);
	void IngresarPaciente(cDonantes* c);
	cLista<cPaciente>* Buscarporcentrodesalud(cCentrodesalud* centro);


private:
	cLista<cDonantes>* ListaDonantes;
	cLista<cReceptores>* ListaReceptores;
	cReceptores* ElegirReceptor(cLista<cReceptores>*sublista);
	cLista<cReceptores>* BuscarReceptores(eOrganos organo, eTipodeSangre tipodesangre);

};

