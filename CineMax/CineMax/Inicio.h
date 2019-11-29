#pragma once
#include "Reservas1.h"
#include "Comprar1.h"
#include "PilaAsientos.h"
#include "ListaAsientosPreferenciales.h"
#include "ColaEspera.h"
#include "VerTotal.h"
namespace CineMax {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	static ListaAsientosNormales milistaNormales1 (50);
	static PilaAsientos mipilaVip1(50);
	static ListaAsientosPreferenciales milistaPreferenciales1(10);
	static ColaEspera micolaEspera1(110);
	static Teatro miteatro1 = Teatro("Sala Garbo Heredia", milistaNormales1, mipilaVip1, milistaPreferenciales1, micolaEspera1);
	static int c = 0;
	static Teatro miteatro2;



	/// <summary>
	/// Resumen de Inicio
	/// </summary>
	public ref class Inicio : public System::Windows::Forms::Form
	{
	public:
		Inicio(void)
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
		~Inicio()
		{
			if (components)
			{
				delete components;
			}
		}
	internal:
		ImageList ^ ImageList1;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;






	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;




	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::PictureBox^  pictureBox3;

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Inicio::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(390, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bienvenido";
			this->label1->Click += gcnew System::EventHandler(this, &Inicio::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(334, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(303, 32);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Seleccione una opción";
			this->label2->Click += gcnew System::EventHandler(this, &Inicio::label2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(182, 111);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(204, 336);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->button6->Location = System::Drawing::Point(503, 111);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(142, 44);
			this->button6->TabIndex = 10;
			this->button6->Text = L"Reservas";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Inicio::button6_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->button1->Location = System::Drawing::Point(503, 180);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 44);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Comprar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Inicio::button1_Click_2);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->button2->Location = System::Drawing::Point(503, 254);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 44);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Liberar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Inicio::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->button3->Location = System::Drawing::Point(503, 329);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(142, 44);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Iniciar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Inicio::button3_Click_1);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->button10->Location = System::Drawing::Point(503, 403);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(142, 44);
			this->button10->TabIndex = 18;
			this->button10->Text = L"Ver total";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Inicio::button10_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(747, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(234, 116);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 19;
			this->pictureBox3->TabStop = false;
			// 
			// Inicio
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(983, 475);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(1052, 603);
			this->Name = L"Inicio";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Inicio";
			this->Load += gcnew System::EventHandler(this, &Inicio::Inicio_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Inicio_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		Hide();
		Reservas1^ res = gcnew Reservas1(this, miteatro1);

		res->ShowDialog();
	}
	private: System::Void button1_Click_2(System::Object^  sender, System::EventArgs^  e) {
		Hide();
		Comprar1^ res = gcnew Comprar1(this, miteatro1);
		res->ShowDialog();


	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	
			


private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	button6->Hide();
	button1->Hide();
	button2->Hide();
	
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Nodo *auxNormales = miteatro1.getAsientosNormales().getCabeza();

	PilaAsientos pila = miteatro1.getAsientosVip();
	PilaAsientos pilaAux;
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pila.eliminarElem());
	}
	Nodo *auxVip = pilaAux.getTope();

	Nodo *auxPref = miteatro1.getAsientosPref().getCabeza();
	Nodo *cola = miteatro1.getColaEspera().getFrente();
	int contadorNormales = 1;
	int contadorVip = 1;
	int contadorColaNormales = 1;
	int contadorColaVip = 51;
	int contadorColaPref = 101;

	while (cola != NULL) {
		if (auxNormales != NULL) {
			if (auxNormales->getAsiento()->getEstado() == 4 && cola->getAsiento()->getEstado() == 5) {
				auxNormales->getAsiento()->setEstado(1);
				auxNormales = auxNormales->getSiguiente();
			}
			else if (auxNormales->getAsiento()->getEstado() == 4) {
				auxNormales->getAsiento()->setEstado(0);
				auxNormales = auxNormales->getSiguiente();
			}
			else if (auxNormales->getAsiento()->getEstado() == 1 || auxNormales->getAsiento()->getEstado() == 0) {
				auxNormales = auxNormales->getSiguiente();
			}
		}
		else if (auxVip != NULL) {


			if (auxVip->getAsiento()->getEstado() == 4 && cola->getAsiento()->getEstado() == 5) {
				auxVip->getAsiento()->setEstado(1);
				auxVip = auxVip->getSiguiente();
			}
			else if (auxVip->getAsiento()->getEstado() == 4) {
				auxVip->getAsiento()->setEstado(0);
				auxVip = auxVip->getSiguiente();
			}
			else if (auxVip->getAsiento()->getEstado() == 1 || auxVip->getAsiento()->getEstado() == 0) {
				auxVip = auxVip->getSiguiente();
			}
		}
		else if (auxPref != NULL) {
			if (auxPref->getAsiento()->getEstado() == 4 && cola->getAsiento()->getEstado() == 5) {
				auxPref->getAsiento()->setEstado(1);
				auxPref = auxPref->getSiguiente();

			}
			else if (auxPref->getAsiento()->getEstado() == 4) {
				auxPref->getAsiento()->setEstado(0);
				auxPref = auxPref->getSiguiente();
			}
			else if (auxPref->getAsiento()->getEstado() == 1 || auxPref->getAsiento()->getEstado() == 0){
				auxPref = auxPref->getSiguiente();

			}
		}


		cola = cola->getSiguiente();


	}


	


	for (int i = 0; i < 50; i++) {
		pila.insertarElem(pilaAux.eliminarElem());
	}

	miteatro1.setAsientosVip(pila);

}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {

	VerTotal ^ obj = gcnew VerTotal(this, miteatro1);
	obj->Show();
	Hide();

}
};
}
