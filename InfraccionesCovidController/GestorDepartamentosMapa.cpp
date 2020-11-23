#include "GestorDepartamentosMapa.h"
#include "GestorProvinciasDptoMapa.h"

using namespace InfraccionesCovidController;
using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Runtime::Serialization::Formatters::Binary;

GestorDepartamentosMapa::GestorDepartamentosMapa() {
	this->ListaDetalleMapa = gcnew List<DepartamentosMapa^>();
}

void GestorDepartamentosMapa::LeerDepartamentosDesdeArchivo() {
	this->ListaDetalleMapa->Clear();
	array<String^>^ Lineas = File::ReadAllLines("Departamento.txt");

	String^ separador = ";";
	for each (String ^ lineaDepartamento in Lineas) {
		array<String^>^ atributos = lineaDepartamento->Split(separador->ToCharArray());
		String^ Imagen = atributos[0];
		int InicioX = Convert::ToInt32(atributos[1]);
		int InicioY = Convert::ToInt32(atributos[2]);
		int FinX = Convert::ToInt32(atributos[3]);
		int FinY = Convert::ToInt32(atributos[4]);
		int codigo = Convert::ToInt32(atributos[5]);
		GestorProvinciasDptoMapa^ objGestorProvinciasDptoMapa = gcnew GestorProvinciasDptoMapa();
		List<ProvinciasDptoMapa^>^ ListaProvinciasPorDepartamento = objGestorProvinciasDptoMapa->BuscarProvinciasPorDepartamento(codigo);
		DepartamentosMapa^ objDepartamentosMapa = gcnew DepartamentosMapa(Imagen, InicioX, InicioX, FinX, FinY, codigo, ListaProvinciasPorDepartamento);
		this->ListaDetalleMapa->Add(objDepartamentosMapa);
	}
}
/*
void GestorDepartamento::Serializar() {
	Stream^ objStream = File::Open("Departamentos.bin", FileMode::Create);
	BinaryFormatter^ objFormateador = gcnew BinaryFormatter();
	objFormateador->Serialize(objStream, this->ListaDepartamento);
	objStream->Close();
}

void GestorDepartamento::Deserializar() {
	Stream^ objStream = File::Open("Departamentos.bin", FileMode::Open);
	BinaryFormatter^ objFormateador = gcnew BinaryFormatter();
	this->ListaDepartamento = dynamic_cast<List<Departamento^>^>(objFormateador->Deserialize(objStream));
	objStream->Close();
}

Departamento^ GestorDepartamento::BuscarDepartamentoPorNombre(String^ Nombre) {
	Departamento^ objDepartamentoBuscado = nullptr;
	for (int i = 0; i < this->ListaDepartamento->Count; i++) {
		if (this->ListaDepartamento[i]->Nombre == Nombre) {
			objDepartamentoBuscado = this->ListaDepartamento[i];
			break;
		}
	}
	return objDepartamentoBuscado;
}

Provincia^ GestorDepartamento::BuscarProvinciaPorDepartamento(String^ NombreDepartamento, String^ NombreProvincia) {
	Provincia^ objProvinciaBuscada = nullptr;
	for (int i = 0; i < this->ListaDepartamento->Count; i++) {
		if (this->ListaDepartamento[i]->Nombre == NombreDepartamento) {
			for (int j = 0; j < this->ListaDepartamento[i]->ListaProvincia->Count; j++) {
				if (this->ListaDepartamento[i]->ListaProvincia[j]->Nombre == NombreProvincia) {
					objProvinciaBuscada = this->ListaDepartamento[i]->ListaProvincia[j];
				}
			}
		}
	}
	return objProvinciaBuscada;
}

Distrito^ GestorDepartamento::BuscarDistritoPorProvinciaPorDepartamento(String^ NombreDepartamento, String^ NombreProvincia, String^ NombreDistrito) {
	Distrito^ objDistritoBuscado = nullptr;
	for (int i = 0; i < this->ListaDepartamento->Count; i++) {
		if (this->ListaDepartamento[i]->Nombre == NombreDepartamento) {
			for (int j = 0; j < this->ListaDepartamento[i]->ListaProvincia->Count; j++) {
				if (this->ListaDepartamento[i]->ListaProvincia[j]->Nombre == NombreProvincia) {
					for (int k = 0; k < this->ListaDepartamento[i]->ListaProvincia[j]->ListaDistrito->Count; k++) {
						if (this->ListaDepartamento[i]->ListaProvincia[j]->ListaDistrito[k]->Nombre == NombreDistrito) {
							objDistritoBuscado = this->ListaDepartamento[i]->ListaProvincia[j]->ListaDistrito[k];
						}
					}
				}
			}
		}
	}
	return objDistritoBuscado;
}*/

void GestorDepartamentosMapa::Serializar() {
	Stream^ objStream = File::Open("DepartamentosMapa.bin", FileMode::Create);
	BinaryFormatter^ objFormateador = gcnew BinaryFormatter();
	objFormateador->Serialize(objStream, this->ListaDetalleMapa);
	objStream->Close();
}

void GestorDepartamentosMapa::Deserializar() {
	Stream^ objStream = File::Open("DistritosProvinciasDptoMapa.bin", FileMode::Open);
	BinaryFormatter^ objFormateador = gcnew BinaryFormatter();
	this->ListaDetalleMapa = dynamic_cast<List<DepartamentosMapa^>^>(objFormateador->Deserialize(objStream));
	objStream->Close();
}