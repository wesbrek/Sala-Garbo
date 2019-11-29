#include "Asiento.h"
#include <string>


Asiento::Asiento()
{
	tipoAsiento = "";
	codigoAsiento = "";
	estadoReservacion = NULL;
	estado = 0;
	num = 0;
	cedulaReserva = "";
}


Asiento::~Asiento()
{
}

Asiento::Asiento(std::string tipoAsiento, std::string codigoAsiento, bool _estadoReservacion, int _numero, int _estado, int _precio) {
	this->tipoAsiento = tipoAsiento;
	this->codigoAsiento = codigoAsiento;
	this->estadoReservacion = _estadoReservacion;
	this->num = _numero;
	this->estado = _estado;
	this->precio = _precio;
}


Asiento::Asiento(std::string tipoAsiento, std::string codigoAsiento, bool _estadoReservacion, int _numero, int _estado, std::string _cedulareserva) {
	this->tipoAsiento = tipoAsiento;
	this->codigoAsiento = codigoAsiento;
	this->estadoReservacion = _estadoReservacion;
	this->num = _numero;
	this->estado = _estado;
	this->cedulaReserva = _cedulareserva;
}


std::string Asiento::getTipoAsiento() {
	return this->tipoAsiento;
}
std::string Asiento::getCodigoAsiento() {
	return this->codigoAsiento;
}

bool::Asiento::getEstadoReservacion() {
	return this->estadoReservacion;
}

int::Asiento::getNumero() {
	return this->num;
}

int::Asiento::getEstado() {
	return this->estado;
}

std::string Asiento::getCedulaReserva() {
	return this->cedulaReserva;
}

int Asiento::getPrecio() {
	return this->precio;
}

void::Asiento::setTipoAsiento(std::string _tipoAsiento) {
	this->tipoAsiento = _tipoAsiento;
}

void::Asiento::setCodigoAsiento(std::string _codigoAsiento) {
	this->codigoAsiento = _codigoAsiento;
}

void::Asiento::setEstadoReservacion(bool _estadoReservacion) {
	this->estadoReservacion = _estadoReservacion;
}

void::Asiento::setNumero(int _num) {
	this->num = _num;
}

void::Asiento::setEstado(int _estado) {
	this->estado = _estado;
}

void::Asiento::setCedulaReserva(std::string _ced) {
	this->cedulaReserva = _ced;
}

void::Asiento::setPrecio(int _precio) {
	this->precio = _precio;
}

std::string Asiento::toString() {
	return this->codigoAsiento;
}