#pragma once
#include "DepartamentosMapa.h"

using namespace System; /*Contiene String*/
using namespace System::Collections::Generic; /*Contiene Lista*/

namespace InfraccionesCovidModel {
	public ref class MapaPeru {

		/*Definicion de Atributos*/
	public:
		String^ Imagen;
		List<DepartamentosMapa^>^ ListaDetalleMapa;

	public:
		MapaPeru(String^ Imagen, List <DepartamentosMapa^>^ ListaDetalleMapa);
	};
}