#pragma once
#include "Teatro.h"
#include "Funcion.h"
#include "ComprarAsientos11.h"

namespace CineMax {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	static Teatro miteatroComprarAsientosLleno;
	static Funcion mifuncionComprarAsientosLleno;
	static PilaAsientos pilaAuxLleno;
	static int contadorAsientosLleno = 1;
	static int cantAsientosLleno;
	static PilaAsientos pilaAsientosVipLleno;
	static PilaAsientos pilaValidarVipLleno;
	static PilaAsientos pilaValidarAuxLleno;
	static int valReservLleno = 0;

	/// <summary>
	/// Resumen de FuncionLlena
	/// </summary>
	public ref class FuncionLlena : public System::Windows::Forms::Form
	{
	public:
		Form ^ obj;
		Form ^ inicio;
		String^ cedula;
		FuncionLlena(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}


		FuncionLlena(Teatro miteatro, Funcion _mifucion, int _asientos, Form^ _obj, Form^ _anterior, String^ s)
		{
			miteatroComprarAsientosLleno = miteatro;
			mifuncionComprarAsientosLleno = _mifucion;
			cantAsientosLleno  = _asientos;
			obj = _anterior;
			inicio = _obj;
			cedula = s;
			pilaAsientosVipLleno = miteatro.getAsientosVip();
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	public: FuncionLlena(Teatro miteatro, Funcion _mifucion, int _asientos, Form^ _obj, Form^ _anterior, String^ s, int res)
	{
		miteatroComprarAsientosLleno = miteatro;
		mifuncionComprarAsientosLleno = _mifucion;
		cantAsientosLleno = _asientos;
		obj = _anterior;
		inicio = _obj;
		cedula = s;
		pilaAsientosVipLleno = miteatro.getAsientosVip();
		valReservLleno = res;
		InitializeComponent();
		//
		//TODO: agregar código de constructor aquí
		//
	}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FuncionLlena()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FuncionLlena::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(612, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"La función en este momento se encuentra llena";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(149, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(456, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"¿Desea entrar a la cola de espera\?";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->button1->Location = System::Drawing::Point(178, 196);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 49);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Si";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FuncionLlena::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->button2->Location = System::Drawing::Point(431, 196);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(94, 49);
			this->button2->TabIndex = 3;
			this->button2->Text = L"No";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FuncionLlena::button2_Click);
			// 
			// FuncionLlena
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(693, 332);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"FuncionLlena";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FuncionLlena";
			this->Load += gcnew System::EventHandler(this, &FuncionLlena::FuncionLlena_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FuncionLlena_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Hide();
	obj->Show();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		Hide();
		ComprarAsientos11^ res = gcnew ComprarAsientos11(miteatroComprarAsientosLleno, mifuncionComprarAsientosLleno, cantAsientosLleno, inicio, obj, cedula, 2);
		contadorAsientosLleno = 0;

		res->ShowDialog();
		valReservLleno = 0;
	


}
};
}
