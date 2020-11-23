#include  "GestorUsuarios.h"

using namespace InfraccionesCovidController;
using namespace InfraccionesCovidModel;
using namespace System::IO;

GestorUsuarios::GestorUsuarios() {
	this->ListaUsuarios = gcnew List<Usuarios^>();
}

void GestorUsuarios::AgregarUsuarios(Usuarios^ objUsuarios) {
	this->ListaUsuarios->Add(objUsuarios);
}

int GestorUsuarios::validarUsuarios(String^ User, String^ contraseña) {
	int es_valido = 0;
	for (int i = 0; i < this->ListaUsuarios->Count; i++) {
		if (this->ListaUsuarios[i]->User == User && this->ListaUsuarios[i]->Contraseña == contraseña) {
			es_valido = 1;
			break;
		}
	}
	return es_valido;
}

void GestorUsuarios::EscribirUsuariosCiviles() {
	array<String^>^ lineasArchivo = gcnew array<String^>(this->ListaUsuarios->Count);
	for (int i = 0; i < this->ListaUsuarios->Count; i++) {
		Usuarios^ objUsuarios = this->ListaUsuarios[i];
		lineasArchivo[i] = objUsuarios->User + ";" + objUsuarios->Contraseña + ";" + objUsuarios->Codigo;
	}
	File::WriteAllLines("UsuariosCiviles.txt", lineasArchivo);
}

void GestorUsuarios::EscribirUsuariosPolicias() {
	array<String^>^ lineasArchivo = gcnew array<String^>(this->ListaUsuarios->Count);
	for (int i = 0; i < this->ListaUsuarios->Count; i++) {
		Usuarios^ objUsuarios = this->ListaUsuarios[i];
		lineasArchivo[i] = objUsuarios->User + ";" + objUsuarios->Contraseña + ";" + objUsuarios->Codigo;
	}
	File::WriteAllLines("UsuariosPolicias.txt", lineasArchivo);
}


void GestorUsuarios::LeerUsuariosCivilesDesdeArchivo() {
	this->ListaUsuarios->Clear();
	array<String^>^ Lineas = File::ReadAllLines("UsuariosCiviles.txt");

	String^ separador = ";";
	for each (String ^ lineaUsuarios in Lineas) {
		array<String^>^ atributos = lineaUsuarios->Split(separador->ToCharArray());
		String^ User = atributos[0];
		String^ Contraseña = atributos[1];
		int Codigo = Convert::ToInt32(atributos[2]);
		Usuarios^ objUsuarios = gcnew Usuarios(User, Contraseña, Codigo);
		this->ListaUsuarios->Add(objUsuarios);
	}
}

void GestorUsuarios::LeerUsuariosPoliciasDesdeArchivo() {
	this->ListaUsuarios->Clear();
	array<String^>^ Lineas = File::ReadAllLines("UsuariosPolicias.txt");

	String^ separador = ";";
	for each (String ^ lineaUsuarios in Lineas) {
		array<String^>^ atributos = lineaUsuarios->Split(separador->ToCharArray());
		String^ User = atributos[0];
		String^ Contraseña = atributos[1];
		int Codigo = Convert::ToInt32(atributos[2]);
		Usuarios^ objUsuarios = gcnew Usuarios(User, Contraseña, Codigo);
		this->ListaUsuarios->Add(objUsuarios);
	}
}