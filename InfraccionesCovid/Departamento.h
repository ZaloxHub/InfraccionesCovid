#pragma once
#include "Provincia.h"

using namespace System; /*Contiene String*/
using namespace System::Collections::Generic; /*Contiene Lista*/

namespace InfraccionesCovidModel {
	[Serializable]

	public ref class Departamento {

		/*Definicion de Atributos*/
	public:
		int Codigo;
		String^ Nombre;
		List <Provincia^>^ ListaProvincia;

		/*Definicion de Metodoss*/
	public:
		Departamento();
		Departamento(int Codigo, String^ Nombre, List <Provincia^>^ ListaProvincia);
	};
}
