#pragma once
#include "frmNuevaInfraccion.h"
#include "frmEditarInfraccion.h"

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
	/// Resumen de frmPantallaPolicia
	/// </summary>
	public ref class frmPantallaPolicia : public System::Windows::Forms::Form
	{
	public:
		frmPantallaPolicia(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmPantallaPolicia(String^ User)
		{
			InitializeComponent();
			this->objGestorInfracciones = gcnew GestorInfracciones();
			this->objGestorPolicia = gcnew GestorPolicias();
			this->objGestorCivil = gcnew GestorCiviles();
			this->objPolicia = gcnew Policias();
			this->objCivil = gcnew Civil();
			this->User = User;
			//
			//TODO: agregar código de constructor aquí
			//
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmPantallaPolicia()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: GestorInfracciones^ objGestorInfracciones;
	private: GestorPolicias^ objGestorPolicia;
	private: GestorCiviles^ objGestorCivil;
	private: Policias^ objPolicia;
	private: Civil^ objCivil;
	private: String^ User;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::Button^ button4;
	protected:


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(381, 134);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos del policía";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(276, 31);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(95, 20);
			this->textBox4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(227, 34);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Rango";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Apellido Paterno";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Apellido Materno";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Nombre";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(117, 87);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(95, 20);
			this->textBox3->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(117, 59);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(95, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(117, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(95, 20);
			this->textBox1->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Location = System::Drawing::Point(12, 153);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(381, 217);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Buscar civil";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(225, 188);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmPantallaPolicia::button4_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(64, 188);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmPantallaPolicia::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(144, 188);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmPantallaPolicia::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dataGridView1->Location = System::Drawing::Point(21, 65);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(350, 117);
			this->dataGridView1->TabIndex = 10;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Código";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
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
			this->Column6->HeaderText = L"Código de infracción";
			this->Column6->Name = L"Column6";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(247, 26);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmPantallaPolicia::button1_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(124, 26);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(95, 20);
			this->textBox5->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(61, 29);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(26, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"DNI";
			// 
			// frmPantallaPolicia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(413, 382);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmPantallaPolicia";
			this->Text = L"frmPantallaPolicia";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmPantallaPolicia::frmPantallaPolicia_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmPantallaPolicia::frmPantallaPolicia_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void frmPantallaPolicia_Load(System::Object^ sender, System::EventArgs^ e) {
		this->objGestorInfracciones->Deserializar();
		this->objGestorPolicia->LeerPoliciasDesdeArchivo();
		this->objGestorCivil->LeerCivilesDesdeArchivo();
		this->objPolicia = this->objGestorPolicia->ObtenerPoliciasPorDNI(this->User);
		this->textBox1->Text = objPolicia->Nombre;
		this->textBox2->Text = objPolicia->ApellidoPaterno;
		this->textBox3->Text = objPolicia->ApellidoMaterno;
		this->textBox4->Text = objPolicia->Rango;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ DNICivilBuscado = this->textBox5->Text;
		this->objCivil = this->objGestorCivil->BuscarCivilPorDNI(DNICivilBuscado);
		List<Infracciones^>^ ListaInfraccionesCivil = this->objGestorInfracciones->ObtenerInfraccionPorDNI(DNICivilBuscado);
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < this->objGestorInfracciones->ObtenerNumInfraccionesPorDNI(ListaInfraccionesCivil); i++) {
			Infracciones^ objInfraccion = ListaInfraccionesCivil[i];
			array<String^>^ fila = gcnew array<String^>(6);
			fila[0] = Convert::ToString(objInfraccion->objCivil->Codigo);
			fila[1] = objInfraccion->objCivil->Nombre;
			fila[2] = objInfraccion->objCivil->ApellidoPaterno;
			fila[3] = objInfraccion->objCivil->ApellidoMaterno;
			fila[4] = objInfraccion->objCivil->DNI;
			fila[5] = Convert::ToString(objInfraccion->Codigo);
			this->dataGridView1->Rows->Add(fila);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		frmNuevaInfraccion^ ventanaNuevaInfraccion = gcnew frmNuevaInfraccion(this->objGestorInfracciones, this->objCivil, this->objPolicia);
		ventanaNuevaInfraccion->ShowDialog();
		String^ DNICivil = this->objCivil->DNI;
		List<Infracciones^>^ ListaInfraccionesCivil = this->objGestorInfracciones->ObtenerInfraccionPorDNI(DNICivil);
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < this->objGestorInfracciones->ObtenerNumInfraccionesPorDNI(ListaInfraccionesCivil); i++) {
			Infracciones^ objInfraccion = ListaInfraccionesCivil[i];
			array<String^>^ fila = gcnew array<String^>(6);
			fila[0] = Convert::ToString(objInfraccion->objCivil->Codigo);
			fila[1] = objInfraccion->objCivil->Nombre;
			fila[2] = objInfraccion->objCivil->ApellidoPaterno;
			fila[3] = objInfraccion->objCivil->ApellidoMaterno;
			fila[4] = objInfraccion->objCivil->DNI;
			fila[5] = Convert::ToString(objInfraccion->Codigo);
			this->dataGridView1->Rows->Add(fila);

		}
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int FilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	int CodigoEliminar = Convert::ToInt32(this->dataGridView1->Rows[FilaSeleccionada]->Cells[5]->Value->ToString());
	this->objGestorInfracciones->EliminarInfracciones(CodigoEliminar);
	MessageBox::Show("Infracción eliminada correctamente.");

	String^ DNICivil = this->objCivil->DNI;
	List<Infracciones^>^ ListaInfraccionesCivil = this->objGestorInfracciones->ObtenerInfraccionPorDNI(DNICivil);
	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < this->objGestorInfracciones->ObtenerNumInfraccionesPorDNI(ListaInfraccionesCivil); i++) {
		Infracciones^ objInfraccion = ListaInfraccionesCivil[i];
		array<String^>^ fila = gcnew array<String^>(6);
		fila[0] = Convert::ToString(objInfraccion->objCivil->Codigo);
		fila[1] = objInfraccion->objCivil->Nombre;
		fila[2] = objInfraccion->objCivil->ApellidoPaterno;
		fila[3] = objInfraccion->objCivil->ApellidoMaterno;
		fila[4] = objInfraccion->objCivil->DNI;
		fila[5] = Convert::ToString(objInfraccion->Codigo);
		this->dataGridView1->Rows->Add(fila);
	}
}
private: System::Void frmPantallaPolicia_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->objGestorInfracciones->Serializar();
	Application::Exit();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int FilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	int CodigoEditar = Convert::ToInt32(this->dataGridView1->Rows[FilaSeleccionada]->Cells[5]->Value->ToString());
	frmEditarInfraccion^ ventanaEditarInfraccion = gcnew frmEditarInfraccion(this->objGestorInfracciones, this->objGestorPolicia, this->objGestorCivil, CodigoEditar);
	ventanaEditarInfraccion->ShowDialog();
	
	String^ DNICivil = this->objCivil->DNI;
	List<Infracciones^>^ ListaInfraccionesCivil = this->objGestorInfracciones->ObtenerInfraccionPorDNI(DNICivil);
	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < this->objGestorInfracciones->ObtenerNumInfraccionesPorDNI(ListaInfraccionesCivil); i++) {
		Infracciones^ objInfraccion = ListaInfraccionesCivil[i];
		array<String^>^ fila = gcnew array<String^>(6);
		fila[0] = Convert::ToString(objInfraccion->objCivil->Codigo);
		fila[1] = objInfraccion->objCivil->Nombre;
		fila[2] = objInfraccion->objCivil->ApellidoPaterno;
		fila[3] = objInfraccion->objCivil->ApellidoMaterno;
		fila[4] = objInfraccion->objCivil->DNI;
		fila[5] = Convert::ToString(objInfraccion->Codigo);
		this->dataGridView1->Rows->Add(fila);
	}
}
};
}
