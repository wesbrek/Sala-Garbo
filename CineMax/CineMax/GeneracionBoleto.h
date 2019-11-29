#pragma once
#include "Funcion.h"
#include "Teatro.h"
namespace CineMax {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	static Funcion boletoFuncion;
	static Teatro boletoTeatro;
	static int precioTotal;
	static int colaVal = 0;
	/// <summary>
	/// Resumen de GeneracionBoleto
	/// </summary>
	public ref class GeneracionBoleto : public System::Windows::Forms::Form
	{
	public:
		String^ boletoCedula;
		Form^ objs;
		GeneracionBoleto(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		GeneracionBoleto(Funcion mifunc, Teatro mitreat, String^ ced, Form^ objss, int val)
		{
			boletoFuncion = mifunc;
			boletoTeatro = mitreat;
			boletoCedula = ced;
			objs = objss;
			colaVal = val;
			InitializeComponent();

			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~GeneracionBoleto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  labelCedula;
	private: System::Windows::Forms::Label^  labelFuncion;
	private: System::Windows::Forms::Label^  labelTeatro;
	private: System::Windows::Forms::Label^  labelFecha;
	private: System::Windows::Forms::Label^  labelHora;
	private: System::Windows::Forms::Label^  labelValor;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  labelAsientos;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GeneracionBoleto::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->labelCedula = (gcnew System::Windows::Forms::Label());
			this->labelFuncion = (gcnew System::Windows::Forms::Label());
			this->labelTeatro = (gcnew System::Windows::Forms::Label());
			this->labelFecha = (gcnew System::Windows::Forms::Label());
			this->labelHora = (gcnew System::Windows::Forms::Label());
			this->labelValor = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->labelAsientos = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(784, 138);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(217, 190);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(384, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Cédula:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(384, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 32);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Función:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(384, 170);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 32);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Teatro:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(384, 223);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 32);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Fecha:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(384, 330);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 32);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Valor:";
			this->label5->Click += gcnew System::EventHandler(this, &GeneracionBoleto::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(384, 277);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 32);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Hora:";
			// 
			// labelCedula
			// 
			this->labelCedula->AutoSize = true;
			this->labelCedula->BackColor = System::Drawing::Color::Transparent;
			this->labelCedula->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->labelCedula->ForeColor = System::Drawing::Color::White;
			this->labelCedula->Location = System::Drawing::Point(538, 50);
			this->labelCedula->Name = L"labelCedula";
			this->labelCedula->Size = System::Drawing::Size(0, 32);
			this->labelCedula->TabIndex = 7;
			// 
			// labelFuncion
			// 
			this->labelFuncion->AutoSize = true;
			this->labelFuncion->BackColor = System::Drawing::Color::Transparent;
			this->labelFuncion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->labelFuncion->ForeColor = System::Drawing::Color::White;
			this->labelFuncion->Location = System::Drawing::Point(538, 112);
			this->labelFuncion->Name = L"labelFuncion";
			this->labelFuncion->Size = System::Drawing::Size(0, 32);
			this->labelFuncion->TabIndex = 8;
			// 
			// labelTeatro
			// 
			this->labelTeatro->AutoSize = true;
			this->labelTeatro->BackColor = System::Drawing::Color::Transparent;
			this->labelTeatro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->labelTeatro->ForeColor = System::Drawing::Color::White;
			this->labelTeatro->Location = System::Drawing::Point(538, 170);
			this->labelTeatro->Name = L"labelTeatro";
			this->labelTeatro->Size = System::Drawing::Size(0, 32);
			this->labelTeatro->TabIndex = 9;
			// 
			// labelFecha
			// 
			this->labelFecha->AutoSize = true;
			this->labelFecha->BackColor = System::Drawing::Color::Transparent;
			this->labelFecha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->labelFecha->ForeColor = System::Drawing::Color::White;
			this->labelFecha->Location = System::Drawing::Point(538, 223);
			this->labelFecha->Name = L"labelFecha";
			this->labelFecha->Size = System::Drawing::Size(0, 32);
			this->labelFecha->TabIndex = 10;
			this->labelFecha->Click += gcnew System::EventHandler(this, &GeneracionBoleto::labelFecha_Click);
			// 
			// labelHora
			// 
			this->labelHora->AutoSize = true;
			this->labelHora->BackColor = System::Drawing::Color::Transparent;
			this->labelHora->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->labelHora->ForeColor = System::Drawing::Color::White;
			this->labelHora->Location = System::Drawing::Point(538, 277);
			this->labelHora->Name = L"labelHora";
			this->labelHora->Size = System::Drawing::Size(0, 32);
			this->labelHora->TabIndex = 11;
			// 
			// labelValor
			// 
			this->labelValor->AutoSize = true;
			this->labelValor->BackColor = System::Drawing::Color::Transparent;
			this->labelValor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->labelValor->ForeColor = System::Drawing::Color::White;
			this->labelValor->Location = System::Drawing::Point(538, 330);
			this->labelValor->Name = L"labelValor";
			this->labelValor->Size = System::Drawing::Size(0, 32);
			this->labelValor->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->button1->Location = System::Drawing::Point(439, 465);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 54);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GeneracionBoleto::button1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(51, 150);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(215, 178);
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(273, 386);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(133, 32);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Asientos:";
			// 
			// labelAsientos
			// 
			this->labelAsientos->AutoSize = true;
			this->labelAsientos->BackColor = System::Drawing::Color::Transparent;
			this->labelAsientos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->labelAsientos->ForeColor = System::Drawing::Color::White;
			this->labelAsientos->Location = System::Drawing::Point(412, 386);
			this->labelAsientos->Name = L"labelAsientos";
			this->labelAsientos->Size = System::Drawing::Size(0, 32);
			this->labelAsientos->TabIndex = 16;
			this->labelAsientos->Click += gcnew System::EventHandler(this, &GeneracionBoleto::labelAsientos_Click);
			// 
			// GeneracionBoleto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1034, 556);
			this->Controls->Add(this->labelAsientos);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->labelValor);
			this->Controls->Add(this->labelHora);
			this->Controls->Add(this->labelFecha);
			this->Controls->Add(this->labelTeatro);
			this->Controls->Add(this->labelFuncion);
			this->Controls->Add(this->labelCedula);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"GeneracionBoleto";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GeneracionBoleto";
			this->Load += gcnew System::EventHandler(this, &GeneracionBoleto::GeneracionBoleto_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
			generarBoleto();
		}
#pragma endregion
	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void labelFecha_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void GeneracionBoleto_Load(System::Object^  sender, System::EventArgs^  e) {
}


void generarBoleto() {
	Nodo *aux = boletoTeatro.getAsientosNormales().getCabeza();
	Nodo *auxVip = boletoTeatro.getAsientosVip().getTope();
	Nodo *auxPref = boletoTeatro.getAsientosPref().getCabeza();
	Nodo *cola = boletoTeatro.getColaEspera().getFrente();

	if (colaVal == 0) {


		while (aux != NULL) {


			if (aux->getAsiento()->getEstado() == 3 && aux->getAsiento()->getTipoAsiento() == "normales") {
				aux->getAsiento()->setEstado(1);
				String^ codigo = gcnew String(aux->getAsiento()->toString().c_str());
				labelAsientos->Text = labelAsientos->Text + " " + codigo;

				precioTotal = precioTotal + aux->getAsiento()->getPrecio();

			}
			else if (aux->getAsiento()->getEstado() == 2 && aux->getAsiento()->getTipoAsiento() == "normales") {
				String^ codigo = gcnew String(aux->getAsiento()->toString().c_str());
				labelAsientos->Text = labelAsientos->Text + " " + codigo;
				aux->getAsiento()->setEstado(4);
				precioTotal = precioTotal + aux->getAsiento()->getPrecio();
			}

			aux = aux->getSiguiente();


		}

		while (auxVip != NULL) {

			if (auxVip->getAsiento()->getEstado() == 3 && auxVip->getAsiento()->getTipoAsiento() == "vip") {
				auxVip->getAsiento()->setEstado(1);
				String^ codigo = gcnew String(auxVip->getAsiento()->toString().c_str());
				labelAsientos->Text = labelAsientos->Text + " " + codigo;

				precioTotal = precioTotal + auxVip->getAsiento()->getPrecio();
			}
			else if (auxVip->getAsiento()->getEstado() == 2 && auxVip->getAsiento()->getTipoAsiento() == "vip") {
				String^ codigo = gcnew String(auxVip->getAsiento()->toString().c_str());
				labelAsientos->Text = labelAsientos->Text + " " + codigo;
				auxVip->getAsiento()->setEstado(4);
				precioTotal = precioTotal + auxVip->getAsiento()->getPrecio();
			}

			auxVip = auxVip->getSiguiente();
		}

		while (auxPref != NULL) {


			if (auxPref->getAsiento()->getEstado() == 3 && auxPref->getAsiento()->getTipoAsiento() == "preferenciales") {
				auxPref->getAsiento()->setEstado(1);
				String^ codigo = gcnew String(auxPref->getAsiento()->toString().c_str());
				labelAsientos->Text = labelAsientos->Text + " " + codigo;

				precioTotal = precioTotal + auxPref->getAsiento()->getPrecio();

			}
			else if (auxPref->getAsiento()->getEstado() == 2 && auxPref->getAsiento()->getTipoAsiento() == "preferenciales") {
				String^ codigo = gcnew String(auxPref->getAsiento()->toString().c_str());
				labelAsientos->Text = labelAsientos->Text + " " + codigo;
				auxPref->getAsiento()->setEstado(4);
				precioTotal = precioTotal + auxPref->getAsiento()->getPrecio();
			}

			auxPref = auxPref->getSiguiente();


		}

	}
	else if (colaVal == 1) {
		while (cola != NULL) {
			if (cola->getAsiento()->getEstado() == 6) {
				String^ codigo = gcnew String(cola->getAsiento()->toString().c_str());
				labelAsientos->Text = labelAsientos->Text + " " + codigo;
				cola->getAsiento()->setEstado(5);
				precioTotal = precioTotal + cola->getAsiento()->getPrecio();
			}

			cola = cola->getSiguiente();

		}

	}

			 


		 
		


		 std::string s = std::to_string(precioTotal);
		 String^ teatro = gcnew String(boletoTeatro.getNombre().c_str());
		 String^ funcion = gcnew String(boletoFuncion.getNombre().c_str());
		 String^ hora = gcnew String(boletoFuncion.getHora().c_str());
		 String^ fecha = gcnew String(boletoFuncion.getFecha().c_str());
		 String^ precio = gcnew String(s.c_str());
		 labelCedula->Text = boletoCedula;
		 labelFuncion->Text = funcion;
		 labelTeatro->Text = teatro;
		 labelHora->Text = hora;
		 labelFecha->Text = fecha;
		 labelValor->Text = precio;

}
private: System::Void labelAsientos_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Hide();
	objs->Show();
	precioTotal = 0;
	colaVal = 0;
}
};
}
