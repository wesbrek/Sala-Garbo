#pragma once
#include "Inicio.h"
namespace CineMax {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de index
	/// </summary>
	public ref class index : public System::Windows::Forms::Form
	{
	public:
		index(void)
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
		~index()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  btnIniciar;
	private: System::Windows::Forms::Button^  btnSalir;
	protected:



	protected:

	protected:

	protected:
	private: System::ComponentModel::IContainer^  components;

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(index::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnIniciar = (gcnew System::Windows::Forms::Button());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(187, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(511, 247);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &index::pictureBox1_Click_1);
			// 
			// btnIniciar
			// 
			this->btnIniciar->BackColor = System::Drawing::Color::Transparent;
			this->btnIniciar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnIniciar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIniciar->Location = System::Drawing::Point(383, 284);
			this->btnIniciar->Name = L"btnIniciar";
			this->btnIniciar->Size = System::Drawing::Size(136, 57);
			this->btnIniciar->TabIndex = 1;
			this->btnIniciar->Text = L"Iniciar";
			this->btnIniciar->UseVisualStyleBackColor = false;
			this->btnIniciar->Click += gcnew System::EventHandler(this, &index::metBtnIniciar);
			// 
			// btnSalir
			// 
			this->btnSalir->BackColor = System::Drawing::Color::Transparent;
			this->btnSalir->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSalir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSalir->Location = System::Drawing::Point(383, 361);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(136, 57);
			this->btnSalir->TabIndex = 2;
			this->btnSalir->Text = L"Salir";
			this->btnSalir->UseVisualStyleBackColor = false;
			this->btnSalir->Click += gcnew System::EventHandler(this, &index::metBtnSalir);
			// 
			// index
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(875, 449);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->btnIniciar);
			this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MaximumSize = System::Drawing::Size(893, 496);
			this->MinimumSize = System::Drawing::Size(893, 496);
			this->Name = L"index";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"index";
			this->Load += gcnew System::EventHandler(this, &index::index_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void index_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void metBtnIniciar(System::Object^  sender, System::EventArgs^  e) {
		Hide();
		Inicio ^ f1 = gcnew Inicio();
		f1->Show();
	

	}
	private: System::Void metBtnSalir(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	

	
private: System::Void pictureBox1_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
};
	
}
