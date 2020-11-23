#pragma once
#include "Usuarios.h"

using namespace System; /*Contiene String*/
using namespace System::Collections::Generic; /*Contiene Lista*/

namespace InfraccionesCovidModel {
	[Serializable]

	public ref class Policias {

		/*Definicion de Atributos*/
	public:
		int Codigo;
		String^ Nombre;
		String^ ApellidoMaterno;
		String^ ApellidoPaterno;
		String^ DNI;
		String^ Rango;
		String^ NumeroCIP;
		Usuarios^ objUsuarios;

		/*Definicion de Metodos*/
	public:
		Policias (int codigo, String^Nombre, String^ApellidoPaterno, String^ApellidoMaterno, String^DNI, String^Rango, String^CIP);
		Policias();
	};
}