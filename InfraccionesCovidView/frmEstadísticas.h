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
	/// Resumen de frmEstadísticas
	/// </summary>
	public ref class frmEstadísticas : public System::Windows::Forms::Form
	{
	public:
		frmEstadísticas(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmEstadísticas(GestorInfracciones^ objGestorInfracciones)
		{
			InitializeComponent();
			this->objGestorInfracciones = objGestorInfracciones;
			this->objGestorDepartamento = gcnew GestorDepartamento();
			//
			//TODO: agregar código de constructor aquí
			//
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEstadísticas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: GestorInfracciones^ objGestorInfracciones;
	private: GestorDepartamento^ objGestorDepartamento;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(30, 136);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Infracciones";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(315, 160);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Visible = false;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Lima", L"Piura" });
			this->comboBox1->Location = System::Drawing::Point(67, 67);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmEstadísticas::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(361, 67);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 2;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(214, 67);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 3;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &frmEstadísticas::comboBox3_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(64, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Departamento:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(213, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Provincia:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(358, 42);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Distrito:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(509, 58);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 36);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Obtener estadística";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEstadísticas::button1_Click);
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(371, 136);
			this->chart2->Name = L"chart2";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Tipo de infracción";
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(315, 160);
			this->chart2->TabIndex = 10;
			this->chart2->Text = L"chart2";
			this->chart2->Visible = false;
			// 
			// frmEstadísticas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(743, 614);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->chart1);
			this->Name = L"frmEstadísticas";
			this->Text = L"frmEstadísticas";
			this->Load += gcnew System::EventHandler(this, &frmEstadísticas::frmEstadísticas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->comboBox1->Text == "Lima") {
			this->comboBox2->Items->Clear();
			this->comboBox2->Items->Add("Lima");
			this->comboBox2->Items->Add("Canta");
		}
		else if (this->comboBox1->Text == "Piura") {
			this->comboBox2->Items->Clear();
			this->comboBox2->Items->Add("Piura");
			this->comboBox2->Items->Add("Talara");
		}
		else {}
	}
	private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->comboBox2->Text == "Lima") {
			this->comboBox3->Items->Clear();
			this->comboBox3->Items->Add("Cercado de Lima");
			this->comboBox3->Items->Add("San Miguel");

		}
		else if (this->comboBox2->Text == "Canta") {
			this->comboBox3->Items->Clear();
			this->comboBox3->Items->Add("Canta");
			this->comboBox3->Items->Add("Huaros");
		}
		else if (this->comboBox2->Text == "Piura") {
			this->comboBox3->Items->Clear();
			this->comboBox3->Items->Add("Piura");
			this->comboBox3->Items->Add("Catacaos");
		}
		else if (this->comboBox2->Text == "Talara") {
			this->comboBox3->Items->Clear();
			this->comboBox3->Items->Add("Lobitos");
			this->comboBox3->Items->Add("Pariñas");
		}
		else {}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ NombreDepartamento = this->comboBox1->Text;
		String^ NombreProvincia = this->comboBox2->Text;
		String^ NombreDistrito = this->comboBox3->Text;
		if (NombreDepartamento != "" && NombreProvincia != "" && NombreDistrito != "") {
			Distrito^ objDistrito = this->objGestorDepartamento->BuscarDistritoPorProvinciaPorDepartamento(NombreDepartamento, NombreProvincia, NombreDistrito);
			List<Infracciones^>^ ListaInfracciones = this->objGestorInfracciones->ObtenerInfraccionesPorDistritoPorProvinciaPorDepartamento(NombreDepartamento, NombreProvincia, NombreDistrito);
			/* (int i = 0; i < ListaInfracciones->Count; i++) {
				chart1->Series["Tipo de infracción"]->Points->Add(ListaInfracciones[i]->TipoDeInfraccion);
				chart1->Series["Tipo de infracción"]->Points[i]->Color = Color::Coral;
				chart1->Series["Tipo de infracción"]->Points[i]->AxisLabel =
					chart1->Series["Tipo de infracción"]->Points[i]->
			}
			this->chart1->Visible = true;*/
		}
		else if (NombreDepartamento != "" && NombreProvincia != "" && NombreDistrito == "") {
			Provincia^ objProvincia = this->objGestorDepartamento->BuscarProvinciaPorDepartamento(NombreDepartamento, NombreProvincia);
			List<Infracciones^>^ ListaInfracciones = this->objGestorInfracciones->ObtenerInfraccionesPorProvinciaPorDepartamento(NombreDepartamento, NombreProvincia);
		}
		else if (NombreDepartamento != "" && NombreProvincia == "" && NombreDistrito == "") {
			Departamento^ objDepartamento = this->objGestorDepartamento->BuscarDepartamentoPorNombre(NombreDepartamento);
			List<Infracciones^>^ ListaInfracciones = this->objGestorInfracciones->ObtenerInfraccionesPorDepartamento(NombreDepartamento);
			GestorReportes^ objGestorReporte = gcnew GestorReportes();
			objGestorReporte->GenerarReporteDeCantidadDeInfracciones(ListaInfracciones, objDepartamento);
			for (int i = 0; i < objGestorReporte->CantidadElementosReporte(); i++) {
				this->chart1->Visible = true;
				chart1->Series["Infracciones"]->Points->Add(objGestorReporte->ObtenerReportePorIndice(i)->ListaInfracciones->Count);
				chart1->Series["Infracciones"]->Points[i]->Color = Color::Coral;
				chart1->Series["Infracciones"]->Points[i]->AxisLabel = objGestorReporte->ObtenerReportePorIndice(i)->objProvincia->Nombre;
				chart1->Series["Infracciones"]->Points[i]->LegendText = objGestorReporte->ObtenerReportePorIndice(i)->objProvincia->Nombre;
				chart1->Series["Infracciones"]->Points[i]->Label = "" + objGestorReporte->ObtenerReportePorIndice(i)->ListaInfracciones->Count;
			}
			objGestorReporte->GenerarReporteDeTipoDeInfraccion(ListaInfracciones, objDepartamento);
			for (int i = 0; i < objGestorReporte->CantidadElementosReporte(); i++) {
				this->chart2->Visible = true;
				chart2->Series["Tipo de infracción"]->Points->Add(objGestorReporte->ObtenerReportePorIndice(i)->ListaInfracciones->Count);
				chart2->Series["Tipo de infracción"]->Points[i]->Color = Color::Coral;
				chart2->Series["Tipo de infracción"]->Points[i]->AxisLabel = objGestorReporte->ObtenerReportePorIndice(i)->TipoDeInfraccion;
				chart2->Series["Tipo de infracción"]->Points[i]->LegendText = objGestorReporte->ObtenerReportePorIndice(i)->TipoDeInfraccion;
				chart2->Series["Tipo de infracción"]->Points[i]->Label = "" + objGestorReporte->ObtenerReportePorIndice(i)->ListaInfracciones->Count;
			}
		}
		else {
			MessageBox::Show("Inserte parámetros de búsqueda");
		}
	}
private: System::Void frmEstadísticas_Load(System::Object^ sender, System::EventArgs^ e) {
	this->objGestorDepartamento->Deserializar();
}
};
}
