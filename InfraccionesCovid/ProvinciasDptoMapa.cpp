#include "ProvinciasDptoMapa.h"

using namespace InfraccionesCovidModel;

ProvinciasDptoMapa::ProvinciasDptoMapa(String^ Imagen, int inicioX, int inicioY, int finX, int finY, int codigo, List <DistritosProvinciasDptoMapa^>^ ListaDetalleMapa3) {
	this->Imagen = Imagen;
	this->inicioX = inicioX;
	this->inicioY = inicioY;
	this->finX = finX;
	this->finY = finY;
	this->codigo = codigo;
	this->ListaDetalleMapa3 = ListaDetalleMapa3;
}