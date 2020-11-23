#pragma once
#include "frmB�squedaEspecializada.h"
#include "frmInfraccionesUsuarioCivil.h"
#include "frmMapas.h"
#include "frmEstad�sticas.h"

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
			//TODO: agregar c�digo de constructor aqu�
			//
		}
		frmPantallaCivil(String^ User)
		{
			InitializeComponent();
			this->objGestorCivil = gcnew GestorCiviles();
			this->objGestorInfracciones = gcnew GestorInfracciones();
			this->Usuario = User;
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::ToolStripMenuItem^ b�squedaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mapaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ estad�sticasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ estad�sticasToolStripMenuItem1;
	private: GestorCiviles^ objGestorCivil;
	private: GestorInfracciones^ objGestorInfracciones;
	private: String^ Usuario;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->inicioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->b�squedaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mapaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estad�sticasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estad�sticasToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->b�squedaToolStripMenuItem,
					this->mapaToolStripMenuItem
			});
			this->inicioToolStripMenuItem->Name = L"inicioToolStripMenuItem";
			this->inicioToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->inicioToolStripMenuItem->Text = L"Inicio";
			// 
			// b�squedaToolStripMenuItem
			// 
			this->b�squedaToolStripMenuItem->Name = L"b�squedaToolStripMenuItem";
			this->b�squedaToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->b�squedaToolStripMenuItem->Text = L"B�squeda";
			this->b�squedaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPantallaCivil::b�squedaToolStripMenuItem_Click);
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
				this->estad�sticasToolStripMenuItem,
					this->estad�sticasToolStripMenuItem1
			});
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->reporteToolStripMenuItem->Text = L"Reporte";
			// 
			// estad�sticasToolStripMenuItem
			// 
			this->estad�sticasToolStripMenuItem->Name = L"estad�sticasToolStripMenuItem";
			this->estad�sticasToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->estad�sticasToolStripMenuItem->Text = L"Mapas";
			this->estad�sticasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPantallaCivil::estad�sticasToolStripMenuItem_Click);
			// 
			// estad�sticasToolStripMenuItem1
			// 
			this->estad�sticasToolStripMenuItem1->Name = L"estad�sticasToolStripMenuItem1";
			this->estad�sticasToolStripMenuItem1->Size = System::Drawing::Size(134, 22);
			this->estad�sticasToolStripMenuItem1->Text = L"Estad�sticas";
			this->estad�sticasToolStripMenuItem1->Click += gcnew System::EventHandler(this, &frmPantallaCivil::estad�sticasToolStripMenuItem1_Click);
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
private: System::Void b�squedaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmB�squedaEspecializada^ ventanaBusquedaEspecializada = gcnew frmB�squedaEspecializada(this->objGestorCivil, this->objGestorInfracciones);
	ventanaBusquedaEspecializada->MdiParent = this;
	ventanaBusquedaEspecializada->Show();
}
private: System::Void estad�sticasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMapas^ ventanaMapas = gcnew frmMapas();
	ventanaMapas->MdiParent = this;
	ventanaMapas->Show();
}
private: System::Void estad�sticasToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	frmEstad�sticas^ ventanaEstadisticas = gcnew frmEstad�sticas(this->objGestorInfracciones);
	ventanaEstadisticas->MdiParent = this;
	ventanaEstadisticas->Show();
}
private: System::Void frmPantallaCivil_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	Application::Exit();
}
};
}
