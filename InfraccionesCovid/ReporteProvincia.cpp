#include "ReporteProvincia.h"

using namespace InfraccionesCovidModel;

ReporteProvincia::ReporteProvincia() {

}

ReporteProvincia::ReporteProvincia(Distrito^ objDistrito, List<Infracciones^>^ ListaInfracciones) {
	this->objDistrito = objDistrito;
	this->ListaInfracciones = ListaInfracciones;
}

ReporteProvincia::ReporteProvincia(String^ TipoDeInfracci�n, List<Infracciones^>^ ListaInfracciones) {
	this->TipoDeInfraccion = TipoDeInfraccion;
	this->ListaInfracciones = ListaInfracciones;
}
