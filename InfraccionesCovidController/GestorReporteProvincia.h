#pragma once

using namespace System::Collections::Generic;
using namespace InfraccionesCovidModel;
using namespace System;

namespace InfraccionesCovidController {
	public ref class GestorReporteProvincia {
	private:
		List<Reporte^>^ ListaReporte;

	public:
		GestorReporteProvincia();
		int CantidadElementosReporteProvincia();
		void GenerarReporteDeTipoDeInfraccionPorProvincia(List<Infracciones^>^ ListaInfracciones, Provincia^ objProvincia);
		void GenerarReporteDeCantidadDeInfraccionesPorProvincia(List<Infracciones^>^ ListaInfracciones, Provincia^ objProvincia);
	};
}