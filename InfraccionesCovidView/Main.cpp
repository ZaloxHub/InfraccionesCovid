#include "frmInicio.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace InfraccionesCovidView;
using namespace InfraccionesCovidController;

void main(array <String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	frmInicio PantallaInicial;
	Application::Run(% PantallaInicial);
}