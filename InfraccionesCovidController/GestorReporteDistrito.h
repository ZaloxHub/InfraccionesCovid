#pragma once

using namespace System::Collections::Generic;
using namespace InfraccionesCovidModel;
using namespace System;

namespace InfraccionesCovidController {
	public ref class GestorReportes {
	private:
		List<Reporte^>^ ListaReporte;

	public:
		GestorReportes();
		int CantidadElementosReporte();
		void GenerarReporteDeTipoDeInfraccion(List<Infracciones^>^ ListaInfracciones, Departamento^ objDepartamento);
		Reporte^ ObtenerReportePorIndice(int i);
	};
}