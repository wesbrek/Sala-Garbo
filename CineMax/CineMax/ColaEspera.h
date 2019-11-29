#pragma once
#include "NodoAsientos.h"
class ColaEspera
{
public:
	int longitud;
	Nodo* frente;
	Nodo* fin;

public:
	ColaEspera();
	~ColaEspera();
	ColaEspera(int);
	int getLongitud();
	bool insertarElem(Asiento *);
	Asiento * atender();
	bool colaVacia();
	Nodo* getFrente();
	Nodo* getFin();
};

