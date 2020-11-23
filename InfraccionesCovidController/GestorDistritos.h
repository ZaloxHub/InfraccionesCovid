#pragma once

using namespace System::Collections::Generic;
using namespace InfraccionesCovidModel;
using namespace System;

namespace InfraccionesCovidController {
	public ref class GestorDistritos {
	private:
		List<Distrito^>^ ListaDistrito;

	public:
		GestorDistritos();
		void LeerDistritosDesdeArchivo();
		List<Distrito^>^ BuscarDistritoPorProvincia(int codigo);
		Distrito^ BuscarDistritoPorNombre(String^ Nombre);
		Distrito^ BuscarDistritoPorCodigo(int Codigo);
	};
}