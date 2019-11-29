#include "ListaAsientosPreferenciales.h"
#include <string>
using namespace std;

ListaAsientosPreferenciales::ListaAsientosPreferenciales()
{
	cab = NULL;
	tamanno = 0;
}


ListaAsientosPreferenciales::~ListaAsientosPreferenciales()
{
}


ListaAsientosPreferenciales::ListaAsientosPreferenciales(int _tamanno) {
	std::string k = "K";
	int contadorK = 1;
	int arrTam = 0;
	int estado = 0;
	std::string tipo = "preferenciales";
	for (int i = 1; i <= _tamanno; i++) {
		if (i <= 10) {
			std::string numAsiento = k + std::to_string(contadorK);
			Asiento * miasiento = new Asiento(tipo, numAsiento, false, i, estado, 7000);
			this->agrFinal(miasiento);
			contadorK++;
		}
	}

}

void::ListaAsientosPreferenciales::agrInicio(Asiento *miasiento) {

	Nodo *nuevo = new Nodo();
	nuevo->setAsiento(miasiento);
	if (listaVacia() == true) {
		cab = nuevo;
		tamanno = 1;

	}
	else {
		nuevo->setSiguiente(cab);
		cab = nuevo;
		tamanno = tamanno + 1;
	}
};

void ListaAsientosPreferenciales::agrFinal(Asiento *miasiento) {
	Nodo *nuevo = new Nodo();
	nuevo->setAsiento(miasiento);
	if (listaVacia() == true) {
		setCabeza(nuevo);
		tamanno = 1;
	}
	else {
		Nodo *aux = getCabeza();
		while (aux->getSiguiente() != nullptr) {
			aux = aux->getSiguiente();
		}
		aux->setSiguiente(nuevo);
		tamanno = tamanno + 1;
	}
}

Nodo* ListaAsientosPreferenciales::getCabeza() {
	return cab;
};

void::ListaAsientosPreferenciales::setCabeza(Nodo *_cab) {
	cab = _cab;
};

int::ListaAsientosPreferenciales::getTamanno() {
	return tamanno;
}

void::ListaAsientosPreferenciales::setTamanno(int _tamanno) {
	tamanno = _tamanno;
}

void::ListaAsientosPreferenciales::mostrar() {
	Nodo *aux = cab;
	while (aux != NULL) {
		aux->getAsiento()->getCodigoAsiento();
		aux = aux->getSiguiente();
	}


};

bool::ListaAsientosPreferenciales::listaVacia() {
	bool vacio = true;
	if (getCabeza() != NULL) {
		vacio = false;
	}
	return vacio;
}

Nodo * ListaAsientosPreferenciales::buscarAsiento(int _num) {
	Nodo *aux = cab;
	if (!listaVacia()) {
		while (aux != NULL) {
			if (aux->getAsiento()->getNumero() == _num) {

				return aux;
			}
			else {
				aux = aux->getSiguiente();
			}
		}
	}
	return NULL;
}
