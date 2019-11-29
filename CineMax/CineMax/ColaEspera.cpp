#include "ColaEspera.h"



ColaEspera::ColaEspera()
{
	longitud = 0;
	frente = NULL;
	fin = NULL;
}

ColaEspera::ColaEspera(int _tamanno)
{
	std::string a = "A";
	std::string b = "B";
	std::string c = "C";
	std::string d = "D";
	std::string e = "E";

	std::string f = "F";
	std::string g = "G";
	std::string h = "H";
	std::string is = "I";
	std::string j = "J";

	std::string k = "K";

	int contadorA = 1;
	int contadorB = 1;
	int contadorC = 1;
	int contadorD = 1;
	int contadorE = 1;

	int contadorF = 1;
	int contadorG = 1;
	int contadorH = 1;
	int contadorI = 1;
	int contadorJ = 1;

	int contadorK = 1;

	int estado = 0;
	std::string tipoNormal = "normales";
	std::string tipoVip = "vip";
	std::string tipoPreferencial = "preferenciales";
	for (int i = 1; i <= _tamanno; i++) {
		if (i <= 10) {
			std::string numAsiento = a + std::to_string(contadorA);
			Asiento * miasiento = new Asiento(tipoNormal, numAsiento, false, i, estado, 4000);
			this->insertarElem(miasiento);
			contadorA++;
		}
		else if (i <= 20) {
			std::string numAsiento = b + std::to_string(contadorB);
			Asiento * miasiento = new Asiento(tipoNormal, numAsiento, false, i, estado, 4000);
			this->insertarElem(miasiento);
			contadorB++;

		}
		else if (i <= 30) {
			std::string numAsiento = c + std::to_string(contadorC);
			Asiento * miasiento = new Asiento(tipoNormal, numAsiento, false, i, estado, 4000);
			this->insertarElem(miasiento);
			contadorC++;

		}
		else if (i <= 40) {
			std::string numAsiento = d + std::to_string(contadorD);
			Asiento * miasiento = new Asiento(tipoNormal, numAsiento, false, i, estado, 4000);
			this->insertarElem(miasiento);
			contadorD++;
		}
		else if (i <= 50) {
			std::string numAsiento = e + std::to_string(contadorE);
			Asiento * miasiento = new Asiento(tipoNormal, numAsiento, false, i, estado, 4000);
			this->insertarElem(miasiento);
			contadorE++;

		}
		else if (i <= 60) {
			std::string numAsiento = f + std::to_string(contadorF);
			Asiento * miasiento = new Asiento(tipoVip, numAsiento, false, i, estado, 5500);
			this->insertarElem(miasiento);
			contadorF++;

		}
		else if (i <= 70) {
			std::string numAsiento = g + std::to_string(contadorG);
			Asiento * miasiento = new Asiento(tipoVip, numAsiento, false, i, estado, 5500);
			this->insertarElem(miasiento);
			contadorG++;

		}
		else if (i <= 80) {
			std::string numAsiento = h + std::to_string(contadorH);
			Asiento * miasiento = new Asiento(tipoVip, numAsiento, false, i, estado, 5500);
			this->insertarElem(miasiento);
			contadorH++;

		}
		else if (i <= 90) {
			std::string numAsiento = is + std::to_string(contadorI);
			Asiento * miasiento = new Asiento(tipoVip, numAsiento, false, i, estado, 5500);
			this->insertarElem(miasiento);
			contadorI++;
		}
		else if (i <= 100) {
			std::string numAsiento = j + std::to_string(contadorJ);
			Asiento * miasiento = new Asiento(tipoVip, numAsiento, false, i, estado, 5500);
			this->insertarElem(miasiento);
			contadorJ++;

		}
		else if (i <= 110) {
			std::string numAsiento = k + std::to_string(contadorK);
			Asiento * miasiento = new Asiento(tipoPreferencial, numAsiento, false, i, estado, 7000);
			this->insertarElem(miasiento);
			contadorK++;

		}
	}
}


ColaEspera::~ColaEspera()
{
}

bool::ColaEspera::insertarElem(Asiento * _valor) {
	Nodo *nuevo = new Nodo();
	nuevo->setAsiento(_valor);

	if (colaVacia() == true) {
		frente = nuevo;
		fin = nuevo;
		longitud++;
		return true;
	}
	else {
		fin->setSiguiente(nuevo);
		fin = nuevo;
		longitud++;
		return true;

	}

	return false;
}

Asiento *::ColaEspera::atender() {

	if (!colaVacia()) {
		Asiento *miasiento  = frente->getAsiento();
		Nodo *aux = frente;
		frente = frente->getSiguiente();
		delete aux;
		return miasiento;
	}

	return NULL;
}

int::ColaEspera::getLongitud() {
	return longitud;
}

Nodo*::ColaEspera::getFrente() {
	return frente;
}

Nodo*::ColaEspera::getFin() {
	return fin;
}



bool::ColaEspera::colaVacia() {
	if (frente == NULL && fin == NULL) {
		return true;
	}
	else if (frente != NULL && fin != NULL) {
		return false;
	}
	return NULL;
}