#pragma once

using namespace System::Collections::Generic;
using namespace InfraccionesCovidModel;
using namespace System;

namespace InfraccionesCovidController {
	public ref class GestorDistritosProvinciasDptoMapa {
	private:
		List<DistritosProvinciasDptoMapa^>^ ListaDetalleMapa3;

	public:
		GestorDistritosProvinciasDptoMapa();
		void LeerDistritosProvinciasDptoMapaDesdeArchivo();
		List<DistritosProvinciasDptoMapa^>^ BuscarDistritoPorProvincia(int codigo);
		/*Distrito^ BuscarDistritoPorNombre(String^ Nombre);
		Distrito^ BuscarDistritoPorCodigo(int Codigo);*/

		/*Metodos para aplicar la Serializacion*/
		void Serializar();
		void Deserializar();
	};
}