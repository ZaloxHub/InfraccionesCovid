#pragma once

using namespace System::Collections::Generic;
using namespace System;
using namespace InfraccionesCovidModel;


namespace InfraccionesCovidController {
	public ref class GestorUsuarios {
	private:
		List<Usuarios^>^ ListaUsuarios;

	public:
		GestorUsuarios();
		void AgregarUsuarios(Usuarios^ objUsuarios);
		int validarUsuarios(String^ User, String^ contraseña);
		void EscribirUsuariosCiviles();
		void EscribirUsuariosPolicias();
		void LeerUsuariosCivilesDesdeArchivo();
		void LeerUsuariosPoliciasDesdeArchivo();
	};
}

