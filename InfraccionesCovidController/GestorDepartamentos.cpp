#include "GestorDepartamento.h"
#include "GestorProvincia.h"

using namespace InfraccionesCovidController;
using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;

GestorDepartamento::GestorDepartamento() {
	this->ListaDepartamento = gcnew List<Departamento^>();
}

void GestorDepartamento::LeerDepartamentosDesdeArchivo() {
	this->ListaDepartamento->Clear();
	array<String^>^ Lineas = File::ReadAllLines("Departamento.txt");

	String^ separador = ";";
	for each (String ^ lineaDepartamento in Lineas) {
		array<String^>^ atributos = lineaDepartamento->Split(separador->ToCharArray());
		int codigo = Convert::ToInt32(atributos[0]);
		String^ Nombre = atributos[1];
		GestorProvincia^ objGestorProvincia = gcnew GestorProvincia();
		List<Provincia^>^ ListaProvinciasPorDepartamento = objGestorProvincia->BuscarProvinciasPorDepartamento(codigo);
		Departamento^ objDepartamento = gcnew Departamento(codigo, Nombre, ListaProvinciasPorDepartamento);
		this->ListaDepartamento->Add(objDepartamento);
	}
}

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
}