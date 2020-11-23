#pragma once

using namespace System; /*Contiene String*/
using namespace System::Collections::Generic; /*Contiene Lista*/

namespace InfraccionesCovidModel {
	public ref class Mapas {

		/*Definicion de Atributos*/
	public:
		int coordInicioX;
		int coordInicioY;
		int coordFinX;
		int coordFinY;

	public:
		Mapas();
	};
}