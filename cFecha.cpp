#include "cFecha.h"

using namespace std;

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

cFecha::cFecha() {
	fecha.tm_hour = 0;
	fecha.tm_min = 0;
	fecha.tm_sec = 0;
	fecha.tm_mday = 0;
	fecha.tm_mon = 0;
	fecha.tm_year = 0;
	fecha.tm_wday = 0;
	fecha.tm_yday = 0;
	fecha.tm_isdst = 0;
}

cFecha::cFecha(int d, int m, int a)
{
	fecha.tm_hour = 0;
	fecha.tm_min = 0;
	fecha.tm_sec = 0;
	fecha.tm_mday = d;
	fecha.tm_mon = m - 1;
	fecha.tm_year = a - 1900;
	fecha.tm_wday = 0;
	fecha.tm_yday = 0;
	fecha.tm_isdst = 0;
}

cFecha::cFecha(int d, int m, int a, int hs, int min) {

	fecha.tm_hour = hs;
	fecha.tm_min = min;
	fecha.tm_sec = 0;
	fecha.tm_mday = d;
	fecha.tm_mon = m - 1;
	fecha.tm_year = a - 1900;
	fecha.tm_wday = 0;
	fecha.tm_yday = 0;
	fecha.tm_isdst = 0;
}

cFecha::~cFecha() {
}

string cFecha::To_string()
{
	return to_string(fecha.tm_year + 1900) +
		"/" + to_string(fecha.tm_mon + 1) +
		"/" + to_string(fecha.tm_mday);
}

void cFecha::ImprimirFecha() {
	cout << To_string() << endl;;
}

bool cFecha::fechamenor(cFecha* aux) {
	bool tor = true;
	if (aux->fecha.tm_year < this->fecha.tm_year)
		tor = false;
	if (aux->fecha.tm_mon < this->fecha.tm_mon)
		tor = false;
	if (aux->fecha.tm_mday < this->fecha.tm_mday)
		tor = false;
	if (aux->fecha.tm_hour < this->fecha.tm_hour)
		tor = false;
	if (aux->fecha.tm_min < this->fecha.tm_min)
		tor = false;
	if (aux->fecha.tm_sec < this->fecha.tm_sec)
		tor = false;
	if (aux->fecha.tm_year == this->fecha.tm_year && aux->fecha.tm_mon < this->fecha.tm_mon)
		tor = false;
	if (aux->fecha.tm_year == this->fecha.tm_year && aux->fecha.tm_mon == this->fecha.tm_mon && aux->fecha.tm_mday < this->fecha.tm_mday)
		tor = false;
	if (aux->fecha.tm_year == this->fecha.tm_year && aux->fecha.tm_mon == this->fecha.tm_mon && aux->fecha.tm_mday == this->fecha.tm_mday && aux->fecha.tm_hour < this->fecha.tm_hour)
		tor = false;
	if (aux->fecha.tm_year == this->fecha.tm_year && aux->fecha.tm_mon == this->fecha.tm_mon && aux->fecha.tm_mday == this->fecha.tm_mday && aux->fecha.tm_hour == this->fecha.tm_hour && aux->fecha.tm_min < this->fecha.tm_min)
		tor = false;
	if (aux->fecha.tm_year == this->fecha.tm_year && aux->fecha.tm_mon == this->fecha.tm_mon && aux->fecha.tm_mday == this->fecha.tm_mday && aux->fecha.tm_hour == this->fecha.tm_hour && aux->fecha.tm_min == this->fecha.tm_min && aux->fecha.tm_sec < this->fecha.tm_sec)
		tor = false;
	

	return tor;
}




