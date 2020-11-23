#include "MapaPeru.h"

using namespace InfraccionesCovidModel;

MapaPeru::MapaPeru(String^ Imagen, List <DepartamentosMapa^>^ ListaDetalleMapa) {
	this->Imagen = Imagen;
	this->ListaDetalleMapa = ListaDetalleMapa;
}