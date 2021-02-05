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
	private: System::Windows::Forms::TextBox^ txtServer;
	private: System::Windows::Forms::TextBox^ txtCliente;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Simulador::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->txtServer = (gcnew System::Windows::Forms::TextBox());
			this->picEntrada = (gcnew System::Windows::Forms::PictureBox());
			this->picSalida = (gcnew System::Windows::Forms::PictureBox());
			this->txtCliente = (gcnew System::Windows::Forms::TextBox());
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
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picEntrada))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSalida))->BeginInit();
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
			this->panel1->Controls->Add(this->txtServer);
			this->panel1->Controls->Add(this->picEntrada);
			this->panel1->Controls->Add(this->picSalida);
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(12, 57);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(963, 429);
			this->panel1->TabIndex = 0;
			// 
			// txtServer
			// 
			this->txtServer->BackColor = System::Drawing::Color::Lime;
			this->txtServer->Enabled = false;
			this->txtServer->Location = System::Drawing::Point(574, 17);
			this->txtServer->Name = L"txtServer";
			this->txtServer->Size = System::Drawing::Size(29, 20);
			this->txtServer->TabIndex = 1;
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
			// txtCliente
			// 
			this->txtCliente->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txtCliente->Enabled = false;
			this->txtCliente->Location = System::Drawing::Point(964, 115);
			this->txtCliente->Name = L"txtCliente";
			this->txtCliente->Size = System::Drawing::Size(23, 20);
			this->txtCliente->TabIndex = 0;
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
			// Simulador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightBlue;
			this->ClientSize = System::Drawing::Size(987, 689);
			this->Controls->Add(this->btPlay);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtCliente);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Name = L"Simulador";
			this->Text = L"SIMULADOR";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picEntrada))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSalida))->EndInit();
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

	public: void timer() {
		int segundos = 0, minutos = 0, horas = 0;

		while (true) {
			segundos++;

			if (segundos == 60) {
				segundos = 0;
				minutos++;
				if (minutos == 60) {
					minutos = 0;
					horas++;
				}
			}
			system("cls");
			cout << "[ " << horas << " : " << minutos << " : " << segundos << " ]\n";
			Sleep(1000);
		}
	}


	private: void dibujarServer() {
		panel1->Controls->Clear();
		int numeroServer = 0;
		int YUltimoServer = 17;

		for (int i = 0; i < Servidores->Servidores.size(); i++) {
			String^ name = "Server" + numeroServer;

			System::Windows::Forms::TextBox^ Server = gcnew TextBox();
			System::Windows::Forms::Label^ LbServer = gcnew Label();
			Server->Name = name;

			Server->BackColor = System::Drawing::Color::Lime;
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
	}

	private: void dibujarCliente() {
		panel1->Controls->Clear();
		panel1->Controls->Add(picSalida);
		panel1->Controls->Add(picEntrada);

		int numeroCliente = 0;

		for (int i = 0; i < idColas->Colas.size(); i++) {

			Cola* colaActual = idColas->Colas[i];
			NodoCola* actual = colaActual->front();

			do {
				if (actual->getX() >= 956) {

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
						LbCliente->Location = System::Drawing::Point(12.5, 12.5);
						LbCliente->BackColor = Color().Transparent;
						LbCliente->ForeColor = Color().MidnightBlue;
						LbCliente->Size = System::Drawing::Size(25, 25);
						LbCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
							static_cast<System::Byte>(0)));

						if (actual->getEstado() == "EN COLA")
							LbCliente->Text = actual->getTiempoCola() + "";
						else if (actual->getEstado() == "EN CAJA")
							LbCliente->Text = actual->getTiempoCaja() + "";
						else
							LbCliente->Text = " ";

						numeroCliente++;
						panel1->Controls->Add(Cliente);

						actual = actual->getSiguiente();
					}
				}
			} while (actual != nullptr);
		}
	}

	private: void actualizarEstadoServer(TextBox^ server, string estado) {
		if (estado == "ABIERTO") {
			server->BackColor = Color().Green;
			server->Visible = true;
		}
		else if (estado == "SATURADO") {
			server->BackColor = Color().Yellow;
			server->Visible = true;
		}
		else if (estado == "CERRANDO") {
			server->BackColor = Color().Orange;
			server->Visible = true;
		}
		else if (estado == "CERRADO") {
			server->BackColor = Color().Red;
			Sleep(1000);
			server->Visible = true;
		}
	}

	private: String^ imagenCliente(string estado) {
		if (estado == "ENTRANDO") {
			String^ imagen = " ";
			imagen = "C:/Users/angie/Desktop/ImagenesNodos/ClientesCola/Llegando.png";

			return imagen;
		}
		else if (estado == "EN COLA") {
			String^ imagen = " ";
			imagen = "C:/Users/angie/Desktop/ImagenesNodos/ClientesCola/EnCola.png";

			return imagen;
		}
		else if (estado == "EN CAJA") {
			String^ imagen = " ";
			imagen = "C:/Users/angie/Desktop/ImagenesNodos/ClientesCola/SiendoAtendido.png";

			return imagen;
		}
		else if (estado == "SALIENDO") {
			String^ imagen = " ";
			imagen = "C:/Users/angie/Desktop/ImagenesNodos/ClientesCola/Saliendo.png";

			return imagen;
		}
	}

	private: Cola* mejorCola() {
		Cola* mejorCola = idColas->Colas.front();

		if (idColas->Colas.size() != 0) {
			for (int i = 0; i < idColas->Colas.size(); i++) {
				if (mejorCola->size() > idColas[i].size())
					mejorCola = idColas->Colas[i];
			}
		}
		return mejorCola;
	}

	private: void crearCajeros() {
		int numeroCajeros = (int)numCajeros->Value;
		for (int i = 0; i < numeroCajeros; i++) {
			Server* nuevo;
			Servidores->Servidores.push_back(nuevo);
			Cola* nuevaCola;
			idColas->Colas.push_back(nuevaCola);
		}
	}

	private: void nuevosCientes() {
		Cola* fila = mejorCola();
		for (int i = 0; i < 10; i++) {
			fila->push_back(5);
		}

	}

	private: System::Void btPlay_Click(System::Object^ sender, System::EventArgs^ e) {
		idColas->push_back(6);
		idColas->push_back(5);
		dibujarCliente();
	}
	};
}
