#pragma once
#include "NodoAsientos.h"
class ListaAsientosPreferenciales
{
private:
	Nodo *cab;
	int tamanno;
public:
	ListaAsientosPreferenciales();
	~ListaAsientosPreferenciales();
	ListaAsientosPreferenciales(int);
	void agrInicio(Asiento*);
	void agrFinal(Asiento *);
	Nodo* getCabeza();
	void setCabeza(Nodo *_cab);
	void mostrar();
	bool listaVacia();
	Nodo* buscarAsiento(int);
	void setTamanno(int);
	int getTamanno();
};

