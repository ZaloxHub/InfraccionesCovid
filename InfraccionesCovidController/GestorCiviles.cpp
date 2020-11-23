#include "GestorCiviles.h"

using namespace InfraccionesCovidController;
using namespace System::IO;
using namespace System;

GestorCiviles::GestorCiviles() {
	ListaCiviles = gcnew List<Civil^>;
}

void GestorCiviles::LeerCivilesDesdeArchivo() {
	this->ListaCiviles->Clear();
	array <String^>^ Lineas = File::ReadAllLines("Civiles.txt");

	String^ separador = ";";
	for each (String ^ LineaCivil in Lineas) {
		array<String^>^ atributos = LineaCivil->Split(separador->ToCharArray());
		int codigo = Convert::ToInt32(atributos[0]);
		String^ Nombre = atributos[1];
		String^ ApellidoPaterno = atributos[2];
		String^ ApellidoMaterno = atributos[3];
		String^ DNI = atributos[4];
		Civil^ objCivil = gcnew Civil(codigo, Nombre, ApellidoPaterno, ApellidoMaterno, DNI);
		this->ListaCiviles->Add(objCivil);
	}
}

Civil^ GestorCiviles::BuscarCivilPorDNI(String^ DNI) {
	Civil^ CivilBuscado = nullptr;
	for (int i = 0; i < this->ListaCiviles->Count; i++) {
		if (this->ListaCiviles[i]->DNI == DNI) {
			CivilBuscado = ListaCiviles[i];
		}
	}
	return CivilBuscado;
}

List<Civil^>^ GestorCiviles::BuscarCivilesPorNombre(String^ Nombre) {
	List<Civil^>^ ListaCivilesPorNombre = gcnew List<Civil^>;
	for (int i = 0; i < this->ListaCiviles->Count; i++) {
		if (this->ListaCiviles[i]->Nombre == Nombre) {
			ListaCivilesPorNombre->Add(this->ListaCiviles[i]);
		}
	}
	return ListaCivilesPorNombre;
}

List<Civil^>^ GestorCiviles::BuscarCivilesPorNombreYApellidoPaterno(String^ Nombre, String^ ApellidoPaterno) {
	List<Civil^>^ ListaCivilesPorNombreYApellidoPaterno = gcnew List<Civil^>;
	for (int i = 0; i < this->ListaCiviles->Count; i++) {
		if (this->ListaCiviles[i]->Nombre == Nombre && this->ListaCiviles[i]->ApellidoPaterno==ApellidoPaterno) {
			ListaCivilesPorNombreYApellidoPaterno->Add(this->ListaCiviles[i]);
		}
	}
	return ListaCivilesPorNombreYApellidoPaterno;
}

List<Civil^>^ GestorCiviles::BuscarCivilesPorNombreYApellidoMaterno(String^ Nombre, String^ ApellidoMaterno) {
	List<Civil^>^ ListaCivilesPorNombreYApellidoMaterno = gcnew List<Civil^>;
	for (int i = 0; i < this->ListaCiviles->Count; i++) {
		if (this->ListaCiviles[i]->Nombre == Nombre && this->ListaCiviles[i]->ApellidoMaterno == ApellidoMaterno) {
			ListaCivilesPorNombreYApellidoMaterno->Add(this->ListaCiviles[i]);
		}
	}
	return ListaCivilesPorNombreYApellidoMaterno;
}

List<Civil^>^ GestorCiviles::BuscarCivilesPorNombreYApellidoPaternoYMaterno(String^ Nombre, String^ ApellidoPaterno, String^ ApellidoMaterno) {
	List<Civil^>^ ListaCivilesPorNombreYApellidos = gcnew List<Civil^>;
	for (int i = 0; i < this->ListaCiviles->Count; i++) {
		if (this->ListaCiviles[i]->Nombre == Nombre && this->ListaCiviles[i]->ApellidoPaterno == ApellidoPaterno && this->ListaCiviles[i]->ApellidoMaterno == ApellidoMaterno) {
			ListaCivilesPorNombreYApellidos->Add(this->ListaCiviles[i]);
		}
	}
	return ListaCivilesPorNombreYApellidos;
}


List<Civil^>^ GestorCiviles::BuscarCivilesPorApellidoPaterno(String^ ApellidoPaterno) {
	List<Civil^>^ ListaCivilesPorApellidoPaterno = gcnew List<Civil^>;
	for (int i = 0; i < this->ListaCiviles->Count; i++) {
		if (this->ListaCiviles[i]->ApellidoPaterno == ApellidoPaterno) {
			ListaCivilesPorApellidoPaterno->Add(this->ListaCiviles[i]);
		}
	}
	return ListaCivilesPorApellidoPaterno;
}

List<Civil^>^ GestorCiviles::BuscarCivilesPorApellidoMaterno(String^ ApellidoMaterno) {
	List<Civil^>^ ListaCivilesPorApellidoMaterno = gcnew List<Civil^>;
	for (int i = 0; i < this->ListaCiviles->Count; i++) {
		if (this->ListaCiviles[i]->ApellidoMaterno == ApellidoMaterno) {
			ListaCivilesPorApellidoMaterno->Add(this->ListaCiviles[i]);
		}
	}
	return ListaCivilesPorApellidoMaterno;
}

int GestorCiviles::ValidarCivil(String^ DNI) {
	int CivilValido=0;
	for (int i = 0; i < this->ListaCiviles->Count; i++) {
		if (this->ListaCiviles[i]->DNI == DNI) {
			CivilValido = 1;
			break;
		}
	}
	return CivilValido;
}

int GestorCiviles::ValidarCivilPorNombre(String^ Nombre) {
	int CivilValido = 0;
	for (int i = 0; i < this->ListaCiviles->Count; i++) {
		if (this->ListaCiviles[i]->Nombre == Nombre) {
			CivilValido = 1;
			break;
		}
	}
	return CivilValido;
}

int GestorCiviles::ValidarCivilPorApellidoPaterno(String^ ApellidoPaterno) {
	int CivilValido = 0;
	for (int i = 0; i < this->ListaCiviles->Count; i++) {
		if (this->ListaCiviles[i]->ApellidoPaterno == ApellidoPaterno) {
			CivilValido = 1;
			break;
		}
	}
	return CivilValido;
}

int GestorCiviles::ValidarCivilPorApellidoMaterno(String^ ApellidoMaterno) {
	int CivilValido = 0;
	for (int i = 0; i < this->ListaCiviles->Count; i++) {
		if (this->ListaCiviles[i]->ApellidoMaterno == ApellidoMaterno) {
			CivilValido = 1;
			break;
		}
	}
	return CivilValido;
}

int GestorCiviles::ObtenerNumeroDeElementosPorLista(List<Civil^>^ ListaCiviles) {
	return ListaCiviles->Count;
}