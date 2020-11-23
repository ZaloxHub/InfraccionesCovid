#include  "GestorPolicias.h"

using namespace InfraccionesCovidController;
using namespace System::IO;
using namespace System;
GestorPolicias::GestorPolicias() {
	ListaPolicias = gcnew List <Policias^>;
}

void GestorPolicias::LeerPoliciasDesdeArchivo() {
	this->ListaPolicias->Clear();
	array<String^>^ Lineas = File::ReadAllLines("Policias.txt");

	String^ separador = ";";
	for each (String ^ lineaPolicia in Lineas) {
		array<String^>^ atributos = lineaPolicia->Split(separador->ToCharArray());
		int codigo = Convert::ToInt32(atributos[0]);
		String^ Nombre = atributos[1];
		String^ ApellidoPaterno = atributos[2];
		String^ ApellidoMaterno = atributos[3];
		String^ DNI = atributos[4];
		String^ Rango = atributos[5];
		String^ CIP = atributos[6];
		Policias^ objPolicias = gcnew Policias(codigo, Nombre, ApellidoPaterno, ApellidoMaterno, DNI, Rango, CIP);
		this->ListaPolicias->Add(objPolicias);
	}
}

int GestorPolicias::ObtenerCantidadPolicias() {
	return this->ListaPolicias->Count;
}

Policias^ GestorPolicias::ObtenerPoliciasLista(int indice) {
	return this->ListaPolicias[indice];
}

Policias^ GestorPolicias::ObtenerPoliciasPorDNI(String^ DNI) {
	Policias^ PoliciaBuscado = nullptr;
	for (int i = 0; i < this->ListaPolicias->Count; i++) {
		if (this->ListaPolicias[i]->DNI == DNI) {
			PoliciaBuscado = ListaPolicias[i];
		}
	}
	return PoliciaBuscado;
}

Policias^ GestorPolicias::ObtenerPoliciasPorUser(String^ User) {
	Policias^ PoliciaBuscado = nullptr;
	for (int i = 0; i < this->ListaPolicias->Count; i++) {
		if (this->ListaPolicias[i]->objUsuarios->User == User) {
			PoliciaBuscado = ListaPolicias[i];
		}
	}
	return PoliciaBuscado;
}

int GestorPolicias::validarPolicias(String^ dni, String^ cip) {
	int es_valido = 0;
	for (int i = 0; i < this->ListaPolicias->Count; i++) {
		if (this->ListaPolicias[i]->DNI == dni && this->ListaPolicias[i]->NumeroCIP == cip) {
			es_valido = 1;
			break;
		}
	}
	return es_valido;
}
