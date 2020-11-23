#include "GestorDistritos.h"
using namespace InfraccionesCovidController;
using namespace System::IO;
using namespace System;

GestorDistritos::GestorDistritos() {
	this->ListaDistrito = gcnew List <Distrito^>();
}

void GestorDistritos::LeerDistritosDesdeArchivo() {
	this->ListaDistrito->Clear();
	array<String^>^ Lineas = File::ReadAllLines("Distrito.txt");

	String^ separador = ";";
	for each (String ^ lineaDistrito in Lineas) {
		array<String^>^ atributos = lineaDistrito->Split(separador->ToCharArray());
		int codigo = Convert::ToInt32(atributos[0]);
		String^ Nombre = atributos[1];
		Distrito^ objDistrito = gcnew Distrito(codigo, Nombre);
		this->ListaDistrito->Add(objDistrito);
	}
}

List<Distrito^>^ GestorDistritos::BuscarDistritoPorProvincia(int codigo) {
	List<Distrito^>^ ListaDistritosPorProvincia = gcnew List<Distrito^>();

	array<String^>^ Lineas = File::ReadAllLines("Distrito.txt");

	String^ separador = ";";
	for each (String ^ lineaDistrito in Lineas) {
		array<String^>^ atributos = lineaDistrito->Split(separador->ToCharArray());
		if (Convert::ToInt32(atributos[2]) == codigo) {
			int Codigo = Convert::ToInt32(atributos[0]);
			String^ Nombre = atributos[1];
			Distrito ^ objDistrito = gcnew Distrito(Codigo, Nombre);
			ListaDistritosPorProvincia->Add(objDistrito);
		}
	}
	return ListaDistritosPorProvincia;
}

Distrito^ GestorDistritos::BuscarDistritoPorNombre(String^ Nombre) {
	Distrito^ DistritoBuscado = nullptr;
	for (int i = 0; i < this->ListaDistrito->Count; i++) {
		if (this->ListaDistrito[i]->Nombre==Nombre) {
			DistritoBuscado = ListaDistrito[i];
		}
	}
	return DistritoBuscado;
}

Distrito^ GestorDistritos::BuscarDistritoPorCodigo(int Codigo) {
	Distrito^ DistritoBuscado = nullptr;
	for (int i = 0; i < this->ListaDistrito->Count; i++) {
		if (this->ListaDistrito[i]->Codigo == Codigo) {
			DistritoBuscado = ListaDistrito[i];
		}
	}
	return DistritoBuscado;
}