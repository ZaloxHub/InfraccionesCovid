#pragma once
#include "Infracciones.h"
#include "Distrito.h"

using namespace System; /*Contiene String*/
using namespace System::Collections::Generic; /*Contiene Lista*/

namespace InfraccionesCovidModel {
	public ref class ReporteProvincia {

		/*Definicion de Atributos*/
	public:
		String^ TipoDeInfraccion;
		Distrito^ objDistrito;
		List<Infracciones^>^ ListaInfracciones;

	public:
		ReporteProvincia();
		ReporteProvincia(Distrito^ objDistrito, List<Infracciones^>^ ListaInfracciones);
		ReporteProvincia(String^ TipoDeInfracción, List<Infracciones^>^ ListaInfracciones);
	};
}