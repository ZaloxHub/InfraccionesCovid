#pragma once

using namespace System; /*Contiene String*/

namespace InfraccionesCovidModel {
	[Serializable]
	public ref class Usuarios {

		/*Definicion de Atributos*/
	public:
		String^ User;
		String^ Contraseņa;
		int Codigo;

		/*Definicion de Metodos*/
	public:
		Usuarios(String^ User, String^ Contraseņa, int Codigo);
	};
}