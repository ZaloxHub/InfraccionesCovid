#pragma once

using namespace System::Collections::Generic;
using namespace InfraccionesCovidModel;
using namespace System;

namespace InfraccionesCovidController {
	public ref class GestorCiviles{
	private:
		List<Civil^> ^ ListaCiviles;	

	public:
		GestorCiviles();
		void LeerCivilesDesdeArchivo();
		Civil^ BuscarCivilPorDNI(String^ DNI);
		List<Civil^>^ BuscarCivilesPorNombre(String^ Nombre);
		List<Civil^>^ BuscarCivilesPorNombreYApellidoPaterno(String^ Nombre, String^ ApellidoPaterno);
		List<Civil^>^ BuscarCivilesPorNombreYApellidoMaterno(String^ Nombre, String^ ApellidoMaterno);
		List<Civil^>^ BuscarCivilesPorNombreYApellidoPaternoYMaterno(String^ Nombre, String^ ApellidoPaterno, String^ ApellidoMaterno);
		List<Civil^>^ BuscarCivilesPorApellidoPaterno(String^ ApellidoPaterno);
		List<Civil^>^ BuscarCivilesPorApellidoMaterno(String^ ApellidoMaterno);
		int ValidarCivil(String^ DNI);
		int ValidarCivilPorNombre(String^ Nombre);
		int ValidarCivilPorApellidoPaterno(String^ ApellidoPaterno);
		int ValidarCivilPorApellidoMaterno(String^ ApellidoMaterno);
		int ObtenerNumeroDeElementosPorLista(List<Civil^>^ ListaCiviles);
	};
}