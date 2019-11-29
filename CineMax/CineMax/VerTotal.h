#pragma once
#include "Teatro.h"
#include "Funcion.h"
namespace CineMax {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	static Teatro preciosTeatro;
	static Funcion preciosFuncion;
	/// <summary>
	/// Resumen de VerTotal
	/// </summary>
	public ref class VerTotal : public System::Windows::Forms::Form
	{
	public:
		Form ^ obj;
		VerTotal(Form^ f, Teatro mite)
		{
			obj = f;
			preciosTeatro = mite;
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//

		}


		VerTotal(void)
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
		~VerTotal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  btnVolver;

	private: System::Windows::Forms::Label^  txtFuncion;
	private: System::Windows::Forms::Label^  txtNormal;
	private: System::Windows::Forms::Label^  txtVip;
	private: System::Windows::Forms::Label^  txtPref;
	private: System::Windows::Forms::Label^  txtTotal;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(VerTotal::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnVolver = (gcnew System::Windows::Forms::Button());
			this->txtFuncion = (gcnew System::Windows::Forms::Label());
			this->txtNormal = (gcnew System::Windows::Forms::Label());
			this->txtVip = (gcnew System::Windows::Forms::Label());
			this->txtPref = (gcnew System::Windows::Forms::Label());
			this->txtTotal = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(146, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Función:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(146, 135);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(293, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Total graderia normal:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(146, 263);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(356, 32);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Total graderia preferencial:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(146, 201);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(248, 32);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Total graderia Vip:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(146, 329);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(229, 32);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Total recaudado:";
			// 
			// btnVolver
			// 
			this->btnVolver->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->btnVolver->Location = System::Drawing::Point(433, 411);
			this->btnVolver->Name = L"btnVolver";
			this->btnVolver->Size = System::Drawing::Size(129, 41);
			this->btnVolver->TabIndex = 4;
			this->btnVolver->Text = L"Volver";
			this->btnVolver->UseVisualStyleBackColor = true;
			this->btnVolver->Click += gcnew System::EventHandler(this, &VerTotal::btnVolver_Click);
			// 
			// txtFuncion
			// 
			this->txtFuncion->AutoSize = true;
			this->txtFuncion->BackColor = System::Drawing::Color::Transparent;
			this->txtFuncion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->txtFuncion->ForeColor = System::Drawing::Color::White;
			this->txtFuncion->Location = System::Drawing::Point(287, 71);
			this->txtFuncion->Name = L"txtFuncion";
			this->txtFuncion->Size = System::Drawing::Size(125, 32);
			this->txtFuncion->TabIndex = 5;
			this->txtFuncion->Text = L"Función:";
			// 
			// txtNormal
			// 
			this->txtNormal->AutoSize = true;
			this->txtNormal->BackColor = System::Drawing::Color::Transparent;
			this->txtNormal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->txtNormal->ForeColor = System::Drawing::Color::White;
			this->txtNormal->Location = System::Drawing::Point(454, 135);
			this->txtNormal->Name = L"txtNormal";
			this->txtNormal->Size = System::Drawing::Size(125, 32);
			this->txtNormal->TabIndex = 6;
			this->txtNormal->Text = L"Función:";
			// 
			// txtVip
			// 
			this->txtVip->AutoSize = true;
			this->txtVip->BackColor = System::Drawing::Color::Transparent;
			this->txtVip->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->txtVip->ForeColor = System::Drawing::Color::White;
			this->txtVip->Location = System::Drawing::Point(400, 201);
			this->txtVip->Name = L"txtVip";
			this->txtVip->Size = System::Drawing::Size(125, 32);
			this->txtVip->TabIndex = 7;
			this->txtVip->Text = L"Función:";
			// 
			// txtPref
			// 
			this->txtPref->AutoSize = true;
			this->txtPref->BackColor = System::Drawing::Color::Transparent;
			this->txtPref->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->txtPref->ForeColor = System::Drawing::Color::White;
			this->txtPref->Location = System::Drawing::Point(517, 263);
			this->txtPref->Name = L"txtPref";
			this->txtPref->Size = System::Drawing::Size(125, 32);
			this->txtPref->TabIndex = 8;
			this->txtPref->Text = L"Función:";
			// 
			// txtTotal
			// 
			this->txtTotal->AutoSize = true;
			this->txtTotal->BackColor = System::Drawing::Color::Transparent;
			this->txtTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->txtTotal->ForeColor = System::Drawing::Color::White;
			this->txtTotal->Location = System::Drawing::Point(381, 329);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->Size = System::Drawing::Size(125, 32);
			this->txtTotal->TabIndex = 9;
			this->txtTotal->Text = L"Función:";
			// 
			// VerTotal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(900, 482);
			this->Controls->Add(this->txtTotal);
			this->Controls->Add(this->txtPref);
			this->Controls->Add(this->txtVip);
			this->Controls->Add(this->txtNormal);
			this->Controls->Add(this->txtFuncion);
			this->Controls->Add(this->btnVolver);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"VerTotal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VerTotal";
			this->Load += gcnew System::EventHandler(this, &VerTotal::VerTotal_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
			verPrecios();
		}
#pragma endregion
	private: System::Void VerTotal_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	void verPrecios() {
		Nodo *auxNormal = preciosTeatro.getAsientosNormales().getCabeza();
		Nodo *auxVip = preciosTeatro.getAsientosVip().getTope();
		Nodo *auxPref = preciosTeatro.getAsientosPref().getCabeza();
		int totalNormal = 0;
		int totalVip = 0;
		int totalPref = 0;
		while (auxNormal != NULL) {
			if (auxNormal->getAsiento()->getEstado() == 1) {
				totalNormal = auxNormal->getAsiento()->getPrecio() + totalNormal;
			}
			auxNormal = auxNormal->getSiguiente();
		}

		while (auxVip != NULL) {
			if (auxVip->getAsiento()->getEstado() == 1) {
				totalVip = auxVip->getAsiento()->getPrecio() + totalVip;
			}

			auxVip = auxVip->getSiguiente();
		}

		while (auxPref != NULL) {
			if (auxPref->getAsiento()->getEstado() == 1) {
				totalPref = auxPref->getAsiento()->getPrecio() + totalPref;
			}
			auxPref = auxPref->getSiguiente();
		}

		std::string a = std::to_string(totalNormal);
		std::string b = std::to_string(totalVip);
		std::string c = std::to_string(totalPref);
		int total = totalNormal + totalVip + totalPref;


		std::string d = std::to_string(total);
		String^ precioNormal = gcnew String(a.c_str());
		String^ precioVip = gcnew String(b.c_str());
		String^ precioPref = gcnew String(c.c_str());
		String^ precioTotal = gcnew String(d.c_str());
		this->txtFuncion->Text = "Pulp Fiction";
		this->txtNormal->Text = precioNormal;
		this->txtPref->Text = precioPref;
		this->txtVip->Text = precioVip;
		this->txtTotal->Text = precioTotal;
	}
private: System::Void btnVolver_Click(System::Object^  sender, System::EventArgs^  e) {
	Hide();
	obj->Show();
}
};
}
