#include "DepartamentosMapa.h"

using namespace InfraccionesCovidModel;

DepartamentosMapa::DepartamentosMapa(String^ Imagen, int inicioX, int inicioY, int finX, int finY, int codigo, List <ProvinciasDptoMapa^>^ ListaDetalleMapa2) {
	this->Imagen = Imagen;
	this->inicioX = inicioX;
	this->inicioY = inicioY;
	this->finX = finX;
	this->finY = finY;
	this->codigo = codigo;
	this->ListaDetalleMapa2 = ListaDetalleMapa2;
}