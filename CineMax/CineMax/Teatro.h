#pragma once
#include "Funcion.h"
#include "ListaAsientosNormales.h"
#include "PilaAsientos.h"
#include "ListaAsientosPreferenciales.h"
#include "ColaEspera.h"
#include <string>

class Teatro
{
private:
	std::string nombre;
	ListaAsientosNormales milistaNormales;
	PilaAsientos mipilaVip;
	ListaAsientosPreferenciales milistaPref;
	ColaEspera micolaEspera;
public:
	Teatro();
	Teatro(std::string, ListaAsientosNormales, PilaAsientos, ListaAsientosPreferenciales, ColaEspera);
	ListaAsientosNormales getAsientosNormales();
	PilaAsientos getAsientosVip();
	ListaAsientosPreferenciales getAsientosPref();
	ColaEspera getColaEspera();
	std::string getNombre();
	void setNombre(std::string);
	void setAsientosNormales(ListaAsientosNormales);
	void setAsientosVip(PilaAsientos);
	void setAsientosPref(ListaAsientosPreferenciales);
	void setColaEspera(ColaEspera);
};

