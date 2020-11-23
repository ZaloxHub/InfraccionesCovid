#pragma once

using namespace System; /*Contiene String*/

namespace InfraccionesCovidModel {
	[Serializable]

	public ref class Civil {

		/*Definicion de Atributos*/
	public:
		int Codigo;
		String^ Nombre;
		String^ ApellidoMaterno;
		String^ ApellidoPaterno;
		String^ DNI;

		/*Definicion de Metodos*/
	public:
		Civil();
		Civil(int codigo, String^ Nombre, String^ ApellidoPaterno, String^ ApellidoMaterno, String^DNI);
		Civil(String^ DNI);
	};
}