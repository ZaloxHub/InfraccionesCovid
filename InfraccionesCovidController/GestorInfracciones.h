#pragma once

using namespace System::Collections::Generic;
using namespace InfraccionesCovidModel;
using namespace System;
namespace InfraccionesCovidController {
	public ref class GestorInfracciones {
	private:
		List <Infracciones^>^ ListaInfracciones;

	public: 
		GestorInfracciones();
		void LeerInfraccionesDesdeArchivo();
		void Serializar();
		void Deserializar();
		void AgregarInfracciones(Infracciones^ objInfraccion);
		void EscribirInfracciones();
		void EliminarInfracciones(int codigo);
		Infracciones^ ObtenerInfraccionPorIndice(int indice);
		Infracciones^ ObtenerInfraccionPorCodigo(int codigo);
		List<Infracciones^>^ ObtenerInfraccionPorDNI(String^ DNI);
		int ObtenerNumInfraccionesPorDNI(List<Infracciones^>^ ListaInfraccionesDNI);
		List<Infracciones^>^ ObtenerInfraccionesPorDistritoPorProvinciaPorDepartamento(String^ NombreDepartamento, String^ NombreProvincia, String^ NombreDistrito);
		List<Infracciones^>^ ObtenerInfraccionesPorProvinciaPorDepartamento(String^ NombreDepartamento, String^ NombreProvincia);
		List<Infracciones^>^ ObtenerInfraccionesPorDepartamento(String^ NombreDepartamento);
	};
}
