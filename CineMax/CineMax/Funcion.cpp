#include "Funcion.h"
#include <string>


Funcion::Funcion()
{
	nombre = "";
	director = "";
	duracion = 0;
	restriccion = "";
	hora = "";
	fecha = "";

}

Funcion::~Funcion() {

}

Funcion::Funcion (std::string nombre, std::string director, int duracion, std::string restriccion, std::string hora, std::string fecha) {
	this->nombre = nombre;
	this->director = director;
	this->duracion = duracion;
	this->restriccion = restriccion;
	this->hora = hora;
	this->fecha = fecha;
}

std::string Funcion::getNombre() {
	return nombre;
}

int::Funcion::getDuracion() {
	return duracion;
}

std::string Funcion::getDirector() {
	return director;
}

std::string Funcion::getRestriccion() {
	return restriccion;
};

std::string Funcion::getHora() {
	return hora;
}

std::string Funcion::getFecha() {
	return fecha;
}


void::Funcion::setNombre(std::string _nombre) {
	nombre = _nombre;
}	

void::Funcion::setDuracion(int _duracion) {
	duracion = _duracion;
}

void::Funcion::setDirector(std::string _director) {
	director = _director;
}

void::Funcion::setRestricion(std::string _restriccion) {
	restriccion = _restriccion;
}

void::Funcion::setHora(std::string  _hora) {
	hora = _hora;
}

void::Funcion::setFecha(std::string _fecha) {
	fecha = _fecha;
}