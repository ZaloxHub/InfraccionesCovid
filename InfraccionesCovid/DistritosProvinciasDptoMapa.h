#pragma once

using namespace System; /*Contiene String*/

namespace InfraccionesCovidModel {
	[Serializable]

	public ref class DistritosProvinciasDptoMapa {

		/*Definicion de Atributos*/
	public:
		String^ Imagen;
		int inicioX;
		int inicioY;
		int finX;
		int finY;
		int codigo;
		/*Definicion de Metodoss*/
	public:
		DistritosProvinciasDptoMapa(String^ Imagen, int inicioX, int inicioY, int finX, int finY, int codigo);
	};
}