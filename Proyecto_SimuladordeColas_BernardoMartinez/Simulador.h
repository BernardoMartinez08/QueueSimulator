#pragma once
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include "Cola.h"
#include "Server.h"
using namespace std;
namespace ProyectoSimuladordeColasBernardoMartinez {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Prueba
	/// </summary>
	public ref class Simulador : public System::Windows::Forms::Form
	{
		Cola* idColas = new Cola();
		Server* Servidores = new Server();

	private: System::Windows::Forms::Timer^ timerNuevosClientes;
	private: System::Windows::Forms::Timer^ timerSimulacion;
	private: System::Windows::Forms::DataGridView^ dataEstadisticas;









	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ sIMULADORToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eSTADISTICASToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ tiempoSimu;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cajasAbiertas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cajaCerrada;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ tiempoLlegada;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ tiempoAtencion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ tiempoEspera;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ numClientes;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ atendidos;
	private: System::Windows::Forms::Timer^ timerEstadisticas;


	private: System::Windows::Forms::Button^ btPlay;

	public:
		Simulador(void)
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
		~Simulador()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:




	private: System::Windows::Forms::PictureBox^ picEntrada;
	private: System::Windows::Forms::PictureBox^ picSalida;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::NumericUpDown^ numMaxAtencion;
	private: System::Windows::Forms::NumericUpDown^ numMaxLlegada;
	private: System::Windows::Forms::NumericUpDown^ numMinAtencion;
	private: System::Windows::Forms::NumericUpDown^ numMinLlegada;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::NumericUpDown^ numMaxCola;

	private: System::Windows::Forms::NumericUpDown^ numMinCola;
	private: System::Windows::Forms::Label^ label10;



	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::NumericUpDown^ numCajeros;
	private: System::Windows::Forms::NumericUpDown^ numTiempoSimulacion;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Label^ label6;





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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Simulador::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataEstadisticas = (gcnew System::Windows::Forms::DataGridView());
			this->tiempoSimu = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cajasAbiertas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cajaCerrada = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tiempoLlegada = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tiempoAtencion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tiempoEspera = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->numClientes = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->atendidos = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->picEntrada = (gcnew System::Windows::Forms::PictureBox());
			this->picSalida = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->sIMULADORToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eSTADISTICASToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->numMaxAtencion = (gcnew System::Windows::Forms::NumericUpDown());
			this->numMaxLlegada = (gcnew System::Windows::Forms::NumericUpDown());
			this->numMinAtencion = (gcnew System::Windows::Forms::NumericUpDown());
			this->numMinLlegada = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->numMaxCola = (gcnew System::Windows::Forms::NumericUpDown());
			this->numMinCola = (gcnew System::Windows::Forms::NumericUpDown());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->numCajeros = (gcnew System::Windows::Forms::NumericUpDown());
			this->numTiempoSimulacion = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btPlay = (gcnew System::Windows::Forms::Button());
			this->timerNuevosClientes = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerSimulacion = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerEstadisticas = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataEstadisticas))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picEntrada))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSalida))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMaxAtencion))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMaxLlegada))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMinAtencion))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMinLlegada))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMaxCola))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMinCola))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCajeros))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTiempoSimulacion))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->dataEstadisticas);
			this->panel1->Controls->Add(this->picEntrada);
			this->panel1->Controls->Add(this->picSalida);
			this->panel1->Controls->Add(this->menuStrip1);
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(12, 57);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(963, 429);
			this->panel1->TabIndex = 0;
			// 
			// dataEstadisticas
			// 
			this->dataEstadisticas->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataEstadisticas->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataEstadisticas->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataEstadisticas->BackgroundColor = System::Drawing::Color::LightBlue;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataEstadisticas->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataEstadisticas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataEstadisticas->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->tiempoSimu,
					this->cajasAbiertas, this->cajaCerrada, this->tiempoLlegada, this->tiempoAtencion, this->tiempoEspera, this->numClientes, this->atendidos
			});
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle10->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataEstadisticas->DefaultCellStyle = dataGridViewCellStyle10;
			this->dataEstadisticas->Enabled = false;
			this->dataEstadisticas->EnableHeadersVisualStyles = false;
			this->dataEstadisticas->Location = System::Drawing::Point(0, 24);
			this->dataEstadisticas->Name = L"dataEstadisticas";
			dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle11->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle11->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataEstadisticas->RowHeadersDefaultCellStyle = dataGridViewCellStyle11;
			dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataEstadisticas->RowsDefaultCellStyle = dataGridViewCellStyle12;
			this->dataEstadisticas->Size = System::Drawing::Size(960, 402);
			this->dataEstadisticas->TabIndex = 5;
			this->dataEstadisticas->Visible = false;
			this->dataEstadisticas->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Simulador::dataGridView1_CellContentClick);
			// 
			// tiempoSimu
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->tiempoSimu->DefaultCellStyle = dataGridViewCellStyle2;
			this->tiempoSimu->HeaderText = L"Tiempo Simulacion";
			this->tiempoSimu->Name = L"tiempoSimu";
			this->tiempoSimu->Width = 111;
			// 
			// cajasAbiertas
			// 
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->cajasAbiertas->DefaultCellStyle = dataGridViewCellStyle3;
			this->cajasAbiertas->HeaderText = L"Cajas Abiertas";
			this->cajasAbiertas->Name = L"cajasAbiertas";
			this->cajasAbiertas->Width = 91;
			// 
			// cajaCerrada
			// 
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->cajaCerrada->DefaultCellStyle = dataGridViewCellStyle4;
			this->cajaCerrada->HeaderText = L"Cajas Cerradas";
			this->cajaCerrada->Name = L"cajaCerrada";
			this->cajaCerrada->Width = 95;
			// 
			// tiempoLlegada
			// 
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->tiempoLlegada->DefaultCellStyle = dataGridViewCellStyle5;
			this->tiempoLlegada->HeaderText = L"Tiempo Promedio Llegada";
			this->tiempoLlegada->Name = L"tiempoLlegada";
			this->tiempoLlegada->Width = 141;
			// 
			// tiempoAtencion
			// 
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->tiempoAtencion->DefaultCellStyle = dataGridViewCellStyle6;
			this->tiempoAtencion->HeaderText = L"Tiempo Promedio Atencion";
			this->tiempoAtencion->Name = L"tiempoAtencion";
			this->tiempoAtencion->Width = 145;
			// 
			// tiempoEspera
			// 
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->tiempoEspera->DefaultCellStyle = dataGridViewCellStyle7;
			this->tiempoEspera->HeaderText = L"Tiempo Promedio Espera";
			this->tiempoEspera->Name = L"tiempoEspera";
			this->tiempoEspera->Width = 137;
			// 
			// numClientes
			// 
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->numClientes->DefaultCellStyle = dataGridViewCellStyle8;
			this->numClientes->HeaderText = L"Total Clientes";
			this->numClientes->Name = L"numClientes";
			this->numClientes->Width = 88;
			// 
			// atendidos
			// 
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->atendidos->DefaultCellStyle = dataGridViewCellStyle9;
			this->atendidos->HeaderText = L"Total Clientes Atendidos";
			this->atendidos->Name = L"atendidos";
			this->atendidos->Width = 133;
			// 
			// picEntrada
			// 
			this->picEntrada->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picEntrada.Image")));
			this->picEntrada->Location = System::Drawing::Point(0, 28);
			this->picEntrada->Name = L"picEntrada";
			this->picEntrada->Size = System::Drawing::Size(100, 50);
			this->picEntrada->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picEntrada->TabIndex = 3;
			this->picEntrada->TabStop = false;
			// 
			// picSalida
			// 
			this->picSalida->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picSalida.Image")));
			this->picSalida->Location = System::Drawing::Point(860, 28);
			this->picSalida->Name = L"picSalida";
			this->picSalida->Size = System::Drawing::Size(100, 50);
			this->picSalida->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picSalida->TabIndex = 2;
			this->picSalida->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->sIMULADORToolStripMenuItem,
					this->eSTADISTICASToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(963, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// sIMULADORToolStripMenuItem
			// 
			this->sIMULADORToolStripMenuItem->Name = L"sIMULADORToolStripMenuItem";
			this->sIMULADORToolStripMenuItem->Size = System::Drawing::Size(88, 20);
			this->sIMULADORToolStripMenuItem->Text = L"SIMULADOR";
			this->sIMULADORToolStripMenuItem->Click += gcnew System::EventHandler(this, &Simulador::sIMULADORToolStripMenuItem_Click);
			// 
			// eSTADISTICASToolStripMenuItem
			// 
			this->eSTADISTICASToolStripMenuItem->Name = L"eSTADISTICASToolStripMenuItem";
			this->eSTADISTICASToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->eSTADISTICASToolStripMenuItem->Text = L"ESTADISTICAS";
			this->eSTADISTICASToolStripMenuItem->Click += gcnew System::EventHandler(this, &Simulador::eSTADISTICASToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label1->Location = System::Drawing::Point(12, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(364, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"SIMULADOR DE ESTRUCTURA DE COLAS";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->numMaxAtencion);
			this->groupBox1->Controls->Add(this->numMaxLlegada);
			this->groupBox1->Controls->Add(this->numMinAtencion);
			this->groupBox1->Controls->Add(this->numMinLlegada);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->groupBox1->Location = System::Drawing::Point(12, 492);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(453, 107);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Configuracion de Clientes";
			// 
			// numMaxAtencion
			// 
			this->numMaxAtencion->Location = System::Drawing::Point(396, 69);
			this->numMaxAtencion->Name = L"numMaxAtencion";
			this->numMaxAtencion->Size = System::Drawing::Size(45, 22);
			this->numMaxAtencion->TabIndex = 7;
			this->numMaxAtencion->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 16, 0, 0, 0 });
			// 
			// numMaxLlegada
			// 
			this->numMaxLlegada->Location = System::Drawing::Point(396, 28);
			this->numMaxLlegada->Name = L"numMaxLlegada";
			this->numMaxLlegada->Size = System::Drawing::Size(45, 22);
			this->numMaxLlegada->TabIndex = 6;
			this->numMaxLlegada->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// numMinAtencion
			// 
			this->numMinAtencion->Location = System::Drawing::Point(175, 69);
			this->numMinAtencion->Name = L"numMinAtencion";
			this->numMinAtencion->Size = System::Drawing::Size(45, 22);
			this->numMinAtencion->TabIndex = 5;
			this->numMinAtencion->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			// 
			// numMinLlegada
			// 
			this->numMinLlegada->Location = System::Drawing::Point(175, 28);
			this->numMinLlegada->Name = L"numMinLlegada";
			this->numMinLlegada->Size = System::Drawing::Size(45, 22);
			this->numMinLlegada->TabIndex = 4;
			this->numMinLlegada->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkBlue;
			this->label5->Location = System::Drawing::Point(225, 73);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(170, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Tiempo Maximo de Atencion:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DarkBlue;
			this->label4->Location = System::Drawing::Point(7, 73);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(167, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Tiempo Minimo de Atencion:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkBlue;
			this->label3->Location = System::Drawing::Point(225, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(165, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Tiempo Maximo de Llegada:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkBlue;
			this->label2->Location = System::Drawing::Point(7, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(162, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Tiempo Minimo de Llegada:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->numMaxCola);
			this->groupBox2->Controls->Add(this->numMinCola);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::Color::RoyalBlue;
			this->groupBox2->Location = System::Drawing::Point(12, 605);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(453, 59);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Configuracion de Cajero";
			// 
			// numMaxCola
			// 
			this->numMaxCola->Location = System::Drawing::Point(396, 28);
			this->numMaxCola->Name = L"numMaxCola";
			this->numMaxCola->Size = System::Drawing::Size(45, 22);
			this->numMaxCola->TabIndex = 6;
			this->numMaxCola->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// numMinCola
			// 
			this->numMinCola->Location = System::Drawing::Point(175, 28);
			this->numMinCola->Name = L"numMinCola";
			this->numMinCola->Size = System::Drawing::Size(45, 22);
			this->numMinCola->TabIndex = 4;
			this->numMinCola->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::DarkBlue;
			this->label10->Location = System::Drawing::Point(225, 32);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(146, 13);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Tiempo Maximo En Cola:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::DarkBlue;
			this->label9->Location = System::Drawing::Point(7, 32);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(143, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Tiempo Minimo En Cola:";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->numCajeros);
			this->groupBox3->Controls->Add(this->numTiempoSimulacion);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->ForeColor = System::Drawing::Color::RoyalBlue;
			this->groupBox3->Location = System::Drawing::Point(471, 492);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(221, 107);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Configuracion de Simulacion";
			// 
			// numCajeros
			// 
			this->numCajeros->Location = System::Drawing::Point(145, 69);
			this->numCajeros->Name = L"numCajeros";
			this->numCajeros->Size = System::Drawing::Size(45, 22);
			this->numCajeros->TabIndex = 5;
			this->numCajeros->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// numTiempoSimulacion
			// 
			this->numTiempoSimulacion->Location = System::Drawing::Point(146, 28);
			this->numTiempoSimulacion->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numTiempoSimulacion->Name = L"numTiempoSimulacion";
			this->numTiempoSimulacion->Size = System::Drawing::Size(65, 22);
			this->numTiempoSimulacion->TabIndex = 4;
			this->numTiempoSimulacion->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 180, 0, 0, 0 });
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DarkBlue;
			this->label7->Location = System::Drawing::Point(7, 73);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(85, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"N° de Cajeros";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::DarkBlue;
			this->label11->Location = System::Drawing::Point(7, 32);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(133, 13);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Tiempo De Simulacion";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(471, 641);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(221, 23);
			this->progressBar1->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DarkBlue;
			this->label6->Location = System::Drawing::Point(515, 625);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(140, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Progreso de Simulacion";
			// 
			// btPlay
			// 
			this->btPlay->BackColor = System::Drawing::Color::Bisque;
			this->btPlay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btPlay->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btPlay->Location = System::Drawing::Point(783, 509);
			this->btPlay->Name = L"btPlay";
			this->btPlay->Size = System::Drawing::Size(108, 43);
			this->btPlay->TabIndex = 10;
			this->btPlay->Text = L"PLAY";
			this->btPlay->UseVisualStyleBackColor = false;
			this->btPlay->Click += gcnew System::EventHandler(this, &Simulador::btPlay_Click);
			// 
			// timerNuevosClientes
			// 
			this->timerNuevosClientes->Interval = 1;
			this->timerNuevosClientes->Tick += gcnew System::EventHandler(this, &Simulador::timerNuevosClientes_Tick);
			// 
			// timerSimulacion
			// 
			this->timerSimulacion->Interval = 1;
			this->timerSimulacion->Tick += gcnew System::EventHandler(this, &Simulador::timerSimulacion_Tick);
			// 
			// timerEstadisticas
			// 
			this->timerEstadisticas->Interval = 1;
			this->timerEstadisticas->Tick += gcnew System::EventHandler(this, &Simulador::timerEstadisticas_Tick);
			// 
			// Simulador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightBlue;
			this->ClientSize = System::Drawing::Size(987, 689);
			this->Controls->Add(this->btPlay);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Simulador";
			this->Text = L"SIMULADOR";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataEstadisticas))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picEntrada))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSalida))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMaxAtencion))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMaxLlegada))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMinAtencion))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMinLlegada))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMaxCola))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMinCola))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCajeros))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTiempoSimulacion))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void dibujarPuertas() {
		//Entrada
		String^ name1 = "Entrada";
		String^ imagen1 = " ";
		imagen1 = "C:/Users/angie/Desktop/ImagenesNodos/ClientesCola/Entrada.png";


		System::Windows::Forms::PictureBox^ Entrada = gcnew PictureBox();
		
		Entrada->Image = Image::FromFile(imagen1);

		Entrada->Location = System::Drawing::Point(0, 28);

		Entrada->Name = name1;
		Entrada->Size = System::Drawing::Size(100, 50);
		Entrada->TabIndex = 3;
		Entrada->TabStop = false;
		Entrada->Visible = true;


		//Salida 
		String^ name2 = "Salida";
		String^ imagen2 = " ";
		imagen2 = "C:/Users/angie/Desktop/ImagenesNodos/ClientesCola/Salida.png";


		System::Windows::Forms::PictureBox^ Salida = gcnew PictureBox();

		Salida->Image = Image::FromFile(imagen2);

		Salida->Location = System::Drawing::Point(860, 28);

		Salida->Name = name2;
		Salida->Size = System::Drawing::Size(100, 50);
		Salida->TabIndex = 3;
		Salida->TabStop = false;
		Salida->Visible = true;


		panel1->Controls->Add(Entrada);
		panel1->Controls->Add(Salida);
	}
		   int totalClientesAtendios = 0;
	private: void dibujarServer() {
		int numeroServer = 0;
		int YUltimoServer = 17;
		int sumaAtendidos = 0;

		actualizarEstadoServer();

		for (int i = 1; i < Servidores->Servidores.size(); i++) {
			String^ name = "Server" + numeroServer;

			sumaAtendidos += Servidores->Servidores[i]->getClientesAtendidos();

			System::Windows::Forms::TextBox^ Server = gcnew TextBox();
			System::Windows::Forms::Label^ LbServer = gcnew Label();
			Server->Name = name;

			if(Servidores->Servidores[i]->getEstado() == "ABIERTO")
				Server->BackColor = System::Drawing::Color::Green;
			else if (Servidores->Servidores[i]->getEstado() == "SATURADO")
				Server->BackColor = System::Drawing::Color::Yellow;
			else if (Servidores->Servidores[i]->getEstado() == "CERRANDO")
				Server->BackColor = System::Drawing::Color::Orange;
			else if (Servidores->Servidores[i]->getEstado() == "CERRADO")
				Server->BackColor = System::Drawing::Color::Red;


			Server->Enabled = false;
			Server->Location = System::Drawing::Point(574, YUltimoServer);
			Server->Size = System::Drawing::Size(29, 20);
			Server->TabIndex = 1;

			LbServer->Parent = Server;
			LbServer->Location = System::Drawing::Point(14.5, 10);
			LbServer->BackColor = Color().Transparent;
			LbServer->ForeColor = Color().MidnightBlue;
			LbServer->Size = System::Drawing::Size(29, 20);
			LbServer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			LbServer->Text = Servidores->getTiempoPromedioCola() + "";

			numeroServer++;
			YUltimoServer += 63;

			panel1->Controls->Add(Server);
		}

		totalClientesAtendios = sumaAtendidos;
	}

	private: void dibujarCliente(float _time) {
		int numeroCliente = 0;
		dibujarPuertas();
		for (int i = 0; i < idColas->getColas().size(); i++) {

			Cola* colaActual = idColas->getColas()[i];
			NodoCola* actual = colaActual->front();

			do {
				if (actual->getX() > 574) {
					Servidores->Servidores[i]->actualizarClientesAtendidos();
				}

				colaActual->movimientoClientes(_time);
				if (actual->getX() >= 956) {
					idColas->pop_front();
				}
				else {
					String^ name = "Cliente" + numeroCliente;
					String^ imagen = " ";
					imagen = imagenCliente(actual->getEstado());
					numeroCliente++;

					System::Windows::Forms::PictureBox^ Cliente = gcnew PictureBox();
					System::Windows::Forms::Label^ LbCliente = gcnew Label();

					Cliente->Image = Image::FromFile(imagen);

					if (actual->getX() >= 668)
						colaActual->pop_front();
					else {
						Cliente->Location = System::Drawing::Point(actual->getX(), actual->getY());

						Cliente->Name = name;
						Cliente->Size = System::Drawing::Size(25, 25);
						Cliente->TabIndex = 3;
						Cliente->TabStop = false;
						Cliente->Visible = true;


						LbCliente->Parent = Cliente;
						LbCliente->Location = System::Drawing::Point(6, 4);
						LbCliente->BackColor = Color().Transparent;
						LbCliente->ForeColor = Color().White;
						LbCliente->Size = System::Drawing::Size(25, 25);
						LbCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
							static_cast<System::Byte>(0)));

						if (actual->getEstado() == "EN COLA")
							LbCliente->Text = (int)actual->getTiempoCola() + "";
						else if (actual->getEstado() == "EN CAJA")
							LbCliente->Text = (int)actual->getTiempoCaja() + "";
						else
							LbCliente->Text = " ";

						numeroCliente++;
						panel1->Controls->Add(Cliente);

						actual = actual->getSiguiente();
					}
				}
			} while (actual != colaActual->front());
		}
	}

		   int totalCajasAbiertas = 0;
		   int totalCajasCerradas = 0;
	private: void actualizarEstadoServer() {
		int sumaAbiertas = 0;
		int sumaCerrdas = 0;
		for (int i = 1; i < Servidores->Servidores.size(); i++) {
			Servidores->Servidores[i]->actualizarLongCola();

			if (Servidores->Servidores[i]->getLongCola() >= 15) {
				Servidores->Servidores[i]->actualizarEstado("SATURADO");
				sumaAbiertas++;
			}
			else if (Servidores->Servidores[i]->getLongCola() < 15) {
				Servidores->Servidores[i]->actualizarEstado("ABIERTO");
				sumaAbiertas++;
			}
			else if (Servidores->Servidores[i]->getLongCola() == 1) {
				Servidores->Servidores[i]->actualizarEstado("CERRANDO");
				sumaAbiertas++;
			}
			else if (Servidores->Servidores[i]->getLongCola() <= 0) {
				Servidores->Servidores[i]->actualizarEstado("CERRADO");
				sumaCerrdas++;
			}

		}

		totalCajasAbiertas = sumaAbiertas;
		totalCajasCerradas = sumaCerrdas;
	}

	private: String^ imagenCliente(string estado) {
		String^ imagen = " ";
		if (estado == "ENTRANDO") {
			imagen = "C:/Users/angie/Desktop/ImagenesNodos/ClientesCola/Llegando.png";
		}
		else if (estado == "EN COLA") {
			imagen = "C:/Users/angie/Desktop/ImagenesNodos/ClientesCola/EnCola.png";
		}
		else if (estado == "EN CAJA") {
			imagen = "C:/Users/angie/Desktop/ImagenesNodos/ClientesCola/SiendoAtendido.png";
		}
		else if (estado == "SALIENDO") {
			imagen = "C:/Users/angie/Desktop/ImagenesNodos/ClientesCola/Saliendo.png";
		}
		return imagen;
	}

	private: Cola* mejorCola() {
		Cola* mejorCola = idColas->getColas().front();

		if (idColas->getColas().size() != 0) {
			for (int i = 1; i < idColas->getColas().size(); i++) {
				vector<Cola*> aux = idColas->getColas();

				if (mejorCola->size() > aux.size())
					mejorCola = aux[i];
			}
		}
		return mejorCola;
	}

	private: void crearCajeros() {
		int numeroCajeros = (int)numCajeros->Value;
		for (int i = 0; i < numeroCajeros; i++) {
			Cola* nuevaCola = new Cola();
			Server* nuevo = new Server(nuevaCola);
		}
	}

	private: void nuevosCientes(float _time) {
		Cola* fila = mejorCola();
		fila->push_back(_time);
	}

	private: System::Void btPlay_Click(System::Object^ sender, System::EventArgs^ e) {

		timerNuevosClientes->Start();
		timerSimulacion->Start();
	}


		   int tiempoNuevosClientes = 0;
		   float tiempoCreacion = 0;
		   bool clienteCreado = true;

private: System::Void timerNuevosClientes_Tick(System::Object^ sender, System::EventArgs^ e) {
	std::chrono::steady_clock::time_point start;
	std::chrono::steady_clock::time_point end;
	start = std::chrono::steady_clock::now();

	if (clienteCreado == true) {
		int Hasta = (int)numMaxLlegada->Value;
		int Desde = (int)numMinLlegada->Value;

		srand(time(NULL));

		tiempoCreacion = rand();

		tiempoCreacion = rand() % (Hasta - Desde + 1) + Desde;
	}

	if (tiempoNuevosClientes >= tiempoCreacion) {
		int Hasta = (int)numMaxAtencion->Value;
		int Desde = (int)numMinAtencion->Value;

		srand(time(NULL));

		int timeAtencion = rand();

		timeAtencion = rand() % (Hasta - Desde + 1) + Desde;
		nuevosCientes(timeAtencion);
	}

	panel1->Controls->Clear();
	dibujarPuertas();
	crearCajeros();
	end = std::chrono::steady_clock::now();
	std::chrono::duration<float> duration = end - start;
	dibujarCliente(duration.count());

	tiempoNuevosClientes = duration.count();

	

	cout << "\n\nTiempo de Ejecucion: " << duration.count();
}

	   float tiempoSimulacion = 0;
private: System::Void timerSimulacion_Tick(System::Object^ sender, System::EventArgs^ e) {
	std::chrono::steady_clock::time_point start;
	std::chrono::steady_clock::time_point end;
	start = std::chrono::steady_clock::now();

	if(tiempoSimulacion > (int)numTiempoSimulacion->Value){
		timerNuevosClientes->Stop();
		timerSimulacion->Stop();
	}
	
}
	float promedioTiempoCaja = 0;
	float promedioTiempoCola = 0;
	int totalClientes = 0;

	private: Void promedios() {
		int sumaTiempoCaja = 0;
		int sumaTiempoCola = 0;
		int sumaClientes = 0;
		for (int i = 1; i < idColas->getColas().size(); i++) {
			vector<Cola*> aux = idColas->getColas();
			sumaTiempoCaja += aux[i]->promedioTiempoCaja();
			sumaTiempoCola += aux[i]->promedioTiempoCola();
			sumaClientes += aux[i]->totalClientes();
		}

		promedioTiempoCaja = (sumaTiempoCaja / (idColas->getColas().size() - 1));
		promedioTiempoCola = (sumaTiempoCola / (idColas->getColas().size() - 1));
		totalClientes = sumaClientes;
	}


private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}
private: System::Void eSTADISTICASToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataEstadisticas->Visible = true;
}
private: System::Void sIMULADORToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataEstadisticas->Visible = false;
}
private: System::Void timerEstadisticas_Tick(System::Object^ sender, System::EventArgs^ e) {
	promedios();
	
	dataEstadisticas->Rows->Add(tiempoSimulacion,totalCajasAbiertas,totalCajasCerradas,tiempoCreacion,promedioTiempoCaja,promedioTiempoCola,totalClientes,totalClientesAtendios);

}
};
}
