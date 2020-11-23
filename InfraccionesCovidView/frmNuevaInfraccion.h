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
	/// <summary>
	/// Resumen de frmNuevaInfraccion1
	/// </summary>
	public ref class frmNuevaInfraccion : public System::Windows::Forms::Form
	{
	public:
		frmNuevaInfraccion(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmNuevaInfraccion(GestorInfracciones^ objGestorInfracciones, Civil^ objCivil, Policias^ objPolicia)
		{
			InitializeComponent();
			this->objGestorDepartamento = gcnew GestorDepartamento();
			this->objGestorInfracciones = objGestorInfracciones;
			this->objPolicia = objPolicia;
			this->objCivil = objCivil;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmNuevaInfraccion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label5;
	private: GestorInfracciones^ objGestorInfracciones;
	private: GestorDepartamento^ objGestorDepartamento;
	private: Policias^ objPolicia;
	private: Civil^ objCivil;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;






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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código";
			this->label1->Click += gcnew System::EventHandler(this, &frmNuevaInfraccion::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Tipo de infracciones";
			this->label2->Click += gcnew System::EventHandler(this, &frmNuevaInfraccion::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Severidad";
			this->label3->Click += gcnew System::EventHandler(this, &frmNuevaInfraccion::label3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(167, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 20);
			this->textBox1->TabIndex = 4;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"No usar mascarilla", L"Realizar reuniones sociales" });
			this->comboBox1->Location = System::Drawing::Point(167, 64);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmNuevaInfraccion::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Leve", L"Moderada", L"Grave " });
			this->comboBox2->Location = System::Drawing::Point(167, 143);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 9;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &frmNuevaInfraccion::comboBox2_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 187);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Fecha";
			this->label4->Click += gcnew System::EventHandler(this, &frmNuevaInfraccion::label4_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox5);
			this->groupBox1->Controls->Add(this->comboBox4);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(29, 14);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(318, 344);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos de infracción";
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(167, 308);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(121, 21);
			this->comboBox5->TabIndex = 20;
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &frmNuevaInfraccion::comboBox5_SelectedIndexChanged);
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(167, 267);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 21);
			this->comboBox4->TabIndex = 19;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &frmNuevaInfraccion::comboBox4_SelectedIndexChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(24, 311);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(39, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Distrito";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(24, 270);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Provincia";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(167, 104);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(121, 20);
			this->textBox2->TabIndex = 16;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &frmNuevaInfraccion::textBox2_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(23, 107);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Multa";
			this->label6->Click += gcnew System::EventHandler(this, &frmNuevaInfraccion::label6_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(167, 185);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(121, 20);
			this->dateTimePicker1->TabIndex = 14;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &frmNuevaInfraccion::dateTimePicker1_ValueChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Lima", L"Piura" });
			this->comboBox3->Location = System::Drawing::Point(167, 222);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 13;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &frmNuevaInfraccion::comboBox3_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(23, 232);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(74, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Departamento";
			this->label5->Click += gcnew System::EventHandler(this, &frmNuevaInfraccion::label5_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(102, 364);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Crear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmNuevaInfraccion::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(183, 364);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmNuevaInfraccion::button2_Click);
			// 
			// frmNuevaInfraccion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(367, 395);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmNuevaInfraccion";
			this->Text = L"frmNuevaInfraccion";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmNuevaInfraccion::frmNuevaInfraccion1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmNuevaInfraccion::frmNuevaInfraccion1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void frmNuevaInfraccion1_Load(System::Object^ sender, System::EventArgs^ e) {

	this->objGestorDepartamento->Deserializar();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int codigo = Convert::ToInt32(this->textBox1->Text);
	int Multa = Convert::ToInt32(this->textBox2->Text);
	String^ TipoDeInfraccion = this->comboBox1->Text;
	String^ Severidad = this->comboBox2->Text;
	String^ Fecha = this->dateTimePicker1->Text;
	String^ NombreDepartamento = this->comboBox3->Text;
	String^ NombreProvincia = this->comboBox4->Text;
	String^ NombreDistrito = this->comboBox5->Text;
	Departamento^ objDepartamento = this->objGestorDepartamento->BuscarDepartamentoPorNombre(NombreDepartamento);
	Provincia^ objProvincia = this->objGestorDepartamento->BuscarProvinciaPorDepartamento(NombreDepartamento, NombreProvincia);
	Distrito^ objDistrito = this->objGestorDepartamento->BuscarDistritoPorProvinciaPorDepartamento(NombreDepartamento, NombreProvincia, NombreDistrito);
	Infracciones ^ objInfraccion = gcnew Infracciones(codigo, TipoDeInfraccion, Multa, Severidad, Fecha, this->objPolicia, objDepartamento, objProvincia, objDistrito, this->objCivil);
	this->objGestorInfracciones->AgregarInfracciones(objInfraccion);
	this->Close();
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void frmNuevaInfraccion1_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->comboBox3->Text == "Lima") {
		this->comboBox4->Items->Clear();
		this->comboBox4->Items->Add("Lima");
		this->comboBox4->Items->Add("Canta");
	}
	else if (this->comboBox3->Text == "Piura") {
		this->comboBox4->Items->Clear();
		this->comboBox4->Items->Add("Piura");
		this->comboBox4->Items->Add("Talara");
	}
	else{}
}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->comboBox4->Text == "Lima") {
		this->comboBox5->Items->Clear();
		this->comboBox5->Items->Add("Cercado de Lima");
		this->comboBox5->Items->Add("San Miguel");

	}
	else if (this->comboBox4->Text == "Canta") {
		this->comboBox5->Items->Clear();
		this->comboBox5->Items->Add("Canta");
		this->comboBox5->Items->Add("Huaros");
	}
	else if (this->comboBox4->Text == "Piura") {
		this->comboBox5->Items->Clear();
		this->comboBox5->Items->Add("Piura");
		this->comboBox5->Items->Add("Catacaos");
	}
	else if (this->comboBox4->Text == "Talara") {
		this->comboBox5->Items->Clear();
		this->comboBox5->Items->Add("Lobitos");
		this->comboBox5->Items->Add("Pariñas");
	}
	else {}
}
private: System::Void comboBox5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
