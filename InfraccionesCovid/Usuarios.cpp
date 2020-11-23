#include "Usuarios.h"

using namespace InfraccionesCovidModel;

Usuarios::Usuarios(String^ User, String^ Contraseña, int Codigo) {
	this->User=User;
	this->Contraseña = Contraseña;
	this->Codigo = Codigo;
}
