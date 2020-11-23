#include "Provincia.h"

using namespace InfraccionesCovidModel;

Provincia::Provincia() {
	Codigo = 0;
}
Provincia::Provincia(int Codigo, String^ Nombre, List <Distrito^>^ ListaDistrito) {
	this->Codigo = Codigo;
	this->Nombre = Nombre;
	this->ListaDistrito = ListaDistrito;
}