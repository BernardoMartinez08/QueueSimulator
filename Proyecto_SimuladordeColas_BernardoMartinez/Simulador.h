#pragma once
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include "Cola.h"
#include "Server.h"
#include <chrono>
#include <fstream>
#include <string>
#include <list>
#include <msclr\marshal_cppstd.h>
#include <cliext/vector>
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
	/// 


	public ref class Simulador : public System::Windows::Forms::Form
	{
		Cola* idColas = new Cola();
		Server* Servidores = new Server();
		
	private: System::Windows::Forms::Timer^ timerNuevosClientes;
	private: System::Windows::Forms::DataGridView^ dataEstadisticas;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ sIMULADORToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eSTADISTICASToolStripMenuItem;








	private: System::Windows::Forms::Button^ btGuardar;
	private: System::Windows::Forms::TextBox^ txtNameDoc;
	private: System::Windows::Forms::Label^ lbNameDoc;

	private: System::Windows::Forms::Label^ lbFinal;
	private: System::Windows::Forms::Button^ btPause;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ tiempoSimu;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cajasAbiertas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cajaCerrada;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ tiempoLlegada;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ tiempoAtencion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TiempoCola;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ numClientes;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ atendidos;









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
	private: System::Windows::Forms::ProgressBar^ pbSimulation;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Simulador::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->picEntrada = (gcnew System::Windows::Forms::PictureBox());
			this->picSalida = (gcnew System::Windows::Forms::PictureBox());
			this->dataEstadisticas = (gcnew System::Windows::Forms::DataGridView());
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
			this->pbSimulation = (gcnew System::Windows::Forms::ProgressBar());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btPlay = (gcnew System::Windows::Forms::Button());
			this->timerNuevosClientes = (gcnew System::Windows::Forms::Timer(this->components));
			this->btGuardar = (gcnew System::Windows::Forms::Button());
			this->txtNameDoc = (gcnew System::Windows::Forms::TextBox());
			this->lbNameDoc = (gcnew System::Windows::Forms::Label());
			this->lbFinal = (gcnew System::Windows::Forms::Label());
			this->btPause = (gcnew System::Windows::Forms::Button());
			this->tiempoSimu = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cajasAbiertas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cajaCerrada = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tiempoLlegada = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tiempoAtencion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TiempoCola = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->numClientes = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->atendidos = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picEntrada))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSalida))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataEstadisticas))->BeginInit();
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
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(12, 57);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(962, 429);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Simulador::panel1_Paint);
			// 
			// picEntrada
			// 
			this->picEntrada->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picEntrada.Image")));
			this->picEntrada->Location = System::Drawing::Point(12, 65);
			this->picEntrada->Name = L"picEntrada";
			this->picEntrada->Size = System::Drawing::Size(100, 50);
			this->picEntrada->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picEntrada->TabIndex = 3;
			this->picEntrada->TabStop = false;
			// 
			// picSalida
			// 
			this->picSalida->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picSalida.Image")));
			this->picSalida->Location = System::Drawing::Point(875, 65);
			this->picSalida->Name = L"picSalida";
			this->picSalida->Size = System::Drawing::Size(100, 50);
			this->picSalida->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picSalida->TabIndex = 2;
			this->picSalida->TabStop = false;
			// 
			// dataEstadisticas
			// 
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
					this->cajasAbiertas, this->cajaCerrada, this->tiempoLlegada, this->tiempoAtencion, this->TiempoCola, this->numClientes, this->atendidos
			});
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle9->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataEstadisticas->DefaultCellStyle = dataGridViewCellStyle9;
			this->dataEstadisticas->EnableHeadersVisualStyles = false;
			this->dataEstadisticas->Location = System::Drawing::Point(12, 57);
			this->dataEstadisticas->Name = L"dataEstadisticas";
			this->dataEstadisticas->ReadOnly = true;
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle10->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataEstadisticas->RowHeadersDefaultCellStyle = dataGridViewCellStyle10;
			dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataEstadisticas->RowsDefaultCellStyle = dataGridViewCellStyle11;
			this->dataEstadisticas->Size = System::Drawing::Size(958, 428);
			this->dataEstadisticas->TabIndex = 5;
			this->dataEstadisticas->Visible = false;
			this->dataEstadisticas->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Simulador::dataGridView1_CellContentClick);
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
			this->menuStrip1->Size = System::Drawing::Size(986, 24);
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
			this->label1->Location = System::Drawing::Point(12, 24);
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
			this->groupBox1->Location = System::Drawing::Point(12, 500);
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
			this->groupBox2->Location = System::Drawing::Point(12, 613);
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
			this->groupBox3->Location = System::Drawing::Point(471, 500);
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
			// pbSimulation
			// 
			this->pbSimulation->Location = System::Drawing::Point(471, 649);
			this->pbSimulation->Name = L"pbSimulation";
			this->pbSimulation->Size = System::Drawing::Size(221, 23);
			this->pbSimulation->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DarkBlue;
			this->label6->Location = System::Drawing::Point(515, 633);
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
			this->btPlay->Location = System::Drawing::Point(795, 502);
			this->btPlay->Name = L"btPlay";
			this->btPlay->Size = System::Drawing::Size(108, 43);
			this->btPlay->TabIndex = 10;
			this->btPlay->Text = L"PLAY";
			this->btPlay->UseVisualStyleBackColor = false;
			this->btPlay->Click += gcnew System::EventHandler(this, &Simulador::btPlay_Click);
			// 
			// timerNuevosClientes
			// 
			this->timerNuevosClientes->Tick += gcnew System::EventHandler(this, &Simulador::timerNuevosClientes_Tick);
			// 
			// btGuardar
			// 
			this->btGuardar->BackColor = System::Drawing::Color::White;
			this->btGuardar->Enabled = false;
			this->btGuardar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btGuardar->ForeColor = System::Drawing::Color::Blue;
			this->btGuardar->Location = System::Drawing::Point(771, 645);
			this->btGuardar->Name = L"btGuardar";
			this->btGuardar->Size = System::Drawing::Size(169, 27);
			this->btGuardar->TabIndex = 11;
			this->btGuardar->Text = L"GUARDAR ESTADISTICAS";
			this->btGuardar->UseVisualStyleBackColor = false;
			this->btGuardar->Visible = false;
			this->btGuardar->Click += gcnew System::EventHandler(this, &Simulador::btGuardar_Click);
			// 
			// txtNameDoc
			// 
			this->txtNameDoc->Enabled = false;
			this->txtNameDoc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNameDoc->Location = System::Drawing::Point(771, 601);
			this->txtNameDoc->Name = L"txtNameDoc";
			this->txtNameDoc->Size = System::Drawing::Size(169, 21);
			this->txtNameDoc->TabIndex = 12;
			this->txtNameDoc->Text = L"Estadistics";
			this->txtNameDoc->Visible = false;
			this->txtNameDoc->TextChanged += gcnew System::EventHandler(this, &Simulador::txtNameDoc_TextChanged);
			// 
			// lbNameDoc
			// 
			this->lbNameDoc->AutoSize = true;
			this->lbNameDoc->Location = System::Drawing::Point(792, 625);
			this->lbNameDoc->Name = L"lbNameDoc";
			this->lbNameDoc->Size = System::Drawing::Size(148, 13);
			this->lbNameDoc->TabIndex = 13;
			this->lbNameDoc->Text = L"escribe el nombre del archivo.";
			this->lbNameDoc->Visible = false;
			// 
			// lbFinal
			// 
			this->lbFinal->AutoSize = true;
			this->lbFinal->ForeColor = System::Drawing::Color::Maroon;
			this->lbFinal->Location = System::Drawing::Point(545, 675);
			this->lbFinal->Name = L"lbFinal";
			this->lbFinal->Size = System::Drawing::Size(70, 13);
			this->lbFinal->TabIndex = 15;
			this->lbFinal->Text = L"FINALIZADO";
			this->lbFinal->Visible = false;
			// 
			// btPause
			// 
			this->btPause->BackColor = System::Drawing::Color::Salmon;
			this->btPause->Enabled = false;
			this->btPause->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btPause->ForeColor = System::Drawing::Color::Red;
			this->btPause->Location = System::Drawing::Point(795, 548);
			this->btPause->Name = L"btPause";
			this->btPause->Size = System::Drawing::Size(108, 26);
			this->btPause->TabIndex = 16;
			this->btPause->Text = L"PAUSE";
			this->btPause->UseVisualStyleBackColor = false;
			this->btPause->Click += gcnew System::EventHandler(this, &Simulador::btPause_Click);
			// 
			// tiempoSimu
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->tiempoSimu->DefaultCellStyle = dataGridViewCellStyle2;
			this->tiempoSimu->HeaderText = L"Tiempo Simulacion";
			this->tiempoSimu->Name = L"tiempoSimu";
			this->tiempoSimu->ReadOnly = true;
			this->tiempoSimu->Width = 111;
			// 
			// cajasAbiertas
			// 
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->cajasAbiertas->DefaultCellStyle = dataGridViewCellStyle3;
			this->cajasAbiertas->HeaderText = L"Cajas Abiertas";
			this->cajasAbiertas->Name = L"cajasAbiertas";
			this->cajasAbiertas->ReadOnly = true;
			this->cajasAbiertas->Width = 91;
			// 
			// cajaCerrada
			// 
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->cajaCerrada->DefaultCellStyle = dataGridViewCellStyle4;
			this->cajaCerrada->HeaderText = L"Cajas Cerradas";
			this->cajaCerrada->Name = L"cajaCerrada";
			this->cajaCerrada->ReadOnly = true;
			this->cajaCerrada->Width = 95;
			// 
			// tiempoLlegada
			// 
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->tiempoLlegada->DefaultCellStyle = dataGridViewCellStyle5;
			this->tiempoLlegada->HeaderText = L"Tiempo Promedio Llegada";
			this->tiempoLlegada->Name = L"tiempoLlegada";
			this->tiempoLlegada->ReadOnly = true;
			this->tiempoLlegada->Width = 141;
			// 
			// tiempoAtencion
			// 
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->tiempoAtencion->DefaultCellStyle = dataGridViewCellStyle6;
			this->tiempoAtencion->HeaderText = L"Tiempo Promedio Atencion";
			this->tiempoAtencion->Name = L"tiempoAtencion";
			this->tiempoAtencion->ReadOnly = true;
			this->tiempoAtencion->Width = 145;
			// 
			// TiempoCola
			// 
			this->TiempoCola->HeaderText = L"Tiempo Promedio en Cola";
			this->TiempoCola->Name = L"TiempoCola";
			this->TiempoCola->ReadOnly = true;
			this->TiempoCola->Width = 121;
			// 
			// numClientes
			// 
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->numClientes->DefaultCellStyle = dataGridViewCellStyle7;
			this->numClientes->HeaderText = L"Total Clientes";
			this->numClientes->Name = L"numClientes";
			this->numClientes->ReadOnly = true;
			this->numClientes->Width = 88;
			// 
			// atendidos
			// 
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->atendidos->DefaultCellStyle = dataGridViewCellStyle8;
			this->atendidos->HeaderText = L"Total Clientes Atendidos";
			this->atendidos->Name = L"atendidos";
			this->atendidos->ReadOnly = true;
			this->atendidos->Width = 133;
			// 
			// Simulador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightBlue;
			this->ClientSize = System::Drawing::Size(986, 701);
			this->Controls->Add(this->btPause);
			this->Controls->Add(this->lbFinal);
			this->Controls->Add(this->dataEstadisticas);
			this->Controls->Add(this->lbNameDoc);
			this->Controls->Add(this->txtNameDoc);
			this->Controls->Add(this->btGuardar);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->btPlay);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pbSimulation);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->picEntrada);
			this->Controls->Add(this->picSalida);
			this->Controls->Add(this->panel1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Simulador";
			this->Text = L"SIMULADOR";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Simulador::Simulador_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Simulador::Simulador_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picEntrada))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSalida))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataEstadisticas))->EndInit();
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
	//Atributos de clase
		int totalCajasAbiertas = 0;
		int totalCajasCerradas = 0;
		int tiempoNuevosClientes = 0;
		float tiempoCreacion = 0;
		bool clienteCreado = true;
		float tiempoSimulacion = 0;
		float promedioTiempoCaja = 0;
		float promedioTiempoCola = 0;
		int totalClientes = 0;
		int totalClientesAtendios = 0;
		int tiempoCajaAux = 0;

		//cliext::vector<PictureBox^> Pictures;
		cliext::vector<PictureBox^> ColasImagenes;
		cliext::vector<Label^> ColasLabel;
		cliext::vector<TextBox^> ServidoresVector;

	//Funcion Dibujar Cajeros
	private: void dibujarServer() {
		int numeroServer = 0;
		int YUltimoServer = 27;
		int sumaAtendidos = 0;

		actualizarEstadoServer();
		for (int i = 0; i < Servidores->getServers().size(); i++) {
			String^ name = "Server" + numeroServer;
			sumaAtendidos += Servidores->getServers()[i]->getClientesAtendidos();

			System::Windows::Forms::TextBox^ Server = gcnew TextBox();
			Server->Name = name;

			if (Servidores->getServers()[i]->getEstado() == "ABIERTO") {
				Server->BackColor = System::Drawing::Color::Green;
			}
			else if (Servidores->getServers()[i]->getEstado() == "SATURADO") {
				Server->BackColor = System::Drawing::Color::Yellow;
			}
			else if (Servidores->getServers()[i]->getEstado() == "CERRANDO") {
				Server->BackColor = System::Drawing::Color::Orange;
			}
			else if (Servidores->getServers()[i]->getEstado() == "CERRADO"){
				Server->BackColor = System::Drawing::Color::Red;
			}
			


			Server->ReadOnly = true;
			Server->Location = System::Drawing::Point(574, YUltimoServer);
			Server->Size = System::Drawing::Size(29, 20);
			Server->TabIndex = 1;
			Server->Text = Servidores->getServers()[i]->getCola()->getAuxTiempoAtencion() + "";
			Server->ForeColor = Color::White;

			numeroServer++;
			YUltimoServer += 63;
			panel1->Controls->Add(Server);
		}

		totalClientesAtendios = sumaAtendidos;
	}



	private: void movimeintoClientes() {
		for (int i = 0; i < idColas->getColas().size(); i++) {
			Cola* colaActual = idColas->getColas()[i];
			NodoCola* actual = colaActual->front();

			while (actual != nullptr) {
				if (actual != nullptr) {
					colaActual->movimientoClientes();
					String^ imagen = imagenCliente(actual->getEstado());

					//cout << "tamanio: " << ColasImagenes.size() << " Posicion imagen: "<< actual->getNumeroImagen() << endl;
					System::Windows::Forms::PictureBox^ Cliente = ColasImagenes[(actual->getNumeroImagen())];

					System::Windows::Forms::Label^ LbCliente = ColasLabel[(actual->getNumeroImagen())];

					Cliente->Image = Image::FromFile(imagen);
					Cliente->Location = System::Drawing::Point(actual->getX(), actual->getY());

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
						Cliente->Text = " ";

					//Cliente->Controls->Clear();
					//Cliente->Controls->Add(LbCliente);
					if (actual->getX() > 574 && actual->getX() < 577) {
						Servidores->getServers()[i]->actualizarClientesAtendidos();
						colaActual->putOnCeroTiempoAtencion();
					}

					if (actual->getX() == 574) {
						if (millisegundos == 1000) {
							colaActual->setAuxTiempoAtencion(1);
						}
					}

					if (actual->getX() >= 956) {
						auto itPos = ColasImagenes.begin() + actual->getNumeroImagen();
						ColasImagenes.erase(itPos);
						idColas->pop_front();
					}
				}
				actual = actual->getSiguiente();
			}
		}
	}


		   int numeroCliente = 0;
	//Funcion Dibujar Clientes
	private: void dibujarCliente(NodoCola* actual) {
		
		String^ name = "Cliente" + numeroCliente;
		String^ imagen = " ";
		imagen = imagenCliente(actual->getEstado());
		numeroCliente++;

		System::Windows::Forms::PictureBox^ Cliente = gcnew PictureBox();
		System::Windows::Forms::Label^ LbCliente = gcnew Label();

		Cliente->Image = Image::FromFile(imagen);

		if (actual != nullptr) {
			Cliente->Location = System::Drawing::Point(actual->getX(), actual->getY());

			Cliente->Name = name;
			Cliente->Size = System::Drawing::Size(25, 25);
			Cliente->TabIndex = 3;
			Cliente->TabStop = false;
			Cliente->Visible = true;
			Cliente->BackColor = Color::Transparent;
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


			numeroCliente++;
			actual->setNumeroImagen(ColasImagenes.size());
			ColasImagenes.push_back(Cliente);
			ColasLabel.push_back(LbCliente);

			panel1->Controls->Add(Cliente);

		}
	}
	
	








	//Funcion Actualizar Estado de Servidores
	private: void actualizarEstadoServer() {
		int sumaAbiertas = 0;
		int sumaCerrdas = 0;
		for (int i = 0; i < Servidores->getServers().size(); i++) {
			Servidores->getServers()[i]->actualizarLongCola();

			if (Servidores->getServers()[i]->getLongCola() >= 15) {
				Servidores->getServers()[i]->actualizarEstado("SATURADO");
				sumaAbiertas++;
			}
			else if (Servidores->getServers()[i]->getLongCola() < 15 && Servidores->getServers()[i]->getLongCola() >= 1) {
				Servidores->getServers()[i]->actualizarEstado("ABIERTO");
				sumaAbiertas++;
			}
			else if (Servidores->getServers()[i]->getLongCola() == 1) {
				Servidores->getServers()[i]->actualizarEstado("CERRANDO");
				sumaAbiertas++;
			}
			else if (Servidores->getServers()[i]->getLongCola() <= 0) {
				Servidores->getServers()[i]->actualizarEstado("CERRADO");
				sumaCerrdas++;
			}

		}

		totalCajasAbiertas = sumaAbiertas;
		totalCajasCerradas = sumaCerrdas;
	}







	//Funcion para seleccionar la imagen del Cliente
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







	//Funcion que busca la mejor cola
	private: Cola* mejorCola() {
		Cola* mejorCola;

		for (int i = 1; i < idColas->getColas().size(); i++) {
			vector<Cola*> aux = idColas->getColas();

			if(i == 1)
				mejorCola = aux[i];
			else if (mejorCola->size() > aux[i]->size())
				mejorCola = aux[i];
		}
	
		return mejorCola;
	}




	private: void vaciarColas() {
		Cola* actual;

		for (int i = 1; i < idColas->getColas().size(); i++) {
			vector<Cola*> aux = idColas->getColas();

			for (int i = 0; i < aux.size(); i++) {
				aux[i]->clear();
			}

		}
		idColas->getColas().clear();
	}











	//Funcion que crea los cajeros con la funcion Cola
	private: void crearCajeros() {
		int numeroCajeros = (int)numCajeros->Value;
		if(idColas->getColas().size() < numeroCajeros){
			for (int i = idColas->getColas().size(); i <= numeroCajeros; i++) {
				Cola* nuevaCola = new Cola();
				Server* nuevo = new Server(nuevaCola);
			}
		}
	}





	
	//Funcion para crear nuesvo clientes
	private: void nuevosCientes(float _time) {
		Cola* fila = mejorCola();
		fila->push_back(_time);
		dibujarCliente(fila->back());
	}





	//Boton de Play
	private: System::Void btPlay_Click(System::Object^ sender, System::EventArgs^ e) {
		txtNameDoc->Visible = false;
		lbNameDoc->Visible = false;
		btGuardar->Visible = false;

		txtNameDoc->Enabled = false;
		lbNameDoc->Enabled = false;
		btGuardar->Enabled = false;


		pbSimulation->Value = 0;
		totalCajasAbiertas = 0;
		totalCajasCerradas = 0;
		tiempoNuevosClientes = 0;
		tiempoCreacion = 0;
		clienteCreado = true;
		tiempoSimulacion = 0;
		promedioTiempoCaja = 0;
		promedioTiempoCola = 0;
		totalClientes = 0;
		totalClientesAtendios = 0;
		tiempoCajaAux = 0;
		resume = false;
		numeroCliente = 0;

		dataEstadisticas->Controls->Clear();
		panel1->Controls->Clear();
		vaciarColas();
		int tiempoCajaAux = 0;

		ColasImagenes.clear();
		btPlay->Enabled = false;
		btPause->Enabled = true;
		timerNuevosClientes->Start();
	}





	//Timer para los nuevos clientes
		   int millisegundos = 0;
	private: System::Void timerNuevosClientes_Tick(System::Object^ sender, System::EventArgs^ e) {
		std::chrono::steady_clock::time_point start;
		std::chrono::steady_clock::time_point end;
		start = std::chrono::steady_clock::now();
		millisegundos += 150.2;
	
	

		if (clienteCreado == true) {
			int Hasta = (int)numMaxLlegada->Value;
			int Desde = (int)numMinLlegada->Value;

			srand(time(NULL));

			tiempoCreacion = rand();

			tiempoCreacion = rand() % (Hasta - Desde + 1) + Desde;
			clienteCreado = false;
		}

		if (tiempoNuevosClientes == tiempoCreacion) {
			int Hasta = (int)numMaxAtencion->Value;
			int Desde = (int)numMinAtencion->Value;

			srand(time(NULL));

			int timeAtencion = rand();

			timeAtencion = rand() % (Hasta - Desde + 1) + Desde;
			nuevosCientes(timeAtencion);
			clienteCreado = true;
			tiempoNuevosClientes = 0;
		}

		dibujarServer();
		crearCajeros();
		if(totalClientes > 0)
			movimeintoClientes();
	
		if (millisegundos >= 1000) {
			promedios();
			dataEstadisticas->Rows->Insert(0,(int)tiempoSimulacion, totalCajasAbiertas, totalCajasCerradas, tiempoCreacion, (int)promedioTiempoCaja, (int)promedioTiempoCola, totalClientes, totalClientesAtendios);
			millisegundos = 0;
			//int increment = ((int)numTiempoSimulacion->Value)/100;
			pbSimulation->Maximum = (int)numTiempoSimulacion->Value;
			tiempoNuevosClientes++;
			int increment = (1);
			pbSimulation->Increment(increment);
		}
		
		end = std::chrono::steady_clock::now();

		std::chrono::duration<float> duration = end - start;


		end = std::chrono::steady_clock::now();

		duration = end - start;
		tiempoSimulacion += (duration.count()+0.1);
	
		if (tiempoSimulacion > (int)numTiempoSimulacion->Value) {
			txtNameDoc->Visible = true;
			lbNameDoc->Visible = true;
			btGuardar->Visible = true;

			txtNameDoc->Enabled = true;
			lbNameDoc->Enabled = true;
			btGuardar->Enabled = true;
			lbFinal->Visible = true;
			btPlay->Enabled = true;
			btPlay->Text = "AGAIN";
			timerNuevosClientes->Stop();
		}

	    //cout << "\n\nTiempo de Ejecucion: " << (int)tiempoSimulacion << "\nMilisegundos: " << millisegundos;
	}









	//Funcion que calcula los promedios a mostrar en las estadisticas
	private: void promedios() {
		int sumaTiempoCaja = 0;
		int sumaTiempoCola = 0;
		int sumaClientes = 0;
		for (int i = 0; i < idColas->getColas().size(); i++) {
			vector<Cola*> aux = idColas->getColas();
			sumaTiempoCaja += aux[i]->promedioTiempoCaja();
			sumaTiempoCola += aux[i]->promedioTiempoCola();
			sumaClientes += aux[i]->totalClientes();
		}

		promedioTiempoCaja = (sumaTiempoCaja / (idColas->getColas().size()));
		promedioTiempoCola = (sumaTiempoCola / (idColas->getColas().size()));
		totalClientes = sumaClientes;
	}

	

	private: void guardarDatos() {
		String^ name = txtNameDoc->Text->ToString() + ".txt";
		string nombre;
		if(name != "")
			nombre = msclr::interop::marshal_as<std::string>(name);
		else
			nombre = "estadisticas.txt";

		ofstream archivoEstadisticas(nombre);

		if (!archivoEstadisticas) {
			return;
		}

		string Lines = "SimulacionCajeros\t\tTiempo Promedios\t\tTotal Clientes\nTiempo\tAbiertos\tCerrados\tLlegada\tAtencion\tEspera\tTotal\tAtendidos\n";
		archivoEstadisticas << Lines;
		for (int i = 0; i < dataEstadisticas->Rows->Count -1; i++) {
			Lines = msclr::interop::marshal_as<std::string>(dataEstadisticas->Rows[i]->Cells[0]->Value->ToString() + "\t" + dataEstadisticas->Rows[i]->Cells[1]->Value->ToString() + "\t"
				+ dataEstadisticas->Rows[i]->Cells[2]->Value->ToString() + "\t" + dataEstadisticas->Rows[i]->Cells[3]->Value->ToString() + "\t"
				+ dataEstadisticas->Rows[i]->Cells[4]->Value->ToString() + "\t" + dataEstadisticas->Rows[i]->Cells[5]->Value->ToString() + "\t"
				+ dataEstadisticas->Rows[i]->Cells[6]->Value->ToString() + "\t" + dataEstadisticas->Rows[i]->Cells[7]->Value->ToString() + "\t");
				
			archivoEstadisticas << Lines << "\n";
		}

		archivoEstadisticas.close();

	}



	
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}
	private: System::Void eSTADISTICASToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		dataEstadisticas->Visible = true;

		if (tiempoSimulacion > (int)numTiempoSimulacion->Value) {
			txtNameDoc->Visible = true;
			lbNameDoc->Visible = true;
			btGuardar->Visible = true;

			txtNameDoc->Enabled = true;
			lbNameDoc->Enabled = true;
			btGuardar->Enabled = true;
		}
	}
	private: System::Void sIMULADORToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		dataEstadisticas->Visible = false;
		txtNameDoc->Visible = false;
		lbNameDoc->Visible = false;
		btGuardar->Visible = false;

		txtNameDoc->Enabled = false;
		lbNameDoc->Enabled = false;
		btGuardar->Enabled = false;
	}
	private: System::Void Simulador_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Simulador_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		timerNuevosClientes->Enabled = false;
	}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void txtNameDoc_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
	guardarDatos();
	btGuardar->Enabled = false;
}

	   bool resume = false;
private: System::Void btPause_Click(System::Object^ sender, System::EventArgs^ e) {
	if (resume == false) {
		timerNuevosClientes->Stop();
		txtNameDoc->Visible = true;
		lbNameDoc->Visible = true;
		btGuardar->Visible = true;

		txtNameDoc->Enabled = true;
		lbNameDoc->Enabled = true;
		btGuardar->Enabled = true;

		btPause->Text = "RESUME";
		resume = true;
	}else if (resume == true) {
		timerNuevosClientes->Start();
		txtNameDoc->Visible = false;
		lbNameDoc->Visible = false;
		btGuardar->Visible = false;

		txtNameDoc->Enabled = false;
		lbNameDoc->Enabled = false;
		btGuardar->Enabled = false;

		btPause->Text = "PAUSE";
		resume = false;
	}
}
};
}
