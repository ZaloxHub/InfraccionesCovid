#include "GestorDistritosProvinciasDptoMapa.h"

using namespace InfraccionesCovidController;
using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System;

GestorDistritosProvinciasDptoMapa::GestorDistritosProvinciasDptoMapa() {
	this->ListaDetalleMapa3 = gcnew List <DistritosProvinciasDptoMapa^>();
}

void GestorDistritosProvinciasDptoMapa::LeerDistritosProvinciasDptoMapaDesdeArchivo() {
	this->ListaDetalleMapa3->Clear();
	array<String^>^ Lineas = File::ReadAllLines("DistritosProvinciasDptoMapa.txt");
	String^ separador = ";";
	for each (String ^ lineaDistritosProvinciasDptoMapa in Lineas) {
		array<String^>^ atributos = lineaDistritosProvinciasDptoMapa->Split(separador->ToCharArray());
		String^ Imagen = atributos[0];
		int InicioX = Convert::ToInt32(atributos[1]);
		int InicioY = Convert::ToInt32(atributos[2]);
		int FinX = Convert::ToInt32(atributos[3]);
		int FinY = Convert::ToInt32(atributos[4]);
		int codigo = Convert::ToInt32(atributos[5]);
		DistritosProvinciasDptoMapa^ objDistritosProvinciasDptoMapa = gcnew DistritosProvinciasDptoMapa(Imagen, InicioX, InicioX, FinX, FinY, codigo);
		this->ListaDetalleMapa3->Add(objDistritosProvinciasDptoMapa);
	}
}

List<DistritosProvinciasDptoMapa^>^ GestorDistritosProvinciasDptoMapa::BuscarDistritoPorProvincia(int codigo) {
	List<DistritosProvinciasDptoMapa^>^ ListaDistritosPorProvincia = gcnew List<DistritosProvinciasDptoMapa^>();

	array<String^>^ Lineas = File::ReadAllLines("DistritosProvinciasDptoMapa.txt");

	String^ separador = ";";
	for each (String ^ lineaDistrito in Lineas) {
		array<String^>^ atributos = lineaDistrito->Split(separador->ToCharArray());
		if (Convert::ToInt32(atributos[5]) == codigo) {
			String^ Imagen = atributos[0];
			int InicioX = Convert::ToInt32(atributos[1]);
			int InicioY = Convert::ToInt32(atributos[2]);
			int FinX = Convert::ToInt32(atributos[3]);
			int FinY = Convert::ToInt32(atributos[4]);
			int codigo = Convert::ToInt32(atributos[5]);
			DistritosProvinciasDptoMapa^ objDistritosProvinciasDptoMapa = gcnew DistritosProvinciasDptoMapa(Imagen, InicioX, InicioX, FinX, FinY, codigo);
			ListaDistritosPorProvincia->Add(objDistritosProvinciasDptoMapa);
		}
	}
	return ListaDistritosPorProvincia;
}
/*
Distrito^ GestorDistritos::BuscarDistritoPorNombre(String^ Nombre) {
	Distrito^ DistritoBuscado = nullptr;
	for (int i = 0; i < this->ListaDistrito->Count; i++) {
		if (this->ListaDistrito[i]->Nombre == Nombre) {
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
}*/

void GestorDistritosProvinciasDptoMapa::Serializar() {
	Stream^ objStream = File::Open("DistritosProvinciasDptoMapa.bin", FileMode::Create);
	BinaryFormatter^ objFormateador = gcnew BinaryFormatter();
	objFormateador->Serialize(objStream, this->ListaDetalleMapa3);
	objStream->Close();
}

void GestorDistritosProvinciasDptoMapa::Deserializar() {
	Stream^ objStream = File::Open("DistritosProvinciasDptoMapa.bin", FileMode::Open);
	BinaryFormatter^ objFormateador = gcnew BinaryFormatter();
	this->ListaDetalleMapa3 = dynamic_cast<List<DistritosProvinciasDptoMapa^>^>(objFormateador->Deserialize(objStream));
	objStream->Close();
}