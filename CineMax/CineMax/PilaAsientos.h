#pragma once
#include "NodoAsientos.h"
class PilaAsientos
{
private:
	Nodo* tope;
	int longitud;

public:
	PilaAsientos();
	~PilaAsientos();
	PilaAsientos(int);
	Asiento* insertarElem(Asiento *);
	Asiento * eliminarElem();
	int getlongitud();
	Nodo* getTope();
	void setTope(Nodo*);
	bool pilaVacia();
};

