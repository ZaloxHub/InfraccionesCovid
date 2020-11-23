#pragma once
#include "frmBúsquedaEspecializada.h"
#include "frmInfraccionesUsuarioCivil.h"
#include "frmMapas.h"
#include "frmEstadísticas.h"

namespace InfraccionesCovidView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace InfraccionesCovidController;
	using namespace InfraccionesCovidModel;

	/// <summary>
	/// Resumen de frmPantallaCivil
	/// </summary>
	public ref class frmPantallaCivil : public System::Windows::Forms::Form
	{
	public:
		frmPantallaCivil(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmPantallaCivil(String^ User)
		{
			InitializeComponent();
			this->objGestorCivil = gcnew GestorCiviles();
			this->objGestorInfracciones = gcnew GestorInfracciones();
			this->Usuario = User;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmPantallaCivil()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ inicioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ búsquedaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mapaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ estadísticasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ estadísticasToolStripMenuItem1;
	private: GestorCiviles^ objGestorCivil;
	private: GestorInfracciones^ objGestorInfracciones;
	private: String^ Usuario;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->inicioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->búsquedaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mapaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estadísticasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estadísticasToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->inicioToolStripMenuItem,
					this->reporteToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(491, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// inicioToolStripMenuItem
			// 
			this->inicioToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->búsquedaToolStripMenuItem,
					this->mapaToolStripMenuItem
			});
			this->inicioToolStripMenuItem->Name = L"inicioToolStripMenuItem";
			this->inicioToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->inicioToolStripMenuItem->Text = L"Inicio";
			// 
			// búsquedaToolStripMenuItem
			// 
			this->búsquedaToolStripMenuItem->Name = L"búsquedaToolStripMenuItem";
			this->búsquedaToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->búsquedaToolStripMenuItem->Text = L"Búsqueda";
			this->búsquedaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPantallaCivil::búsquedaToolStripMenuItem_Click);
			// 
			// mapaToolStripMenuItem
			// 
			this->mapaToolStripMenuItem->Name = L"mapaToolStripMenuItem";
			this->mapaToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->mapaToolStripMenuItem->Text = L"Mis infracciones";
			this->mapaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPantallaCivil::mapaToolStripMenuItem_Click);
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->estadísticasToolStripMenuItem,
					this->estadísticasToolStripMenuItem1
			});
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->reporteToolStripMenuItem->Text = L"Reporte";
			// 
			// estadísticasToolStripMenuItem
			// 
			this->estadísticasToolStripMenuItem->Name = L"estadísticasToolStripMenuItem";
			this->estadísticasToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->estadísticasToolStripMenuItem->Text = L"Mapas";
			this->estadísticasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPantallaCivil::estadísticasToolStripMenuItem_Click);
			// 
			// estadísticasToolStripMenuItem1
			// 
			this->estadísticasToolStripMenuItem1->Name = L"estadísticasToolStripMenuItem1";
			this->estadísticasToolStripMenuItem1->Size = System::Drawing::Size(134, 22);
			this->estadísticasToolStripMenuItem1->Text = L"Estadísticas";
			this->estadísticasToolStripMenuItem1->Click += gcnew System::EventHandler(this, &frmPantallaCivil::estadísticasToolStripMenuItem1_Click);
			// 
			// frmPantallaCivil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(491, 340);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmPantallaCivil";
			this->Text = L"frmPantallaCivil";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmPantallaCivil::frmPantallaCivil_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmPantallaCivil::frmPantallaCivil_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void mapaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmInfraccionesUsuarioCivil^ ventanaInfraccionesCivil = gcnew frmInfraccionesUsuarioCivil(this->objGestorCivil, this->objGestorInfracciones,  this->Usuario);
		ventanaInfraccionesCivil->MdiParent = this;
		ventanaInfraccionesCivil->Show();
	}
private: System::Void frmPantallaCivil_Load(System::Object^ sender, System::EventArgs^ e) {
	this->objGestorCivil->LeerCivilesDesdeArchivo();
	this->objGestorInfracciones->Deserializar();
}
private: System::Void búsquedaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmBúsquedaEspecializada^ ventanaBusquedaEspecializada = gcnew frmBúsquedaEspecializada(this->objGestorCivil, this->objGestorInfracciones);
	ventanaBusquedaEspecializada->MdiParent = this;
	ventanaBusquedaEspecializada->Show();
}
private: System::Void estadísticasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMapas^ ventanaMapas = gcnew frmMapas();
	ventanaMapas->MdiParent = this;
	ventanaMapas->Show();
}
private: System::Void estadísticasToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	frmEstadísticas^ ventanaEstadisticas = gcnew frmEstadísticas(this->objGestorInfracciones);
	ventanaEstadisticas->MdiParent = this;
	ventanaEstadisticas->Show();
}
private: System::Void frmPantallaCivil_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	Application::Exit();
}
};
}
