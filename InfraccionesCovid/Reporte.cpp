#include "Reporte.h"

using namespace InfraccionesCovidModel;

Reporte::Reporte() {

}

Reporte::Reporte(Provincia^ objProvincia, List<Infracciones^>^ ListaInfracciones) {
	this->objProvincia = objProvincia;
	this->ListaInfracciones = ListaInfracciones;
}

Reporte::Reporte(String^ TipoDeInfracci�n, List<Infracciones^>^ ListaInfracciones) {
	this->TipoDeInfraccion = TipoDeInfraccion;
	this->ListaInfracciones = ListaInfracciones;
}