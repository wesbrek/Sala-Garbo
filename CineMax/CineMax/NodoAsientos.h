#pragma once
#include "Asiento.h"
class Nodo
{
private:
	Asiento *miasiento;
	Nodo *sig; 

public:
	Nodo();
	~Nodo();
	void setAsiento(Asiento*);
	Asiento* getAsiento();
	void setSiguiente(Nodo*);
	Nodo* getSiguiente();
};

