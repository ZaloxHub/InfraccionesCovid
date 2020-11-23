#include "GestorProvinciasDptoMapa.h"
#include "GestorDistritosProvinciasDptoMapa.h"

using namespace InfraccionesCovidController;
using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System;

GestorProvinciasDptoMapa::GestorProvinciasDptoMapa() {
	this->ListaDetalleMapa2 = gcnew List <ProvinciasDptoMapa^>();
}

List<ProvinciasDptoMapa^>^ GestorProvinciasDptoMapa::BuscarProvinciasPorDepartamento(int codigo) {
	List<ProvinciasDptoMapa^>^ ListaProvinciasPorDepartamento = gcnew List<ProvinciasDptoMapa^>();

	array<String^>^ Lineas = File::ReadAllLines("ProvinciasDptoMapa.txt");

	String^ separador = ";";
	for each (String ^ lineaProvincia in Lineas) {
		array<String^>^ atributos = lineaProvincia->Split(separador->ToCharArray());
		if (Convert::ToInt32(atributos[5]) == codigo) {
			String^ Imagen = atributos[0];
			int InicioX = Convert::ToInt32(atributos[1]);
			int InicioY = Convert::ToInt32(atributos[2]);
			int FinX = Convert::ToInt32(atributos[3]);
			int FinY = Convert::ToInt32(atributos[4]);
			int codigo = Convert::ToInt32(atributos[5]);
			GestorDistritosProvinciasDptoMapa^ objGestorDistritosProvinciasDptoMapa = gcnew GestorDistritosProvinciasDptoMapa();
			List<DistritosProvinciasDptoMapa^>^ ListaDistritosPorProvincia = objGestorDistritosProvinciasDptoMapa->BuscarDistritoPorProvincia(codigo);
			ProvinciasDptoMapa^ objProvincia = gcnew ProvinciasDptoMapa(Imagen, InicioX, InicioX, FinX, FinY, codigo, ListaDistritosPorProvincia);
			ListaProvinciasPorDepartamento->Add(objProvincia);
		}
	}
	return ListaProvinciasPorDepartamento;
}


void GestorProvinciasDptoMapa::Serializar() {
	Stream^ objStream = File::Open("ProvinciasDptoMapa.bin", FileMode::Create);
	BinaryFormatter^ objFormateador = gcnew BinaryFormatter();
	objFormateador->Serialize(objStream, this->ListaDetalleMapa2);
	objStream->Close();
}

void GestorProvinciasDptoMapa::Deserializar() {
	Stream^ objStream = File::Open("ProvinciasDptoMapa.bin", FileMode::Open);
	BinaryFormatter^ objFormateador = gcnew BinaryFormatter();
	this->ListaDetalleMapa2 = dynamic_cast<List<ProvinciasDptoMapa^>^>(objFormateador->Deserialize(objStream));
	objStream->Close();
}