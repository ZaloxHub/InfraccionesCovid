#pragma once
#include "frmInfraccionesContacto.h"
#include "DmiPC.h"
#include "frmLoginPolicia.h"
#include "frmLoginCivil.h"

using namespace InfraccionesCovidController;
using namespace InfraccionesCovidModel;

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
	/// Resumen de frmInicio
	/// </summary>
	public ref class frmInicio : public System::Windows::Forms::Form
	{
	public:
		frmInicio(void)
		{
			InitializeComponent();
			this->objGestorCiviles = gcnew GestorCiviles();
			this->objGestorInfracciones = gcnew GestorInfracciones();
			this->objGestorDepartamento = gcnew GestorDepartamento();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmInicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button4;
	private: GestorCiviles^ objGestorCiviles;
	private: GestorInfracciones^ objGestorInfracciones;
	private: GestorDepartamento^ objGestorDepartamento;


	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(59, 37);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(382, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bienvenidos a la aplicacionde reporte de infracciones covid";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(92, 75);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(268, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ingrese un DNI para buscar concidencias";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(96, 111);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"DNI";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(139, 107);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(179, 22);
			this->textBox1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(343, 105);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmInicio::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(92, 167);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Ingresa a tu cuenta";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(131, 203);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Policía";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmInicio::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(295, 203);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Civil";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmInicio::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(92, 257);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(165, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"¿Eres nuevo\? Regístrate";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(207, 294);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 28);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Registrar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmInicio::button4_Click);
			// 
			// frmInicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(516, 363);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"frmInicio";
			this->Text = L"Pantalla Principal";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmInicio::frmInicio_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmInicio::CargarDatos);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void CargarDatos(System::Object^ sender, System::EventArgs^ e) {
	this->objGestorCiviles->LeerCivilesDesdeArchivo();
	this->objGestorInfracciones->Deserializar();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ DNIinicial = this-> textBox1->Text;
	frmInfraccionesContacto^ ventanaInfraccionesCivil = gcnew frmInfraccionesContacto(this->objGestorCiviles, this->objGestorInfracciones, DNIinicial);
	ventanaInfraccionesCivil->ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//GestorUsuarios^ objGestorUsuarios = gcnew GestorUsuarios();
	//GestorPolicias^ objGestorPolicias = gcnew GestorPolicias();
	DmiPC^ ventanaDmiPC = gcnew DmiPC();
	ventanaDmiPC->ShowDialog();
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	frmLoginPolicia^ ventanaLoginPolicia = gcnew frmLoginPolicia();
	ventanaLoginPolicia->ShowDialog();
	this->Hide();

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	frmLoginCivil^ ventanaLoginCivil = gcnew frmLoginCivil();
	this->Hide();
	ventanaLoginCivil->ShowDialog();
}
private: System::Void frmInicio_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
}

};
}
