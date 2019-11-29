#include "NodoAsientos.h"




Nodo::Nodo()
{
	this->miasiento = nullptr;
	this->sig = NULL;
}


Nodo::~Nodo()
{
}


Asiento* Nodo::getAsiento() {
	return miasiento;
}

Nodo*::Nodo::getSiguiente() {
	return sig;
}

void::Nodo::setAsiento(Asiento *_miasiento) {
	miasiento = _miasiento;
}

void::Nodo::setSiguiente(Nodo *_sig) {
	sig = _sig;
}
