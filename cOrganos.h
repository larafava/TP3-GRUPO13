#pragma once
#include <string>
#include "cFecha.h"
#include "cEnum.h"
using namespace std;

class cOrganos
{
private:
	cFecha* fechadeablacion;
	eOrganos organos;

public:
	cOrganos();
	~cOrganos();

#pragma region Setter y Getters
	void setFechaAblacion(cFecha*fechadeablacion);
	cFecha* getfecha() { return this->fechadeablacion; }
};

