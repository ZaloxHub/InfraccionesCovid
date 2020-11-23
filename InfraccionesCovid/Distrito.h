#pragma once

using namespace System; /*Contiene String*/

namespace InfraccionesCovidModel {
	[Serializable]

	public ref class Distrito {

		/*Definicion de Atributos*/
	public:
		int Codigo;
		String^ Nombre;

		/*Definicion de Metodoss*/
	public:
		Distrito(int codigo, String^Nombre);
	};
}