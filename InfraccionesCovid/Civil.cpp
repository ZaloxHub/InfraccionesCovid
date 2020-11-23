#include "Civil.h"

using namespace InfraccionesCovidModel;

Civil::Civil() {

}
Civil::Civil(String^ DNI) {
	this->DNI = DNI;
}

Civil::Civil(int codigo, String^ Nombre, String^ ApellidoPaterno, String^ ApellidoMaterno, String^ DNI) {
	this->Codigo = codigo;
	this->Nombre = Nombre;
	this->ApellidoPaterno = ApellidoPaterno;
	this->ApellidoMaterno = ApellidoMaterno;
	this->DNI = DNI;
}