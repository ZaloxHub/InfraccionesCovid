#include "GestorProvincia.h"
#include "GestorDistritos.h"

using namespace InfraccionesCovidController;
using namespace System::IO;
using namespace System;

GestorProvincia::GestorProvincia() {
	this->ListaProvincia = gcnew List <Provincia^>();
}

List<Provincia^>^ GestorProvincia::BuscarProvinciasPorDepartamento(int codigo) {
	List<Provincia^>^ ListaProvinciasPorDepartamento = gcnew List<Provincia^>();

	array<String^>^ Lineas = File::ReadAllLines("Provincia.txt");

	String^ separador = ";";
	for each (String ^ lineaProvincia in Lineas) {
		array<String^>^ atributos = lineaProvincia->Split(separador->ToCharArray());
		if (Convert::ToInt32(atributos[2]) == codigo) {
			int Codigo = Convert::ToInt32(atributos[0]);
			String^ Nombre = atributos[1];
			GestorDistritos^ objGestorDistrito = gcnew GestorDistritos();
			List<Distrito^>^ ListaDistritosPorProvincia = objGestorDistrito->BuscarDistritoPorProvincia(Codigo);
			Provincia^ objProvincia = gcnew Provincia(Codigo, Nombre, ListaDistritosPorProvincia);
			ListaProvinciasPorDepartamento->Add(objProvincia);
		}
	}
	return ListaProvinciasPorDepartamento;
}