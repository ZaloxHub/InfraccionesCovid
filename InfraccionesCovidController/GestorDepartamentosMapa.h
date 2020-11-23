#pragma once

using namespace System::Collections::Generic;
using namespace InfraccionesCovidModel;
using namespace System;

namespace InfraccionesCovidController {
	public ref class GestorDepartamentosMapa {
	private:
		List<DepartamentosMapa^>^ ListaDetalleMapa;

	public:
		GestorDepartamentosMapa();
		void LeerDepartamentosDesdeArchivo();
		/*void Serializar();
		void Deserializar();
		Departamento^ BuscarDepartamentoPorNombre(String^ Nombre);
		Provincia^ BuscarProvinciaPorDepartamento(String^ NombreDepartamento, String^ NombreProvincia);
		Distrito^ BuscarDistritoPorProvinciaPorDepartamento(String^ NombreDepartamento, String^ NombreProvincia, String^ NombreDistrito);*/

		/*Metodos para aplicar la Serializacion*/
		void Serializar();
		void Deserializar();
	};
}