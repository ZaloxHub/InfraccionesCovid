#include "Usuarios.h"

using namespace InfraccionesCovidModel;

Usuarios::Usuarios(String^ User, String^ Contraseņa, int Codigo) {
	this->User=User;
	this->Contraseņa = Contraseņa;
	this->Codigo = Codigo;
}
