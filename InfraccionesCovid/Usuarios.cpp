#include "Usuarios.h"

using namespace InfraccionesCovidModel;

Usuarios::Usuarios(String^ User, String^ Contrase�a, int Codigo) {
	this->User=User;
	this->Contrase�a = Contrase�a;
	this->Codigo = Codigo;
}
