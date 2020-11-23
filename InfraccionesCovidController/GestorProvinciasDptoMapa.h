#pragma once

using namespace System::Collections::Generic;
using namespace InfraccionesCovidModel;
using namespace System;

namespace InfraccionesCovidController {
	public ref class GestorProvinciasDptoMapa {
	private:
		List<ProvinciasDptoMapa^>^ ListaDetalleMapa2;

	public:
		GestorProvinciasDptoMapa();
		List<ProvinciasDptoMapa^>^ BuscarProvinciasPorDepartamento(int codigo);

		/*Metodos para aplicar la Serializacion*/
		void Serializar();
		void Deserializar();
	};
}