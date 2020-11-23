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
	/// Resumen de frmBúsquedaEspecializada
	/// </summary>
	public ref class frmBúsquedaEspecializada : public System::Windows::Forms::Form
	{
	public:
		frmBúsquedaEspecializada(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmBúsquedaEspecializada(GestorCiviles^ objGestorCivil, GestorInfracciones^ objGestorInfracciones)
		{
			InitializeComponent();
			this->objGestorCivil = objGestorCivil;
			this->objGestorInfracciones = objGestorInfracciones;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmBúsquedaEspecializada()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::Windows::Forms::Button^ button1;
	private: GestorCiviles^ objGestorCivil;
	private: GestorInfracciones^ objGestorInfracciones;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(24, 23);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(409, 137);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos de búsqueda";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(304, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmBúsquedaEspecializada::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(162, 104);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(162, 78);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(162, 53);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(162, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(27, 107);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"DNI:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(27, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Apellido paterno:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(27, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Apellido materno:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column6, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(24, 167);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(409, 150);
			this->dataGridView1->TabIndex = 1;
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
			this->Column3->HeaderText = L"Apellido paterno";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Apellido materno";
			this->Column4->Name = L"Column4";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"DNI";
			this->Column6->Name = L"Column6";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"N° de infracciones";
			this->Column5->Name = L"Column5";
			// 
			// frmBúsquedaEspecializada
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(461, 339);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmBúsquedaEspecializada";
			this->Text = L"frmBúsquedaEspecializada";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &frmBúsquedaEspecializada::frmBúsquedaEspecializada_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ NombreBuscado = this->textBox1->Text;
		String^ ApellidoPaternoBuscado = this->textBox2->Text;
		String^ ApellidoMaternoBuscado = this->textBox3->Text;
		String^ DNIBuscado = this->textBox4->Text;
		if (NombreBuscado == "" && ApellidoPaternoBuscado == "" && ApellidoMaternoBuscado == "" && DNIBuscado == "") {
			MessageBox::Show("Inserte criterio de búsqueda");
		}
		else if (NombreBuscado != "" && ApellidoPaternoBuscado == "" && ApellidoMaternoBuscado == "" && DNIBuscado == "") {
			int Es_valido = this->objGestorCivil->ValidarCivilPorNombre(NombreBuscado);
			if (Es_valido) {
				List<Civil^>^ ListaCivilesPorNombre = this->objGestorCivil->BuscarCivilesPorNombre(NombreBuscado);
				this->dataGridView1->Rows->Clear();
				for (int i = 0; i < this->objGestorCivil->ObtenerNumeroDeElementosPorLista(ListaCivilesPorNombre); i++) {
					Civil^ objCivil = ListaCivilesPorNombre[i];
					List<Infracciones^>^ ListaInfraccionesCivil = this->objGestorInfracciones->ObtenerInfraccionPorDNI(objCivil->DNI);
					array<String^>^ columna = gcnew array<String^>(6);
					columna[0] = Convert::ToString(objCivil->Codigo);
					columna[1] = objCivil->Nombre;
					columna[2] = objCivil->ApellidoPaterno;
					columna[3] = objCivil->ApellidoMaterno;
					columna[4] = objCivil->DNI;
					columna[5] = Convert::ToString(this->objGestorInfracciones->ObtenerNumInfraccionesPorDNI(ListaInfraccionesCivil));
					this->dataGridView1->Rows->Add(columna);
				}
			}
			else {
				MessageBox::Show("Nombre no existente.");
			}
		}
		else if (NombreBuscado == "" && ApellidoPaternoBuscado != "" && ApellidoMaternoBuscado == "" && DNIBuscado == "") {
			int Es_valido = this->objGestorCivil->ValidarCivilPorApellidoPaterno(ApellidoPaternoBuscado);
			if (Es_valido) {
				List<Civil^>^ ListaCivilesPorApellidoPaterno = this->objGestorCivil->BuscarCivilesPorApellidoPaterno(ApellidoPaternoBuscado);
				this->dataGridView1->Rows->Clear();
				for (int i = 0; i < this->objGestorCivil->ObtenerNumeroDeElementosPorLista(ListaCivilesPorApellidoPaterno); i++) {
					Civil^ objCivil = ListaCivilesPorApellidoPaterno[i];
					List<Infracciones^>^ ListaInfraccionesCivil = this->objGestorInfracciones->ObtenerInfraccionPorDNI(objCivil->DNI);
					array<String^>^ columna = gcnew array<String^>(6);
					columna[0] = Convert::ToString(objCivil->Codigo);
					columna[1] = objCivil->Nombre;
					columna[2] = objCivil->ApellidoPaterno;
					columna[3] = objCivil->ApellidoMaterno;
					columna[4] = objCivil->DNI;
					columna[5] = Convert::ToString(this->objGestorInfracciones->ObtenerNumInfraccionesPorDNI(ListaInfraccionesCivil));
					this->dataGridView1->Rows->Add(columna);
				}
			}
			else {
				MessageBox::Show("Apellido paterno no existente.");
			}
		}
		else if (NombreBuscado == "" && ApellidoPaternoBuscado == "" && ApellidoMaternoBuscado != "" && DNIBuscado == "") {
			int Es_valido = this->objGestorCivil->ValidarCivilPorApellidoMaterno(ApellidoMaternoBuscado);
			if (Es_valido) {
				List<Civil^>^ ListaCivilesPorApellidoMaterno = this->objGestorCivil->BuscarCivilesPorApellidoMaterno(ApellidoMaternoBuscado);
				this->dataGridView1->Rows->Clear();
				for (int i = 0; i < this->objGestorCivil->ObtenerNumeroDeElementosPorLista(ListaCivilesPorApellidoMaterno); i++) {
					Civil^ objCivil = ListaCivilesPorApellidoMaterno[i];
					List<Infracciones^>^ ListaInfraccionesCivil = this->objGestorInfracciones->ObtenerInfraccionPorDNI(objCivil->DNI);
					array<String^>^ columna = gcnew array<String^>(6);
					columna[0] = Convert::ToString(objCivil->Codigo);
					columna[1] = objCivil->Nombre;
					columna[2] = objCivil->ApellidoPaterno;
					columna[3] = objCivil->ApellidoMaterno;
					columna[4] = objCivil->DNI;
					columna[5] = Convert::ToString(this->objGestorInfracciones->ObtenerNumInfraccionesPorDNI(ListaInfraccionesCivil));
					this->dataGridView1->Rows->Add(columna);
				}
			}
			else {
				MessageBox::Show("Apellido materno no existente.");
			}
		}
		else if (NombreBuscado != "" && ApellidoPaternoBuscado != "" && ApellidoMaternoBuscado == "" && DNIBuscado == "") {
			int Es_Nombre_valido = this->objGestorCivil->ValidarCivilPorNombre(NombreBuscado);
			int Es_ApellidoPaterno_valido = this->objGestorCivil->ValidarCivilPorApellidoPaterno(ApellidoPaternoBuscado);
			if (Es_Nombre_valido && Es_ApellidoPaterno_valido) {
				List<Civil^>^ ListaCiviles = this->objGestorCivil->BuscarCivilesPorNombreYApellidoPaterno(NombreBuscado, ApellidoPaternoBuscado);
				this->dataGridView1->Rows->Clear();
				for (int i = 0; i < this->objGestorCivil->ObtenerNumeroDeElementosPorLista(ListaCiviles); i++) {
					Civil^ objCivil = ListaCiviles[i];
					List<Infracciones^>^ ListaInfraccionesCivil = this->objGestorInfracciones->ObtenerInfraccionPorDNI(objCivil->DNI);
					array<String^>^ columna = gcnew array<String^>(6);
					columna[0] = Convert::ToString(objCivil->Codigo);
					columna[1] = objCivil->Nombre;
					columna[2] = objCivil->ApellidoPaterno;
					columna[3] = objCivil->ApellidoMaterno;
					columna[4] = objCivil->DNI;
					columna[5] = Convert::ToString(this->objGestorInfracciones->ObtenerNumInfraccionesPorDNI(ListaInfraccionesCivil));
					this->dataGridView1->Rows->Add(columna);
				}
			}
			else {
				MessageBox::Show("Nombre o apellido materno no existente.");
			}
		}
		else if (NombreBuscado != "" && ApellidoPaternoBuscado == "" && ApellidoMaternoBuscado != "" && DNIBuscado == "") {
			int Es_Nombre_valido = this->objGestorCivil->ValidarCivilPorNombre(NombreBuscado);
			int Es_ApellidoMaterno_valido = this->objGestorCivil->ValidarCivilPorApellidoMaterno(ApellidoMaternoBuscado);
			if (Es_Nombre_valido && Es_ApellidoMaterno_valido) {
				List<Civil^>^ ListaCiviles = this->objGestorCivil->BuscarCivilesPorNombreYApellidoMaterno(NombreBuscado, ApellidoMaternoBuscado);
				this->dataGridView1->Rows->Clear();
				for (int i = 0; i < this->objGestorCivil->ObtenerNumeroDeElementosPorLista(ListaCiviles); i++) {
					Civil^ objCivil = ListaCiviles[i];
					List<Infracciones^>^ ListaInfraccionesCivil = this->objGestorInfracciones->ObtenerInfraccionPorDNI(objCivil->DNI);
					array<String^>^ columna = gcnew array<String^>(6);
					columna[0] = Convert::ToString(objCivil->Codigo);
					columna[1] = objCivil->Nombre;
					columna[2] = objCivil->ApellidoPaterno;
					columna[3] = objCivil->ApellidoMaterno;
					columna[4] = objCivil->DNI;
					columna[5] = Convert::ToString(this->objGestorInfracciones->ObtenerNumInfraccionesPorDNI(ListaInfraccionesCivil));
					this->dataGridView1->Rows->Add(columna);
				}
			}
			else {
				MessageBox::Show("Nombre o apellido materno no existente.");
			}
		}
		else if (NombreBuscado != "" && ApellidoPaternoBuscado != "" && ApellidoMaternoBuscado != "" && DNIBuscado == "") {
		int Es_Nombre_valido = this->objGestorCivil->ValidarCivilPorNombre(NombreBuscado);
		int Es_ApellidoPaterno_valido = this->objGestorCivil->ValidarCivilPorApellidoPaterno(ApellidoPaternoBuscado);
		int Es_ApellidoMaterno_valido = this->objGestorCivil->ValidarCivilPorApellidoMaterno(ApellidoMaternoBuscado);
		if (Es_Nombre_valido && Es_ApellidoPaterno_valido && Es_ApellidoMaterno_valido) {
			List<Civil^>^ ListaCiviles = this->objGestorCivil->BuscarCivilesPorNombreYApellidoPaternoYMaterno(NombreBuscado, ApellidoPaternoBuscado, ApellidoMaternoBuscado);
			this->dataGridView1->Rows->Clear();
			for (int i = 0; i < this->objGestorCivil->ObtenerNumeroDeElementosPorLista(ListaCiviles); i++) {
				Civil^ objCivil = ListaCiviles[i];
				List<Infracciones^>^ ListaInfraccionesCivil = this->objGestorInfracciones->ObtenerInfraccionPorDNI(objCivil->DNI);
				array<String^>^ columna = gcnew array<String^>(6);
				columna[0] = Convert::ToString(objCivil->Codigo);
				columna[1] = objCivil->Nombre;
				columna[2] = objCivil->ApellidoPaterno;
				columna[3] = objCivil->ApellidoMaterno;
				columna[4] = objCivil->DNI;
				columna[5] = Convert::ToString(this->objGestorInfracciones->ObtenerNumInfraccionesPorDNI(ListaInfraccionesCivil));
				this->dataGridView1->Rows->Add(columna);
			}
		}
		else {
			MessageBox::Show("Nombre, apellido paterno o materno no existente.");
		}
		}
		else if (NombreBuscado == "" && ApellidoPaternoBuscado == "" && ApellidoMaternoBuscado == "" && DNIBuscado != "") {
			int Es_valido = this->objGestorCivil->ValidarCivil(DNIBuscado);
			if (Es_valido) {
				List<Infracciones^>^ ListaInfraccionesCivil = this->objGestorInfracciones->ObtenerInfraccionPorDNI(DNIBuscado);
				Civil^ objCivil = this->objGestorCivil->BuscarCivilPorDNI(DNIBuscado);
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
				MessageBox::Show("DNI no existente.");
			}
		}
		else {
			int Es_valido = this->objGestorCivil->ValidarCivil(DNIBuscado);
			if (Es_valido) {
				List<Infracciones^>^ ListaInfraccionesCivil = this->objGestorInfracciones->ObtenerInfraccionPorDNI(DNIBuscado);
				Civil^ objCivil = this->objGestorCivil->BuscarCivilPorDNI(DNIBuscado);
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
				MessageBox::Show("DNI no existente.");
			}
		}
	}
private: System::Void frmBúsquedaEspecializada_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
