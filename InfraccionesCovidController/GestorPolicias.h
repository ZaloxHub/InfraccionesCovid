#pragma once

using namespace System::Collections::Generic;
using namespace InfraccionesCovidModel;
using namespace System;

namespace InfraccionesCovidController {
	public ref class GestorPolicias {
	private:
		List <Policias^>^ ListaPolicias;

	public:
		GestorPolicias();
		void LeerPoliciasDesdeArchivo();
		int ObtenerCantidadPolicias();
		Policias^ ObtenerPoliciasLista(int indice);
		Policias^ ObtenerPoliciasPorDNI(String^ DNI);
		Policias^ ObtenerPoliciasPorUser(String^ User);
		int validarPolicias(String^ dni, String^ cip);
	};
}