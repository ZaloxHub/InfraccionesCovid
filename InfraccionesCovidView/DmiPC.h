#pragma once
#include "frmCrearUsuario.h"
#include "frmCrearCivil.h"
namespace InfraccionesCovidView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace InfraccionesCovidModel;
	using namespace InfraccionesCovidController;


	/// <summary>
	/// Resumen de DmiPC
	/// </summary>
	public ref class DmiPC : public System::Windows::Forms::Form
	{
	public:
		DmiPC(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~DmiPC()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ tipoDeUsuarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ policiaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ civilToolStripMenuItem;



	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->tipoDeUsuarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->policiaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->civilToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->tipoDeUsuarioToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(386, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// tipoDeUsuarioToolStripMenuItem
			// 
			this->tipoDeUsuarioToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->policiaToolStripMenuItem,
					this->civilToolStripMenuItem
			});
			this->tipoDeUsuarioToolStripMenuItem->Name = L"tipoDeUsuarioToolStripMenuItem";
			this->tipoDeUsuarioToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->tipoDeUsuarioToolStripMenuItem->Text = L"Tipo de Usuario";
			// 
			// policiaToolStripMenuItem
			// 
			this->policiaToolStripMenuItem->Name = L"policiaToolStripMenuItem";
			this->policiaToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->policiaToolStripMenuItem->Text = L"Policia";
			this->policiaToolStripMenuItem->Click += gcnew System::EventHandler(this, &DmiPC::policiaToolStripMenuItem_Click_1);
			// 
			// civilToolStripMenuItem
			// 
			this->civilToolStripMenuItem->Name = L"civilToolStripMenuItem";
			this->civilToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->civilToolStripMenuItem->Text = L"Civil";
			this->civilToolStripMenuItem->Click += gcnew System::EventHandler(this, &DmiPC::civilToolStripMenuItem_Click_1);
			// 
			// DmiPC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(386, 493);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->Name = L"DmiPC";
			this->Text = L"DmiPC";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void policiaToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	GestorUsuarios^ objGestorUsuarios = gcnew GestorUsuarios();
	GestorPolicias^ objGestorPolicias = gcnew GestorPolicias();
	frmCrearUsuario^ ventanaCrearUsuario = gcnew frmCrearUsuario();
	ventanaCrearUsuario->MdiParent = this;
	ventanaCrearUsuario->Show();

}
private: System::Void civilToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	frmCrearCivil^ ventanaCrearCivil = gcnew frmCrearCivil();
	ventanaCrearCivil->MdiParent = this;
	ventanaCrearCivil->Show();
}
};
}
