#include "PilaAsientos.h"



PilaAsientos::PilaAsientos()
{
	this->tope = 0;
	this->longitud = 0;
}


PilaAsientos::~PilaAsientos()
{
}

PilaAsientos::PilaAsientos(int _valor)
{
	std::string a = "F";
	std::string b = "G";
	std::string c = "H";
	std::string d = "I";
	std::string e = "J";
	int contadorF = 1;
	int contadorG = 1;
	int contadorH = 1;
	int contadorI = 1;
	int contadorJ = 1;
	int arrTam = 0;
	int estado = 0;
	std::string tipo = "vip";
	for (int i = 1; i <= _valor; i++) {
		if (i <= 10) {
			std::string numAsiento = a + std::to_string(contadorF);
			Asiento * miasiento = new Asiento(tipo, numAsiento, false, i, estado, 5500);
			this->insertarElem(miasiento);
			contadorF++;
		}
		else if (i <= 20) {
			std::string numAsiento = b + std::to_string(contadorG);
			Asiento * miasiento = new Asiento(tipo, numAsiento, false, i, estado, 5500);
			this->insertarElem(miasiento);
			contadorG++;

		}
		else if (i <= 30) {
			std::string numAsiento = c + std::to_string(contadorH);
			Asiento * miasiento = new Asiento(tipo, numAsiento, false, i, estado, 5500);
			this->insertarElem(miasiento);
			contadorH++;

		}
		else if (i <= 40) {
			std::string numAsiento = d + std::to_string(contadorI);
			Asiento * miasiento = new Asiento(tipo, numAsiento, false, i, estado, 5500);
			this->insertarElem(miasiento);
			contadorI++;
			arrTam++;
		}
		else if (i <= 50) {
			std::string numAsiento = e + std::to_string(contadorJ);
			Asiento * miasiento = new Asiento(tipo, numAsiento, false, i, estado, 5500);
			this->insertarElem(miasiento);
			contadorJ++;

		}
	}

}



Asiento*::PilaAsientos::insertarElem(Asiento *miasiento) {

	Nodo *nuevo = new Nodo();
	nuevo->setAsiento(miasiento);
	if (tope == nullptr) {
		tope = nuevo;

	}
	else {
		nuevo->setSiguiente(tope);
		tope = nuevo;
	}
	longitud++;
	return tope->getAsiento();
}

Asiento *::PilaAsientos::eliminarElem() {
	Nodo* aux = this->getTope();
	this->setTope(this->tope->getSiguiente());
	Asiento *asiento = aux->getAsiento();
	longitud--;
	return asiento;
}

Nodo*::PilaAsientos::getTope() {
	return this->tope;
}

int::PilaAsientos::getlongitud() {
	return this->longitud;
}

void::PilaAsientos::setTope(Nodo * top) {
	tope = top;
}

bool::PilaAsientos::pilaVacia() {
	if (tope != NULL) {
		return false;
	}
	else if (tope == NULL) {
		return true;
	}

}
