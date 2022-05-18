#include "cEnum.h"
#include <string>

using namespace std;

string tiposangrestring(eTipodeSangre tipodesangre) {
	switch (tipodesangre)
	{
	case eTipodeSangre::A_positivo:
		return "A positivo";
		break;
	case eTipodeSangre::A_negativo:
		return "A negativo";
		break;
	case eTipodeSangre::B_positivo:
		return "B positivo";
		break;
	case eTipodeSangre::B_negativo:
		return "B negativo";
		break;
	case eTipodeSangre::AB_positivo:
		return "AB positivo";
		break;
	case eTipodeSangre::AB_negativo:
		return "AB negativo";
		break;
	case eTipodeSangre::Cero_positivo:
		return "Cero positivo";
		break;
	case eTipodeSangre::Cero_negativo:
		return "Cero negativo";
		break;
	}
}

string estadostring(eEstado estado) {
	switch (estado)
	{
	case eEstado::Estable:
		return "Estable";
		break;
	case eEstado::Inestable:
		return "Inestable";
		break;
	}
}

string organosdonarstring(eOrganos organos) {
	switch (organos)
	{
	case eOrganos::coraz�n:
		return "Corazon";
		break;
	case eOrganos::h�gado:
		return "Higado";
		break;
	case eOrganos::p�ncreas:
		return "Pancreas";
		break;
	case eOrganos::huesos:
		return "Huesos";
		break;
	case eOrganos::ri��n:
		return "Ri�on";
		break;
	case eOrganos::pulmones:
		return "Pulmones";
		break;
	case eOrganos::intestino:
		return "Intestino";
		break;
	case eOrganos::piel:
		return "Piel";
		break;
	case eOrganos::c�rneas:
		return "Corneas";
		break;
	}
}