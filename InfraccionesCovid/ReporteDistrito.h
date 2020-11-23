#pragma once
#include "Infracciones.h"

using namespace System; /*Contiene String*/
using namespace System::Collections::Generic; /*Contiene Lista*/

namespace InfraccionesCovidModel {
	public ref class ReporteDistrito {

		/*Definicion de Atributos*/
	public:
		String^ TipoDeInfraccion;
		List<Infracciones^>^ ListaInfracciones;

	public:
		ReporteDistrito();
		ReporteDistrito(String^ TipoDeInfracción, List<Infracciones^>^ ListaInfracciones);
	};
}