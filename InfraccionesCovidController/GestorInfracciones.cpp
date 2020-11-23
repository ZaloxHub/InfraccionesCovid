#include "GestorInfracciones.h"
#include "GestorPolicias.h"
#include "GestorCiviles.h"
#include "GestorDepartamento.h"

using namespace InfraccionesCovidController;
using namespace System::IO;
using namespace System;
using namespace System::Runtime::Serialization::Formatters::Binary;

GestorInfracciones::GestorInfracciones() {
	ListaInfracciones = gcnew List <Infracciones^>;
}

void GestorInfracciones::LeerInfraccionesDesdeArchivo() {
	this->ListaInfracciones->Clear();
	array<String^>^ Lineas = File::ReadAllLines("Infracciones.txt");

	String^ separador = ";";
	for each (String ^ lineaInfraccion in Lineas) {
		array<String^>^ atributos = lineaInfraccion->Split(separador->ToCharArray());
		int codigo = Convert::ToInt32(atributos[0]);
		String^ TipoDeInfraccion = atributos[1];
		int Multa = Convert::ToInt32(atributos[2]);
		String^ Severidad = atributos[3];
		String^ Fecha = atributos[4];
		GestorPolicias^ objGestorPolicia = gcnew GestorPolicias();
		objGestorPolicia->LeerPoliciasDesdeArchivo();
		GestorCiviles^ objGestorCivil = gcnew GestorCiviles();
		objGestorCivil->LeerCivilesDesdeArchivo();
		GestorDepartamento^ objGestorDepartamento = gcnew GestorDepartamento();
		objGestorDepartamento->Deserializar();
		Policias^ objPolicia = objGestorPolicia->ObtenerPoliciasPorDNI(atributos[5]);
		Departamento^ objDepartamento = objGestorDepartamento->BuscarDepartamentoPorNombre(atributos[6]);
		Provincia^ objProvincia = objGestorDepartamento->BuscarProvinciaPorDepartamento(atributos[6], atributos[7]);
		Distrito^ objDistrito = objGestorDepartamento->BuscarDistritoPorProvinciaPorDepartamento(atributos[6], atributos[7], atributos[8]);
		Civil^ objCivil = objGestorCivil->BuscarCivilPorDNI(atributos[9]);
		Infracciones^ objInfraccion = gcnew Infracciones(codigo, TipoDeInfraccion, Multa, Severidad, Fecha, objPolicia, objDepartamento, objProvincia, objDistrito, objCivil);
		this->ListaInfracciones->Add(objInfraccion);
	};
} 

void GestorInfracciones::Serializar() {
	Stream^ objStream = File::Open("Infracciones.bin", FileMode::Create);
	BinaryFormatter^ objFormateador = gcnew BinaryFormatter();
	objFormateador->Serialize(objStream, this->ListaInfracciones);
	objStream->Close();
}

void GestorInfracciones::Deserializar() {
	Stream^ objStream = File::Open("Infracciones.bin", FileMode::Open);
	BinaryFormatter^ objFormateador = gcnew BinaryFormatter();
	this->ListaInfracciones = dynamic_cast<List<Infracciones^>^>(objFormateador->Deserialize(objStream));
	objStream->Close();
}

void GestorInfracciones::AgregarInfracciones(Infracciones^ objInfraccion) {
	this->ListaInfracciones->Add(objInfraccion);
}
void GestorInfracciones::EscribirInfracciones() {
	array<String^>^ lineasArchivo = gcnew array<String^>(this->ListaInfracciones->Count);
	for (int i = 0; i < this->ListaInfracciones->Count; i++) {
		Infracciones^ objInfraccion = this->ListaInfracciones[i];
		lineasArchivo[i] = Convert::ToString(objInfraccion->Codigo) + ";" + objInfraccion->TipoDeInfraccion + ";" + Convert::ToString(objInfraccion->Multa) + ";" + objInfraccion->Severidad + ";" + objInfraccion->Fecha + ";" + objInfraccion->objPolicias->DNI + ";" + Convert::ToString(objInfraccion->objDistrito->Codigo) + ";" + objInfraccion->objCivil->DNI;
	}

	File::WriteAllLines("Infracciones.txt", lineasArchivo);
}

Infracciones^ GestorInfracciones::ObtenerInfraccionPorIndice(int indice) {
	return this->ListaInfracciones[indice];
}

Infracciones^ GestorInfracciones::ObtenerInfraccionPorCodigo(int codigo) {
	Infracciones^ objInfraccionBuscada = nullptr;
	for (int i = 0; i < this->ListaInfracciones->Count; i++) {
		if (this->ListaInfracciones[i]->Codigo == codigo) {
			objInfraccionBuscada = ListaInfracciones[i];
			break;
		}
	}
	return objInfraccionBuscada;
}

void GestorInfracciones::EliminarInfracciones(int codigo) {
	for (int i = 0; i < this->ListaInfracciones->Count; i++) {
		if (this->ListaInfracciones[i]->Codigo == codigo) {
			ListaInfracciones->RemoveAt(i);
			break;
		}
	}
}

List<Infracciones^>^ GestorInfracciones::ObtenerInfraccionPorDNI(String^ DNI) {
	List<Infracciones^>^ ListaInfraccionesCivilBuscado= gcnew List<Infracciones^>;
	for (int i = 0; i < this->ListaInfracciones->Count; i++) {
		if (this->ListaInfracciones[i]->objCivil->DNI == DNI) {
			ListaInfraccionesCivilBuscado ->Add (this->ListaInfracciones[i]);
		}
	}
	return ListaInfraccionesCivilBuscado;
}
int GestorInfracciones::ObtenerNumInfraccionesPorDNI(List<Infracciones^>^ ListaInfraccionesDNI) {
	return ListaInfraccionesDNI->Count;
}

List<Infracciones^>^ GestorInfracciones::ObtenerInfraccionesPorDistritoPorProvinciaPorDepartamento(String^ NombreDepartamento, String^ NombreProvincia, String^ NombreDistrito) {
	List<Infracciones^>^ ListaInfraccionesBuscadas = gcnew List<Infracciones^>();

	for (int i = 0; i < this->ListaInfracciones->Count; i++) {
		if (this->ListaInfracciones[i]->objDepartamento->Nombre == NombreDepartamento && this->ListaInfracciones[i]->objProvincia->Nombre == NombreProvincia && this->ListaInfracciones[i]->objDistrito->Nombre == NombreDistrito) {
			ListaInfraccionesBuscadas->Add(ListaInfracciones[i]);
		}
	}
	return ListaInfraccionesBuscadas;
}

List<Infracciones^>^ GestorInfracciones::ObtenerInfraccionesPorProvinciaPorDepartamento(String^ NombreDepartamento, String^ NombreProvincia) {
	List<Infracciones^>^ ListaInfraccionesBuscadas = gcnew List<Infracciones^>();

	for (int i = 0; i < this->ListaInfracciones->Count; i++) {
		if (this->ListaInfracciones[i]->objDepartamento->Nombre == NombreDepartamento && this->ListaInfracciones[i]->objProvincia->Nombre == NombreProvincia) {
			ListaInfraccionesBuscadas->Add(ListaInfracciones[i]);
		}
	}
	return ListaInfraccionesBuscadas;
}

List<Infracciones^>^ GestorInfracciones::ObtenerInfraccionesPorDepartamento(String^ NombreDepartamento) {
	List<Infracciones^>^ ListaInfraccionesBuscadas = gcnew List<Infracciones^>();

	for (int i = 0; i < this->ListaInfracciones->Count; i++) {
		if (this->ListaInfracciones[i]->objDepartamento->Nombre == NombreDepartamento) {
			ListaInfraccionesBuscadas->Add(ListaInfracciones[i]);
		}
	}
	return ListaInfraccionesBuscadas;
}