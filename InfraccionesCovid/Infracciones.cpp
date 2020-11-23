#include "Infracciones.h"
#include "Distrito.h"

using namespace InfraccionesCovidModel;

Infracciones::Infracciones(int codigo, String^ TipoDeInfraccion, int Multa, String^ Severidad, String^ Fecha, Policias^ objPolicias, Departamento^ objDepartamento, Provincia^ objProvincia, Distrito^ objDistrito, Civil^ objCivil) {
	this->Codigo = codigo;
	this->TipoDeInfraccion = TipoDeInfraccion;
	this->Multa = Multa;
	this->Severidad = Severidad;
	this->Fecha = Fecha;
	this->objPolicias = objPolicias;
	this->objDepartamento = objDepartamento;
	this->objProvincia = objProvincia;
	this->objDistrito = objDistrito;
	this->objCivil = objCivil;
}