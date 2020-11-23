#pragma once
#include "Departamento.h"
#include "Provincia.h"
#include "Distrito.h"
#include "Policias.h"
#include "Civil.h"

using namespace System; /*Contiene String*/
using namespace System::Collections::Generic; /*Contiene Lista*/

namespace InfraccionesCovidModel {
	[Serializable]

	public ref class Infracciones {

		/*Definicion de Atributos*/
	public:
		int Codigo;
		String^ TipoDeInfraccion;
		int Multa;
		String^ Severidad;
		String^ Fecha;
		Policias^ objPolicias;
		Departamento^ objDepartamento;
		Provincia^ objProvincia;
		Distrito^ objDistrito;
		Civil^ objCivil;
		/*Definicion de Metodoss*/
	public:
		Infracciones(int codigo, String^TipoDeInfraccion, int Multa, String^ Severidad, String^ Fecha, Policias^ objPolicias, Departamento^ objDepartamento,Provincia^ objProvincia ,Distrito^ objDistrito, Civil^ objCivil);
	};
}