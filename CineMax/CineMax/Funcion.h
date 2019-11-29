#pragma once
#include <ctime>
#include <string>
 class Funcion
{
private:
	std::string nombre;
	std::string director;
	int duracion;
	std::string restriccion;
	std::string hora;
	std::string fecha;
public:
	Funcion();
	~Funcion();
	Funcion(std::string, std::string, int, std::string, std::string, std::string);
	std::string getNombre();
	std::string	getDirector();
	int getDuracion();
	std::string getRestriccion();
	std::string  getHora();
	std::string getFecha();
	void setNombre(std::string);
	void setDirector(std::string);
	void setDuracion(int);
	void setRestricion(std::string);
	void setHora(std::string);
	void setFecha(std::string);
};

