#pragma once
#include "ProvinciasDptoMapa.h"

using namespace System; /*Contiene String*/
using namespace System::Collections::Generic; /*Contiene Lista*/

namespace InfraccionesCovidModel {
	[Serializable]

	public ref class DepartamentosMapa {

		/*Definicion de Atributos*/
	public:
		String^ Imagen;
		int inicioX;
		int inicioY;
		int finX;
		int finY;
		int codigo;
		List <ProvinciasDptoMapa^>^ ListaDetalleMapa2;
		/*Definicion de Metodoss*/
	public:
		DepartamentosMapa(String^ Imagen, int inicioX, int inicioY, int finX, int finY, int codigo, List <ProvinciasDptoMapa^>^ ListaDetalleMapa2);
	};
}