#pragma once
#include "Distrito.h"

using namespace System; /*Contiene String*/
using namespace System::Collections::Generic; /*Contiene Lista*/

namespace InfraccionesCovidModel {
	[Serializable]

	public ref class Provincia {

		/*Definicion de Atributos*/
	public:
		int Codigo;
		String^ Nombre;
		List <Distrito^>^ ListaDistrito;

		/*Definicion de Metodoss*/
	public:
		Provincia();
		Provincia(int Codigo, String^ Nombre, List <Distrito^>^ ListaDistrito);
	};
}