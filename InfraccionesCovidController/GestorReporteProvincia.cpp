#include "GestorReporteProvincia.h"

using namespace InfraccionesCovidController;
using namespace System::IO;
using namespace System;

GestorReportes::GestorReportes() {
	this->ListaReporte = gcnew List <Reporte^>();
}

int GestorReportes::CantidadElementosReporte() {
	return this->ListaReporte->Count;
}

void GestorReportes::GenerarReporteDeTipoDeInfraccion(List<Infracciones^>^ ListaInfracciones, Provincia^ objProvincia) {
	this->ListaReporte->Clear();
	List<Infracciones^>^ ListaInfraccionesLeves = gcnew List<Infracciones^>();
	List<Infracciones^>^ ListaInfraccionesModeradas = gcnew List<Infracciones^>();
	List<Infracciones^>^ ListaInfraccionesGraves = gcnew List<Infracciones^>();
	for (int i = 0; i < ListaInfracciones->Count; i++) {
		if (ListaInfracciones[i]->Severidad == "Leve") {
			ListaInfraccionesLeves->Add(ListaInfracciones[i]);
		}
		else if (ListaInfracciones[i]->Severidad == "Moderada") {
			ListaInfraccionesModeradas->Add(ListaInfracciones[i]);
		}
		else {
			ListaInfraccionesGraves->Add(ListaInfracciones[i]);
		}
	}
	Reporte^ objReporte = gcnew Reporte("Leve", ListaInfraccionesLeves);
	this->ListaReporte->Add(objReporte);
	Reporte^ objReporte2 = gcnew Reporte("Moderada", ListaInfraccionesModeradas);
	this->ListaReporte->Add(objReporte2);
	Reporte^ objReporte3 = gcnew Reporte("Grave", ListaInfraccionesGraves);
	this->ListaReporte->Add(objReporte3);
}

void GestorReportes::GenerarReporteDeCantidadDeInfracciones(List<Infracciones^>^ ListaInfracciones, Departamento^ objDepartamento) {
	this->ListaReporte->Clear();
	List<Infracciones^>^ ListaInfraccionesPorProvincia = gcnew List<Infracciones^>();

	for (int i = 0; i < objDepartamento->ListaProvincia->Count; i++) {
		ListaInfraccionesPorProvincia->Clear();
		for (int j = 0; j < ListaInfracciones->Count; j++) {
			if (ListaInfracciones[j]->objProvincia->Nombre == objDepartamento->ListaProvincia[i]->Nombre) {
				ListaInfraccionesPorProvincia->Add(ListaInfracciones[i]);
			}
		}
		Reporte^ objReporte = gcnew Reporte(objDepartamento->ListaProvincia[i], ListaInfraccionesPorProvincia);
		this->ListaReporte->Add(objReporte);
	}
}

Reporte^ GestorReportes::ObtenerReportePorIndice(int i) {
	return this->ListaReporte[i];
}
