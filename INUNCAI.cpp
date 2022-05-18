#include "INUNCAI.h"

using namespace std;

void INUNCAI::RecibirPaciente(cPaciente*paciente) {
	if (paciente->esdonante()) {//lo agrego a la lista de pacientes
		cDonantes* c = dynamic_cast<cDonantes*>(paciente);
		this->IngresarPaciente(c);
		int i;
		for (i = 0; i < c->getlistaorganos()->getCA(); i++) {
			cLista<cReceptores>* d= this->BuscarReceptores(*c->getlistaorganos()->Buscar(i), c->gettiposangre());
			this->ElegirReceptor(d);
			
		}
	}
}
void INUNCAI:: IngresarPaciente(cDonantes*c) {
	if(this->ListaDonantes->BuscarAtPos(c)== -1) //en buscaratpos retorna -1 si no esta, por lo tanto estoy chequeando que no este en otra lista
	this->ListaDonantes->Insertar(c);
}

INUNCAI::INUNCAI()
{
	this->ListaDonantes = new cLista<cDonantes>(20);
	this->ListaReceptores = new cLista<cReceptores>(20);

}

cReceptores* INUNCAI:: ElegirReceptor(cLista<cReceptores>* sublista) {
	int i;
	cReceptores* tor = NULL;
	
	if (sublista->getCA() > 0) {
		tor = sublista->Buscar(0);
		for (i = 0; i < sublista->getCA(); i++) { //falta chequear que b sea distinto de null
			cReceptores* b = sublista->Buscar(i);
			if (b->getprioridad() > tor->getprioridad())
				tor = b;
		}
	
	}
	return tor;
}

cLista<cReceptores>* INUNCAI:: BuscarReceptores(eOrganos organo, eTipodeSangre tipodesangre) {

	cLista<cReceptores>* tor = new cLista<cReceptores>(20);
	int i;
	for (i = 0; i < this->ListaReceptores->getCA(); i++)
	{
		cReceptores* aux = this->ListaReceptores->Buscar(i);
		if (aux->getorgano() == organo && aux->gettiposangre() == tipodesangre) {
			tor->Insertar(aux);
		}
	}
	return tor;
}

cLista<cPaciente>* INUNCAI::Buscarporcentrodesalud(cCentrodesalud* centro) {
	cLista<cPaciente>* tor = new cLista<cPaciente>(40);
	int i;
	for (i = 0; i < this->ListaDonantes->getCA(); i++) {
		cPaciente* aux = this->ListaDonantes->Buscar(i);
		if (aux->getcentro() == centro)
			tor->Insertar(aux);
	}
	for (i = 0; i < this->ListaReceptores->getCA(); i++) {
		cPaciente* aux = this->ListaReceptores->Buscar(i);
		if (aux->getcentro() == centro)
			tor->Insertar(aux);
	}
	return tor;
}