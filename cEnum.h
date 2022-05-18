#pragma once
#include <string>

using namespace std;

enum class eTipodeSangre { A_positivo, A_negativo, B_positivo, B_negativo, AB_positivo, AB_negativo, Cero_positivo, Cero_negativo };
string tiposangrestring(eTipodeSangre tipodesangre);

enum class eEstado{Estable, Inestable};
string estadostring(eEstado estado);

enum class eOrganos{coraz�n, h�gado, p�ncreas, huesos, ri��n, pulmones, intestino, piel, c�rneas};
string organosdonarstring(eOrganos organos);

enum class eVehiculo { ambulancia, avion, helicoptero };