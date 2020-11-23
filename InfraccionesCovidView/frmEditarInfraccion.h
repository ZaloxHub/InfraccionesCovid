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
	/// Resumen de frmEditarInfraccion
	/// </summary>
	public ref class frmEditarInfraccion : public System::Windows::Forms::Form
	{
	public:
		frmEditarInfraccion(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
	public:
		frmEditarInfraccion(GestorInfracciones^ objGestorInfracciones, GestorPolicias^ objGestorPolicia, GestorCiviles^ objGestorCivil, int codigoEditar)
		{
			InitializeComponent();
			this->objGestorInfracciones = objGestorInfracciones;
			this->objGestorPolicia = objGestorPolicia;
			this->objGestorCivil = objGestorCivil;
			this->objGestorDepartamento = gcnew GestorDepartamento();
			this->codigoEditar = codigoEditar;
			//
			//TODO: agregar código de constructor aquí
			//
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarInfraccion()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: GestorPolicias^ objGestorPolicia;
	private: GestorDepartamento^ objGestorDepartamento;
	private: GestorCiviles^ objGestorCivil;
	private: GestorInfracciones^ objGestorInfracciones;
	private: int codigoEditar;



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(140, 390);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarInfraccion::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(221, 390);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditarInfraccion::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(80, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Código";
			this->label1->Click += gcnew System::EventHandler(this, &frmEditarInfraccion::label1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->comboBox5);
			this->groupBox1->Controls->Add(this->comboBox4);
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(47, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(340, 371);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Infracción a editar";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(188, 344);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(121, 20);
			this->textBox4->TabIndex = 35;
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(188, 310);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(121, 21);
			this->comboBox5->TabIndex = 34;
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &frmEditarInfraccion::comboBox5_SelectedIndexChanged);
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(188, 274);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 21);
			this->comboBox4->TabIndex = 33;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &frmEditarInfraccion::comboBox4_SelectedIndexChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Lima", L"Piura" });
			this->comboBox3->Location = System::Drawing::Point(188, 239);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 32;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &frmEditarInfraccion::comboBox3_SelectedIndexChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(188, 202);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(121, 20);
			this->textBox3->TabIndex = 31;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(188, 100);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(121, 20);
			this->textBox2->TabIndex = 30;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Leve", L"Moderada", L"Grave" });
			this->comboBox2->Location = System::Drawing::Point(188, 129);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 29;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"No usar mascarilla", L"Hacer reuniones sociales" });
			this->comboBox1->Location = System::Drawing::Point(188, 66);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 28;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(46, 242);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(74, 13);
			this->label10->TabIndex = 27;
			this->label10->Text = L"Departamento";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(41, 209);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(79, 13);
			this->label9->TabIndex = 26;
			this->label9->Text = L"DNI del Policía";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(188, 33);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 20);
			this->textBox1->TabIndex = 25;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(188, 166);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(121, 20);
			this->dateTimePicker1->TabIndex = 24;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(64, 138);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(55, 13);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Severidad";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(69, 277);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 13);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Provincia";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(80, 309);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 13);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Distrito";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(64, 347);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 13);
			this->label5->TabIndex = 20;
			this->label5->Text = L"DNI del civil";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(87, 103);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 13);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Multa";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(83, 173);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Fecha";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 13);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Tipo de infracción";
			// 
			// frmEditarInfraccion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(425, 425);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"frmEditarInfraccion";
			this->Text = L"frmEditarInfraccion";
			this->Load += gcnew System::EventHandler(this, &frmEditarInfraccion::frmEditarInfraccion_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int codigo = Convert::ToInt32(this->textBox1->Text);
		int Multa = Convert::ToInt32(this->textBox2->Text);
		String^ TipoDeInfraccion = this->comboBox1->Text;
		String^ Severidad = this->comboBox2->Text;
		String^ Fecha = this->dateTimePicker1->Text;
		String^ DNIPolicia = this->textBox3->Text;
		Policias^ objPolicia = this->objGestorPolicia->ObtenerPoliciasPorDNI(DNIPolicia);
		String^ NombreDepartamento = this->comboBox3->Text;
		String^ NombreProvincia = this->comboBox4->Text;
		String^ NombreDistrito = this->comboBox5->Text;
		Departamento^ objDepartamento = this->objGestorDepartamento->BuscarDepartamentoPorNombre(NombreDepartamento);
		Provincia^ objProvincia = this->objGestorDepartamento->BuscarProvinciaPorDepartamento(NombreDepartamento, NombreProvincia);
		Distrito^ objDistrito = this->objGestorDepartamento->BuscarDistritoPorProvinciaPorDepartamento(NombreDepartamento, NombreProvincia, NombreDistrito);
		String^ DNICivil = this->textBox4->Text;
		Civil^ objCivil = this->objGestorCivil->BuscarCivilPorDNI(DNICivil);
		Infracciones^ objInfraccion = gcnew Infracciones(codigo, TipoDeInfraccion, Multa, Severidad, Fecha, objPolicia, objDepartamento, objProvincia, objDistrito, objCivil);

		this->objGestorInfracciones->EliminarInfracciones(this->codigoEditar);
		this->objGestorInfracciones->AgregarInfracciones(objInfraccion);
		this->Close();
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void frmEditarInfraccion_Load(System::Object^ sender, System::EventArgs^ e) {
	this->objGestorDepartamento->Deserializar();
	Infracciones^ objInfraccion = this->objGestorInfracciones->ObtenerInfraccionPorCodigo(this->codigoEditar);
	this->textBox1->Text = Convert::ToString(objInfraccion->Codigo);
	this->comboBox1->Text = objInfraccion->TipoDeInfraccion;
	this->textBox2->Text = Convert::ToString(objInfraccion->Multa);
	this->comboBox2->Text = objInfraccion->Severidad;
	this->dateTimePicker1->Text = objInfraccion->Fecha;
	this->textBox3->Text = objInfraccion->objPolicias->DNI;
	this->comboBox3->Text = objInfraccion->objDepartamento->Nombre;
	this->comboBox4->Text = objInfraccion->objProvincia->Nombre;
	this->comboBox5->Text = objInfraccion->objDistrito->Nombre;
	this->textBox4->Text = objInfraccion->objCivil->DNI;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
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
	else {}
}
};
}
