#include "INUNCAI.h"

using namespace std;

cPaciente* INUNCAI::RecibirPaciente(cPaciente*paciente) {
	cPaciente* tor = NULL;
	if (paciente->esdonante()) {//lo agrego a la lista de pacientes
		cDonantes* c = dynamic_cast<cDonantes*>(paciente);
		this->IngresarPaciente(c);
		int i;
		for (i = 0; i < c->getlistaorganos()->getCA(); i++) {
			cLista<cReceptores>* d= this->BuscarReceptores(*c->getlistaorganos()->Buscar(i), c->gettiposangre());
			cReceptores*r= this->ElegirReceptor(d);
			eOrganos organo = *c->getlistaorganos()->Buscar(i);
			this->match(c,r, i,this->ListaReceptores->BuscarAtPos(r));
			tor = r;
		}
	

	}
	else
	{
		cReceptores* o = dynamic_cast<cReceptores*>(paciente);
		
		this->ListaReceptores->Insertar(o);
		for (int i = 0; i < this->ListaDonantes->getCA(); i++)
		{
			int aux = this->ListaDonantes->Buscar(i)->coincidencia(o);

			if (aux>-1 )
				this->match(this->ListaDonantes->Buscar(i), o, aux, this->ListaReceptores->BuscarAtPos(o));
		}
	}
	return tor;
}
void INUNCAI:: IngresarPaciente(cDonantes*c) {
	if(this->ListaDonantes->BuscarAtPos(c)== -1) //en buscaratpos retorna -1 si no esta, por lo tanto estoy chequeando que no este en otra lista
	this->ListaDonantes->Insertar(c);//Inserto si no esta en la lista
	
}

INUNCAI::INUNCAI()
{
	this->ListaDonantes = new cLista<cDonantes>(20);
	this->ListaReceptores = new cLista<cReceptores>(20);
	this->ListaPaciente = new cLista<cPaciente>(40);

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

void INUNCAI::match(cDonantes* a, cReceptores* r, int organo, int pos) {
	if (a != NULL && r != NULL) {
		a->asignarvehiculo(r->getcentro());
		a->SetAblacion();
		a->getlistaorganos()->Eliminar(organo);
		
		bool aux= r->getcentro()->RealizarTrasplante(a);//trasplante con exito
		if (aux)
			this->ListaReceptores->Eliminar(pos);
		else
			r->setprioridad(10);
	}
}
void INUNCAI::ImprimirLista() { //imprimo las listas de donantes y receptores
	cout << (*ListaDonantes);
	cout << (*ListaReceptores);
	cout << (*ListaPaciente);

}
