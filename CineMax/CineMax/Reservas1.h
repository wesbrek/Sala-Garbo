#pragma once
#include "Funcion.h"
#include <cstring>
#include <string>
#include "Teatro.h"
#include "SelecAsientos1.h"
#include "ValidarCedula.h"
namespace CineMax {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	static Teatro miteatroReservar;
	static Funcion mifuncionReservar = Funcion("Pulp Fiction", "Quentin Tarantino", 154, "+18", "22:00", "1/4/2019");
	static int reserva = 0;
	/// <summary>
	/// Resumen de Reservas1
	/// </summary>
	public ref class Reservas1 : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		Reservas1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		Reservas1(Form^ inicio, Teatro _miteatro)
		{
			miteatroReservar = _miteatro;
			obj = inicio;
			
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Reservas1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnVolver;
	protected:


	private: System::Windows::Forms::Label^  nombre;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  btnReservar;

	private: System::Windows::Forms::Label^  Director;

	private: System::Windows::Forms::Label^  Teatro;



	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  Fecha;
	private: System::Windows::Forms::Label^  Hora;
	private: System::Windows::Forms::Button^  btnValidarReserva;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  Restriccion;
	private: System::Windows::Forms::Label^  Duracion;
	private: System::Windows::Forms::PictureBox^  pictureBox1;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Reservas1::typeid));
			this->btnVolver = (gcnew System::Windows::Forms::Button());
			this->nombre = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnReservar = (gcnew System::Windows::Forms::Button());
			this->Director = (gcnew System::Windows::Forms::Label());
			this->Teatro = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Fecha = (gcnew System::Windows::Forms::Label());
			this->Hora = (gcnew System::Windows::Forms::Label());
			this->btnValidarReserva = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Restriccion = (gcnew System::Windows::Forms::Label());
			this->Duracion = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnVolver
			// 
			this->btnVolver->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->btnVolver->Location = System::Drawing::Point(809, 386);
			this->btnVolver->Name = L"btnVolver";
			this->btnVolver->Size = System::Drawing::Size(138, 47);
			this->btnVolver->TabIndex = 0;
			this->btnVolver->Text = L"Volver";
			this->btnVolver->UseVisualStyleBackColor = true;
			this->btnVolver->Click += gcnew System::EventHandler(this, &Reservas1::button1_Click);
			// 
			// nombre
			// 
			this->nombre->AutoSize = true;
			this->nombre->BackColor = System::Drawing::Color::Transparent;
			this->nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->nombre->ForeColor = System::Drawing::Color::White;
			this->nombre->Location = System::Drawing::Point(73, 76);
			this->nombre->Name = L"nombre";
			this->nombre->Size = System::Drawing::Size(0, 32);
			this->nombre->TabIndex = 2;
			this->nombre->Click += gcnew System::EventHandler(this, &Reservas1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(262, 146);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 32);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Director:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(262, 195);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(137, 32);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Duración:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(262, 244);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 32);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Teatro:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(262, 293);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 32);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Fecha:";
			// 
			// btnReservar
			// 
			this->btnReservar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->btnReservar->Location = System::Drawing::Point(809, 244);
			this->btnReservar->Name = L"btnReservar";
			this->btnReservar->Size = System::Drawing::Size(138, 47);
			this->btnReservar->TabIndex = 7;
			this->btnReservar->Text = L"Reservar";
			this->btnReservar->UseVisualStyleBackColor = true;
			this->btnReservar->Click += gcnew System::EventHandler(this, &Reservas1::btnReservar_Click);
			// 
			// Director
			// 
			this->Director->AutoSize = true;
			this->Director->BackColor = System::Drawing::Color::Transparent;
			this->Director->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->Director->ForeColor = System::Drawing::Color::White;
			this->Director->Location = System::Drawing::Point(380, 146);
			this->Director->Name = L"Director";
			this->Director->Size = System::Drawing::Size(0, 32);
			this->Director->TabIndex = 8;
			this->Director->Click += gcnew System::EventHandler(this, &Reservas1::Director_Click);
			// 
			// Teatro
			// 
			this->Teatro->AutoSize = true;
			this->Teatro->BackColor = System::Drawing::Color::Transparent;
			this->Teatro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->Teatro->ForeColor = System::Drawing::Color::White;
			this->Teatro->Location = System::Drawing::Point(353, 244);
			this->Teatro->Name = L"Teatro";
			this->Teatro->Size = System::Drawing::Size(0, 32);
			this->Teatro->TabIndex = 10;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(262, 339);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(84, 32);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Hora:";
			// 
			// Fecha
			// 
			this->Fecha->AutoSize = true;
			this->Fecha->BackColor = System::Drawing::Color::Transparent;
			this->Fecha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->Fecha->ForeColor = System::Drawing::Color::White;
			this->Fecha->Location = System::Drawing::Point(353, 293);
			this->Fecha->Name = L"Fecha";
			this->Fecha->Size = System::Drawing::Size(0, 32);
			this->Fecha->TabIndex = 12;
			// 
			// Hora
			// 
			this->Hora->AutoSize = true;
			this->Hora->BackColor = System::Drawing::Color::Transparent;
			this->Hora->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->Hora->ForeColor = System::Drawing::Color::White;
			this->Hora->Location = System::Drawing::Point(353, 339);
			this->Hora->Name = L"Hora";
			this->Hora->Size = System::Drawing::Size(0, 32);
			this->Hora->TabIndex = 13;
			// 
			// btnValidarReserva
			// 
			this->btnValidarReserva->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->btnValidarReserva->Location = System::Drawing::Point(760, 314);
			this->btnValidarReserva->Name = L"btnValidarReserva";
			this->btnValidarReserva->Size = System::Drawing::Size(227, 47);
			this->btnValidarReserva->TabIndex = 14;
			this->btnValidarReserva->Text = L"Validar reserva";
			this->btnValidarReserva->UseVisualStyleBackColor = true;
			this->btnValidarReserva->Click += gcnew System::EventHandler(this, &Reservas1::btnValidarReserva_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(262, 386);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 32);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Restriccion:";
			// 
			// Restriccion
			// 
			this->Restriccion->AutoSize = true;
			this->Restriccion->BackColor = System::Drawing::Color::Transparent;
			this->Restriccion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->Restriccion->ForeColor = System::Drawing::Color::White;
			this->Restriccion->Location = System::Drawing::Point(380, 386);
			this->Restriccion->Name = L"Restriccion";
			this->Restriccion->Size = System::Drawing::Size(0, 32);
			this->Restriccion->TabIndex = 16;
			// 
			// Duracion
			// 
			this->Duracion->AutoSize = true;
			this->Duracion->BackColor = System::Drawing::Color::Transparent;
			this->Duracion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->Duracion->ForeColor = System::Drawing::Color::White;
			this->Duracion->Location = System::Drawing::Point(370, 195);
			this->Duracion->Name = L"Duracion";
			this->Duracion->Size = System::Drawing::Size(0, 32);
			this->Duracion->TabIndex = 9;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(61, 146);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(179, 302);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// Reservas1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1034, 556);
			this->Controls->Add(this->Restriccion);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnValidarReserva);
			this->Controls->Add(this->Hora);
			this->Controls->Add(this->Fecha);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Teatro);
			this->Controls->Add(this->Duracion);
			this->Controls->Add(this->Director);
			this->Controls->Add(this->btnReservar);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->nombre);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnVolver);
			this->MaximumSize = System::Drawing::Size(1052, 603);
			this->MinimumSize = System::Drawing::Size(1052, 603);
			this->Name = L"Reservas1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Reservas1";
			this->Load += gcnew System::EventHandler(this, &Reservas1::Reservas1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
			crearFuncion();
		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Hide();
		obj->Show();
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void Reservas1_Load(System::Object^  sender, System::EventArgs^  e) {
}
		 void crearFuncion() {
	
			 String^ nombre = gcnew String(mifuncionReservar.getNombre().c_str());
			 String^ director = gcnew String(mifuncionReservar.getDirector().c_str());

			 std::string s = std::to_string(mifuncionReservar.getDuracion());
			 String^ duracion = gcnew String(s.c_str());
			 String^ hora = gcnew String(mifuncionReservar.getHora().c_str());
			 String^ fecha = gcnew String(mifuncionReservar.getFecha().c_str());
			 String^ teatro = gcnew String(miteatroReservar.getNombre().c_str());
			 String^ restriccion = gcnew String(mifuncionReservar.getRestriccion().c_str());

			 this->Restriccion->Text = restriccion;
			 this->nombre->Text = nombre;
			 this->Director->Text = director;
			 this->Duracion->Text = duracion;
			 this->Fecha->Text = fecha;
			 this->Hora->Text = hora;
			 this->Teatro->Text = teatro;
			
		}
private: System::Void Director_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnReservar_Click(System::Object^  sender, System::EventArgs^  e) {
	Hide();

	SelecAsientos1^ res = gcnew SelecAsientos1(mifuncionReservar, miteatroReservar, obj, 1);

	res->ShowDialog();
}
private: System::Void btnValidarReserva_Click(System::Object^  sender, System::EventArgs^  e) {
	Hide();
	ValidarCedula^ res = gcnew ValidarCedula(miteatroReservar, this, obj);
	res->Show();
}
};


}
