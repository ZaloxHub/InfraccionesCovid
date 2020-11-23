#pragma once

using namespace System::Collections::Generic;
using namespace InfraccionesCovidModel;
using namespace System;

namespace InfraccionesCovidController {
	public ref class GestorDepartamento {
	private:
		List<Departamento^>^ ListaDepartamento;

	public:
		GestorDepartamento();
		void LeerDepartamentosDesdeArchivo();
		void Serializar();
		void Deserializar();
		Departamento^ BuscarDepartamentoPorNombre(String^ Nombre);
		Provincia^ BuscarProvinciaPorDepartamento(String^ NombreDepartamento, String^ NombreProvincia);
		Distrito^ BuscarDistritoPorProvinciaPorDepartamento(String^ NombreDepartamento, String^ NombreProvincia, String^ NombreDistrito);
	};
}