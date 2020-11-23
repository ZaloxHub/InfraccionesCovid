#pragma once

namespace InfraccionesCovidView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace InfraccionesCovidController;
	using namespace InfraccionesCovidModel;
	using namespace System::Collections::Generic;
	/// <summary>
	/// Resumen de frmInfraccionesContacto
	/// </summary>
	public ref class frmInfraccionesContacto : public System::Windows::Forms::Form
	{
	public:
		frmInfraccionesContacto(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmInfraccionesContacto(GestorCiviles^ objGestorCivil, GestorInfracciones^ objGestorInfracciones, String^ DNIinicial)
		{
			InitializeComponent();
			this->objGestorCivil = objGestorCivil;
			this->objGestorInfracciones = objGestorInfracciones;
			this->DNIinicial = DNIinicial;
			//
			//TODO: agregar código de constructor aquí
			//
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmInfraccionesContacto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: GestorCiviles^ objGestorCivil;
	private: GestorInfracciones^ objGestorInfracciones;
	private: String^ DNIinicial;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dataGridView1->Location = System::Drawing::Point(27, 138);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(643, 150);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmInfraccionesContacto::dataGridView1_CellContentClick_1);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Código";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombres";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Apellido Paterno";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Apellido Materno";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"DNI";
this->Column5->Name = L"Column5";
// 
// Column6
// 
this->Column6->HeaderText = L"Nro. de infracciones";
this->Column6->Name = L"Column6";
// 
// groupBox1
// 
this->groupBox1->Controls->Add(this->button1);
this->groupBox1->Controls->Add(this->textBox1);
this->groupBox1->Controls->Add(this->label1);
this->groupBox1->Location = System::Drawing::Point(94, 28);
this->groupBox1->Name = L"groupBox1";
this->groupBox1->Size = System::Drawing::Size(454, 100);
this->groupBox1->TabIndex = 1;
this->groupBox1->TabStop = false;
this->groupBox1->Text = L"Nueva Búsqueda";
// 
// button1
// 
this->button1->Location = System::Drawing::Point(351, 38);
this->button1->Name = L"button1";
this->button1->Size = System::Drawing::Size(75, 23);
this->button1->TabIndex = 2;
this->button1->Text = L"Buscar";
this->button1->UseVisualStyleBackColor = true;
this->button1->Click += gcnew System::EventHandler(this, &frmInfraccionesContacto::button1_Click);
// 
// textBox1
// 
this->textBox1->Location = System::Drawing::Point(178, 40);
this->textBox1->Name = L"textBox1";
this->textBox1->Size = System::Drawing::Size(140, 20);
this->textBox1->TabIndex = 1;
// 
// label1
// 
this->label1->AutoSize = true;
this->label1->Location = System::Drawing::Point(92, 43);
this->label1->Name = L"label1";
this->label1->Size = System::Drawing::Size(29, 13);
this->label1->TabIndex = 0;
this->label1->Text = L"DNI:";
// 
// button2
// 
this->button2->Location = System::Drawing::Point(297, 310);
this->button2->Name = L"button2";
this->button2->Size = System::Drawing::Size(75, 23);
this->button2->TabIndex = 15;
this->button2->Text = L"Cancelar";
this->button2->UseVisualStyleBackColor = true;
this->button2->Click += gcnew System::EventHandler(this, &frmInfraccionesContacto::button2_Click);
// 
// frmInfraccionesContacto
// 
this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
this->ClientSize = System::Drawing::Size(695, 345);
this->Controls->Add(this->button2);
this->Controls->Add(this->groupBox1);
this->Controls->Add(this->dataGridView1);
this->Name = L"frmInfraccionesContacto";
this->Text = L"frmInfraccionesContacto";
this->Load += gcnew System::EventHandler(this, &frmInfraccionesContacto::frmInfraccionesContacto_Load);
(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
this->groupBox1->ResumeLayout(false);
this->groupBox1->PerformLayout();
this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void frmInfraccionesContacto_Load(System::Object^ sender, System::EventArgs^ e) {
	String^ DNI = this->DNIinicial;
	Civil^ objCivil = this->objGestorCivil->BuscarCivilPorDNI(DNI);
	int CivilValido = objGestorCivil->ValidarCivil(DNI);

	if (CivilValido == 1) {
		List<Infracciones^>^ ListaInfraccionesCivil = this->objGestorInfracciones->ObtenerInfraccionPorDNI(DNI);

		this->dataGridView1->Rows->Clear();
		array<String^>^ columna = gcnew array<String^>(6);
		columna[0] = Convert::ToString(objCivil->Codigo);
		columna[1] = objCivil->Nombre;
		columna[2] = objCivil->ApellidoPaterno;
		columna[3] = objCivil->ApellidoMaterno;
		columna[4] = objCivil->DNI;
		columna[5] = Convert::ToString(this->objGestorInfracciones->ObtenerNumInfraccionesPorDNI(ListaInfraccionesCivil));
		this->dataGridView1->Rows->Add(columna);
	}
	else {
		MessageBox::Show("DNI no válido.");
	}
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ DNI = this->textBox1->Text;
	Civil^ objCivil = this->objGestorCivil->BuscarCivilPorDNI(DNI);
	int CivilValido = this->objGestorCivil->ValidarCivil(DNI);

	if (CivilValido == 1){
		List<Infracciones^>^ ListaInfraccionesCivil = this->objGestorInfracciones->ObtenerInfraccionPorDNI(DNI);

		this->dataGridView1->Rows->Clear();
		array<String^>^ columna = gcnew array<String^>(6);
		columna[0] = Convert::ToString(objCivil->Codigo);
		columna[1] = objCivil->Nombre;
		columna[2] = objCivil->ApellidoPaterno;
		columna[3] = objCivil->ApellidoMaterno;
		columna[4] = objCivil->DNI;
		columna[5] = Convert::ToString(this->objGestorInfracciones->ObtenerNumInfraccionesPorDNI(ListaInfraccionesCivil));
		this->dataGridView1->Rows->Add(columna);
}
	else {

		MessageBox::Show("DNI no válido.");
	}
}
};
}
