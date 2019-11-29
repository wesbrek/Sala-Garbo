#include "ListaAsientosNormales.h"
#include <string>
using namespace std;

ListaAsientosNormales::ListaAsientosNormales()
{
	cab = NULL;
	tamanno = 0;
}


ListaAsientosNormales::~ListaAsientosNormales()
{
}


ListaAsientosNormales::ListaAsientosNormales(int _tamanno) {
	std::string a = "A";
	std::string b = "B";
	std::string c = "C";
	std::string d = "D";
	std::string e = "E";
	int contadorA = 1;
	int contadorB = 1;
	int contadorC = 1;
	int contadorD = 1;
	int contadorE = 1;
	int arrTam = 0;
	int estado = 0;
	std::string tipo = "normales";
	for (int i = 1; i <= _tamanno; i++) {
		if (i <= 10) {
			std::string numAsiento = a + std::to_string(contadorA);
			Asiento * miasiento = new Asiento(tipo, numAsiento, false, i, estado, 4000);
			this->agrFinal(miasiento);
			contadorA++;
		}
		else if (i <= 20) {
			std::string numAsiento = b + std::to_string(contadorB);
			Asiento * miasiento = new Asiento(tipo, numAsiento, false, i, estado, 4000);
			this->agrFinal(miasiento);
			contadorB++;
		
		}
		else if (i <= 30) {
			std::string numAsiento = c + std::to_string(contadorC);
			Asiento * miasiento = new Asiento(tipo, numAsiento, false, i, estado, 4000);
			this->agrFinal(miasiento);
			contadorC++;
		
		}
		else if (i <= 40) {
			std::string numAsiento = d + std::to_string(contadorD);
			Asiento * miasiento = new Asiento(tipo, numAsiento, false,i, estado, 4000);
			this->agrFinal(miasiento);
			contadorD++;
			arrTam++;
		}
		else if (i <= 50) {
			std::string numAsiento = e + std::to_string(contadorE);
			Asiento * miasiento = new Asiento(tipo, numAsiento, false, i, estado, 4000);
			this->agrFinal(miasiento);
			contadorE++;
			
		}
	}

}

void::ListaAsientosNormales::agrInicio(Asiento *miasiento) {

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

void ListaAsientosNormales::agrFinal(Asiento *miasiento) {
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

Nodo* ListaAsientosNormales::getCabeza() {
	return cab;
};

void::ListaAsientosNormales::setCabeza(Nodo *_cab) {
	cab = _cab;
};

int::ListaAsientosNormales::getTamanno() {
	return tamanno;
}

void::ListaAsientosNormales::setTamanno(int _tamanno) {
	tamanno = _tamanno;
}


bool::ListaAsientosNormales::listaVacia() {
	bool vacio = true;
	if (getCabeza() != NULL) {
		vacio = false;
	}
	return vacio;
}

Nodo * ListaAsientosNormales::buscarAsiento(int _num) {
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



