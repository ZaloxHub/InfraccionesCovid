#pragma once
#include "Usuarios.h"

using namespace System; /*Contiene String*/

namespace InfraccionesCovidModel {
	public ref class Perfiles {

		/*Definicion de Atributos*/
	private:
		int Codigo;
		String^ Estado;
		String^ TipoDePerfil;
		Usuarios^ objUsuario;
		/*Definicion de Métodos*/
	public:
		Perfiles();
	};
}