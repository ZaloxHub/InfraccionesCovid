#pragma once
#include "Infracciones.h"
#include "Provincia.h"

using namespace System; /*Contiene String*/
using namespace System::Collections::Generic; /*Contiene Lista*/

namespace InfraccionesCovidModel {
	public ref class Reporte {

		/*Definicion de Atributos*/
	public:
		String^ TipoDeInfraccion;
		Provincia^ objProvincia;
		List<Infracciones^>^ ListaInfracciones;

	public:
		Reporte();
		Reporte(Provincia^ objProvincia, List<Infracciones^>^ ListaInfracciones);
		Reporte(String^ TipoDeInfracción, List<Infracciones^>^ ListaInfracciones);
	};
}