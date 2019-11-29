#pragma once
#include "Funcion.h"
#include <string>
class Asiento
{
private:
	std::string tipoAsiento;
	std::string codigoAsiento;
	std::string cedulaReserva;
	bool estadoReservacion;
	int num;
	int estado;
	int precio;
public:
	Asiento();
	~Asiento();
	Asiento(std::string, std::string, bool, int, int, int);
	Asiento(std::string, std::string, bool, int, int, std::string);
	std::string getTipoAsiento();
	std::string getCodigoAsiento();
	bool getEstadoReservacion();
	int getNumero();
	int getEstado();
	std::string getCedulaReserva();
	int getPrecio();
	void setTipoAsiento(std::string);
	void setCodigoAsiento(std::string);
	void setEstadoReservacion(bool);
	void setNumero(int);
	void setEstado(int);
	void setCedulaReserva(std::string);
	void setPrecio(int);
	std::string toString();
};