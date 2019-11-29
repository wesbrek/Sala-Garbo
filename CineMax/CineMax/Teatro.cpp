#include "Teatro.h"
#include "ListaAsientosNormales.h"
#include <string>

Teatro::Teatro() {
	nombre = "";
}

Teatro::Teatro(std::string _nombre, ListaAsientosNormales _milistaNormales, PilaAsientos _mipilaVip, ListaAsientosPreferenciales _mipref, ColaEspera _micola) {
	nombre = _nombre;
	milistaNormales = _milistaNormales;
	mipilaVip = _mipilaVip;
	milistaPref = _mipref;
	micolaEspera = _micola;
}

ListaAsientosNormales Teatro::getAsientosNormales() {
	return this->milistaNormales;
}
std::string Teatro::getNombre() {
	return this->nombre;
}


PilaAsientos Teatro::getAsientosVip() {
	return this->mipilaVip;
}

ListaAsientosPreferenciales Teatro::getAsientosPref() {
	return this->milistaPref;
}

ColaEspera Teatro::getColaEspera() {
	return this->micolaEspera;
}

void::Teatro::setNombre(std::string _nombre) {
	nombre = _nombre;
}

void::Teatro::setAsientosNormales(ListaAsientosNormales _milistaNormales) {
	milistaNormales = _milistaNormales;
}

void::Teatro::setAsientosVip(PilaAsientos _mipilaVip) {
	mipilaVip = _mipilaVip;
}

void::Teatro::setAsientosPref(ListaAsientosPreferenciales _milistaPref) {
	milistaPref = _milistaPref;
}

void::Teatro::setColaEspera(ColaEspera _micola) {
	micolaEspera = _micola;
}