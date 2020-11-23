#pragma once

using namespace System::Collections::Generic;
using namespace InfraccionesCovidModel;
using namespace System;

namespace InfraccionesCovidController {
	public ref class GestorProvincia {
	private:
		List<Provincia^>^ ListaProvincia;

	public:
		GestorProvincia();
		List<Provincia^>^ BuscarProvinciasPorDepartamento(int codigo);
	};
}