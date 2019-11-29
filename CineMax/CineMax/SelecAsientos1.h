#pragma once
#include<string>
#include "Teatro.h"
#include "ComprarAsientos11.h"
#include "CantidadErronea.h"
#include "CedulaFallida.h"
#include "FuncionLlena.h"
namespace CineMax {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	static int contador = 0;
	static Funcion funcionComprar1;
	static int trueresevacion = 0;
	static Teatro teatroComprar1;
	/// <summary>
	/// Resumen de SelecAsientos1
	/// </summary>
	public ref class SelecAsientos1 : public System::Windows::Forms::Form
	{
	public:
		Form^ objInicio;
		SelecAsientos1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		SelecAsientos1(Funcion mifuncion, Teatro miteatro, Form^ _obj)
		{
			funcionComprar1 = mifuncion;
			teatroComprar1 = miteatro;
			objInicio = _obj;
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		SelecAsientos1(Funcion mifuncion, Teatro miteatro, Form^ _obj, int reserv)
		{
			funcionComprar1 = mifuncion;
			teatroComprar1 = miteatro;
			objInicio = _obj;
			trueresevacion = reserv;
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}


	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~SelecAsientos1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  cantBoletos;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  btnAsientos;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtCedula;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SelecAsientos1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->cantBoletos = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnAsientos = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtCedula = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(348, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(455, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Seleccione la cantidad de asientos";
			this->label1->Click += gcnew System::EventHandler(this, &SelecAsientos1::label1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->button2->Location = System::Drawing::Point(599, 192);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(59, 55);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SelecAsientos1::button2_Click);
			// 
			// cantBoletos
			// 
			this->cantBoletos->AutoSize = true;
			this->cantBoletos->BackColor = System::Drawing::Color::Transparent;
			this->cantBoletos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->cantBoletos->ForeColor = System::Drawing::Color::White;
			this->cantBoletos->Location = System::Drawing::Point(506, 204);
			this->cantBoletos->Name = L"cantBoletos";
			this->cantBoletos->Size = System::Drawing::Size(31, 32);
			this->cantBoletos->TabIndex = 3;
			this->cantBoletos->Text = L"0";
			this->cantBoletos->Click += gcnew System::EventHandler(this, &SelecAsientos1::cantBoletos_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->button3->Location = System::Drawing::Point(461, 470);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 42);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Volver";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &SelecAsientos1::button3_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->button1->Location = System::Drawing::Point(379, 192);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(59, 55);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SelecAsientos1::button1_Click);
			// 
			// btnAsientos
			// 
			this->btnAsientos->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAsientos->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnAsientos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->btnAsientos->Location = System::Drawing::Point(438, 405);
			this->btnAsientos->Name = L"btnAsientos";
			this->btnAsientos->Size = System::Drawing::Size(182, 42);
			this->btnAsientos->TabIndex = 5;
			this->btnAsientos->Text = L"Ver asientos";
			this->btnAsientos->UseVisualStyleBackColor = true;
			this->btnAsientos->Click += gcnew System::EventHandler(this, &SelecAsientos1::btnAsientos_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(192, 314);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(246, 32);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Ingrese su cédula:";
			this->label2->Click += gcnew System::EventHandler(this, &SelecAsientos1::label2_Click);
			// 
			// txtCedula
			// 
			this->txtCedula->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->txtCedula->Location = System::Drawing::Point(461, 314);
			this->txtCedula->Name = L"txtCedula";
			this->txtCedula->Size = System::Drawing::Size(270, 38);
			this->txtCedula->TabIndex = 7;
			this->txtCedula->TextChanged += gcnew System::EventHandler(this, &SelecAsientos1::txtCedula_TextChanged);
			// 
			// SelecAsientos1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1034, 556);
			this->Controls->Add(this->txtCedula);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnAsientos);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->cantBoletos);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(1052, 603);
			this->MinimumSize = System::Drawing::Size(1052, 603);
			this->Name = L"SelecAsientos1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SelecAsientos1";
			this->Load += gcnew System::EventHandler(this, &SelecAsientos1::SelecAsientos1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void SelecAsientos1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	if (contador != 110) {
		contador = contador + 1;
		std::string s = std::to_string(contador);
		String^ cantidad = gcnew String(s.c_str());
		this->cantBoletos->Text = cantidad;
	}
	
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (contador == 0) {

	}
	else if (contador > 0) {
		contador = contador - 1;
		std::string s = std::to_string(contador);
		String^ cantidad = gcnew String(s.c_str());
		this->cantBoletos->Text = cantidad;
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Hide();
	objInicio->Show();
	contador = 0;
}
	private: System::Void btnAsientos_Click(System::Object^  sender, System::EventArgs^  e) {

		int contadorNormales = 0;
		int contadorVip = 0;
		int contadorPref = 0;
		int contadorTotal = 0;
		Nodo *aux = teatroComprar1.getAsientosNormales().getCabeza();
		Nodo *auxVip = teatroComprar1.getAsientosVip().getTope();
		Nodo *auxPref = teatroComprar1.getAsientosPref().getCabeza();



		while (aux != NULL) {

				if (aux->getAsiento()->getEstado() == 1 || aux->getAsiento()->getEstado() == 4) {
					contadorNormales++;
			
				}
				else if (aux->getAsiento()->getEstado() == 0) {
					contadorTotal++;
				}
			
			aux = aux->getSiguiente();
		}

		while (auxVip != NULL) {

			if (auxVip->getAsiento()->getEstado() == 1 || auxVip->getAsiento()->getEstado() == 4) {
				contadorVip++;
		
			}
			else if (auxVip->getAsiento()->getEstado() == 0) {
				contadorTotal++;
			}
			auxVip = auxVip->getSiguiente();
		}

		while (auxPref != NULL) {

			if (auxPref->getAsiento()->getEstado() == 1 || auxPref->getAsiento()->getEstado() == 4) {
				contadorPref++;
			}
			else if (auxPref->getAsiento()->getEstado() == 0) {
				contadorTotal++;
			}
			auxPref = auxPref->getSiguiente();
		}



		if (contador == 0) {
			
			CantidadErronea ^ error = gcnew CantidadErronea(this);
			error->Show();
		}
		else if (txtCedula->Text == "") {
			CedulaFallida ^ ced = gcnew CedulaFallida(this);
			ced->Show();
		}
		else if (contadorNormales == 50 && contadorVip == 50 && contadorPref == 10 && trueresevacion == 1 || contador > contadorTotal) {
			Hide();
			FuncionLlena^ res = gcnew FuncionLlena(teatroComprar1, funcionComprar1, contador, objInicio, this, txtCedula->Text, trueresevacion);
			res->Show();
			contador = 0;
		}
		else if (contadorNormales == 50 && contadorVip == 50 && contadorPref == 10 && trueresevacion == 0 || contador  > contadorTotal) {
			Hide();
			FuncionLlena^ res = gcnew FuncionLlena(teatroComprar1, funcionComprar1, contador, objInicio, this, txtCedula->Text);
			res->Show();
			contador = 0;
		}
		else if(trueresevacion == 0){
			Hide();
			ComprarAsientos11^ res = gcnew ComprarAsientos11(teatroComprar1, funcionComprar1, contador, objInicio, this, txtCedula->Text);
			contador = 0;
			std::string s = std::to_string(contador);
			String^ cantidad = gcnew String(s.c_str());
			this->cantBoletos->Text = cantidad;
			res->ShowDialog();
		}
		else if (trueresevacion == 1) {
			Hide();
			ComprarAsientos11^ res = gcnew ComprarAsientos11(teatroComprar1, funcionComprar1, contador, objInicio, this, txtCedula->Text, trueresevacion);
			contador = 0;
			std::string s = std::to_string(contador);
			String^ cantidad = gcnew String(s.c_str());
			this->cantBoletos->Text = cantidad;
			res->ShowDialog();
			trueresevacion = 0;
		}

		
}
private: System::Void cantBoletos_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void txtCedula_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
