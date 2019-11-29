#pragma once
#include "NodoAsientos.h"
#include "Asiento.h"
class ListaAsientosNormales
{
private:
	Nodo *cab;
	int tamanno;
public:
	ListaAsientosNormales();
	~ListaAsientosNormales();
	ListaAsientosNormales(int);
	void agrInicio(Asiento*);
	void agrFinal(Asiento *);
	Nodo* getCabeza();
	void setCabeza(Nodo *_cab);
	bool listaVacia();
	Nodo* buscarAsiento(int);
	void setTamanno(int);
	int getTamanno();
};

