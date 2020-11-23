#pragma once
#include "DistritosProvinciasDptoMapa.h"

using namespace System; /*Contiene String*/
using namespace System::Collections::Generic; /*Contiene Lista*/

namespace InfraccionesCovidModel {
	[Serializable]

	public ref class ProvinciasDptoMapa {

		/*Definicion de Atributos*/
	public:
		String^ Imagen;
		int inicioX;
		int inicioY;
		int finX;
		int finY;
		int codigo;
		List <DistritosProvinciasDptoMapa^>^ ListaDetalleMapa3;
		/*Definicion de Metodoss*/
	public:
		ProvinciasDptoMapa(String^ Imagen, int inicioX, int inicioY, int finX, int finY, int codigo, List <DistritosProvinciasDptoMapa^>^ ListaDetalleMapa3);
	};
}