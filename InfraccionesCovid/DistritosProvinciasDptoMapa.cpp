#include "DistritosProvinciasDptoMapa.h"

using namespace InfraccionesCovidModel;

DistritosProvinciasDptoMapa::DistritosProvinciasDptoMapa(String^ Imagen, int inicioX, int inicioY, int finX, int finY, int codigo) {
	this->Imagen = Imagen;
	this->inicioX = inicioX;
	this->inicioY = inicioY;
	this->finX = finX;
	this->finY = finY;
	this->codigo = codigo;
}