#pragma once
#include "Teatro.h"
#include <msclr\marshal_cppstd.h>
#include "CedulaErronea.h"
#include "CedulaFallida.h"
namespace CineMax {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	static Teatro miteatroValidar;


	/// <summary>
	/// Resumen de ValidarCedula
	/// </summary>
	public ref class ValidarCedula : public System::Windows::Forms::Form
	{
	public:
		Form ^ objs;
		Form ^ anterior;
		ValidarCedula(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		ValidarCedula(Teatro _t, Form ^ obj, Form ^ obj2)
		{
			miteatroValidar = _t;
			anterior = obj;
			objs = obj2;
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ValidarCedula()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  btnVolver;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ValidarCedula::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnVolver = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(227, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(427, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese su cédula para confirmar";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(333, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(199, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"su reservación";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->textBox1->Location = System::Drawing::Point(299, 191);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(256, 38);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->button1->Location = System::Drawing::Point(351, 297);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 45);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Validar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ValidarCedula::button1_Click);
			// 
			// btnVolver
			// 
			this->btnVolver->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->btnVolver->Location = System::Drawing::Point(351, 362);
			this->btnVolver->Name = L"btnVolver";
			this->btnVolver->Size = System::Drawing::Size(140, 45);
			this->btnVolver->TabIndex = 4;
			this->btnVolver->Text = L"Volver";
			this->btnVolver->UseVisualStyleBackColor = true;
			this->btnVolver->Click += gcnew System::EventHandler(this, &ValidarCedula::btnVolver_Click);
			// 
			// ValidarCedula
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(863, 451);
			this->Controls->Add(this->btnVolver);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(881, 498);
			this->MinimumSize = System::Drawing::Size(881, 498);
			this->Name = L"ValidarCedula";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ValidarCedula";
			this->Load += gcnew System::EventHandler(this, &ValidarCedula::ValidarCedula_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ValidarCedula_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	msclr::interop::marshal_context context;
	std::string cedulaRe = context.marshal_as<std::string>(textBox1->Text);
	bool val = validarCedula(cedulaRe);
	if (textBox1->Text == "") {
		CedulaFallida ^ ced = gcnew CedulaFallida(this);
		ced->Show();
	}
	else if(val == true){
		Hide();
		objs->Show();
	}
	else if(val == false) {
		CedulaErronea ^ res = gcnew CedulaErronea();
		res->Show();
	}

}

		 bool validarCedula(std::string cedula) {
		Nodo *aux = miteatroValidar.getAsientosNormales().getCabeza();
		Nodo *auxVip = miteatroValidar.getAsientosVip().getTope();
		Nodo *auxPref = miteatroValidar.getAsientosPref().getCabeza();
		int valor = 0;

		while (aux != NULL) {

			if (aux->getAsiento()->getCedulaReserva() == cedula) {
				aux->getAsiento()->setEstado(1);
				valor++;
			}
			aux = aux->getSiguiente();
		}

		while (auxVip != NULL) {

			if (auxVip->getAsiento()->getCedulaReserva() == cedula) {
				auxVip->getAsiento()->setEstado(1);
				valor++;
			}
			auxVip = auxVip->getSiguiente();
		}

		while (auxPref != NULL) {

			if (auxPref->getAsiento()->getCedulaReserva() == cedula) {
				auxPref->getAsiento()->setEstado(1);
				valor++;
			}
			auxPref = auxPref->getSiguiente();
		}

		if (valor > 0) {
			return true;
		}
		else if (valor == 0) {
			return false;
		}
		

	}
private: System::Void btnVolver_Click(System::Object^  sender, System::EventArgs^  e) {
	Hide();
	anterior->Show();
}
};
}
