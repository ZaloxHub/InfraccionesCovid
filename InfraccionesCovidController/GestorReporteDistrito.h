#pragma once

using namespace System::Collections::Generic;
using namespace InfraccionesCovidModel;
using namespace System;

namespace InfraccionesCovidController {
	public ref class GestorReportes {
	private:
		List<Reporte^>^ ListaReporte;

	public:
		GestorReporteDistrito();
		int CantidadElementosReportePorDistrito();
		void GenerarReporteDeTipoDeInfraccionPorDistrito(List<Infracciones^>^ ListaInfracciones, Distrito^ objDistrito);
		void GenerarReporteDeCantidadDeInfraccionesPorDistrito(List<Infracciones^>^ ListaInfracciones, Distrito^ objDistrito)
	};
}