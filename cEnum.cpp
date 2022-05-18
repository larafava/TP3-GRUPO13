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
	case eOrganos::corazón:
		return "Corazon";
		break;
	case eOrganos::hígado:
		return "Higado";
		break;
	case eOrganos::páncreas:
		return "Pancreas";
		break;
	case eOrganos::huesos:
		return "Huesos";
		break;
	case eOrganos::riñón:
		return "Riñon";
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
	case eOrganos::córneas:
		return "Corneas";
		break;
	}
}