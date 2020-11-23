#include "Departamento.h"

using namespace InfraccionesCovidModel;

Departamento::Departamento() {
	Codigo = 0;
}
Departamento::Departamento(int Codigo, String^ Nombre, List <Provincia^>^ ListaProvincia) {
	this->Codigo = Codigo;
	this->Nombre = Nombre;
	this->ListaProvincia = ListaProvincia;
}