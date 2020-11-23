#include "Policias.h"

using namespace InfraccionesCovidModel;

Policias::Policias(){
}

Policias::Policias(int codigo, String^ Nombre, String^ ApellidoMaterno, String^ ApellidoPaterno, String^ DNI, String^ Rango, String^ CIP) {
	this->Codigo = codigo;
	this->Nombre = Nombre;
	this->ApellidoMaterno = ApellidoMaterno;
	this->ApellidoPaterno = ApellidoPaterno;
	this->DNI = DNI;
	this->Rango = Rango;
	this->NumeroCIP = CIP;
}