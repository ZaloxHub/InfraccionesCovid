#include "ReporteDistrito.h"

using namespace InfraccionesCovidModel;

ReporteDistrito::ReporteDistrito() {

}

ReporteDistrito::ReporteDistrito(String^ TipoDeInfracci�n, List<Infracciones^>^ ListaInfracciones) {
	this->TipoDeInfraccion = TipoDeInfraccion;
	this->ListaInfracciones = ListaInfracciones;
}
