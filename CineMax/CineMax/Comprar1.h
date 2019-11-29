#pragma once
#include"Teatro.h"
#include "Funcion.h"
#include "SelecAsientos1.h"
namespace CineMax {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	static Teatro miteatroComprar;
	static Funcion mifuncionComprar = Funcion("Pulp Fiction", "Quentin Tarantino", 154, "+18", "22:00", "1/4/2019");
	/// <summary>
	/// Resumen de Comprar1
	/// </summary>
	public ref class Comprar1 : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		Comprar1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		Comprar1(Form^ _obj, Teatro _miteatro)
		{
			obj = _obj;
			miteatroComprar = _miteatro;
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Comprar1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  nombreCompras;
	private: System::Windows::Forms::Label^  duracionCompras;
	private: System::Windows::Forms::Label^  teatroCompras;
	private: System::Windows::Forms::Label^  fechaCompras;
	private: System::Windows::Forms::Label^  horaCompras;
	private: System::Windows::Forms::Label^  restriccionCompras;








	private: System::Windows::Forms::Label^  directorCompras;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  btnComprar;







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Comprar1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->nombreCompras = (gcnew System::Windows::Forms::Label());
			this->duracionCompras = (gcnew System::Windows::Forms::Label());
			this->teatroCompras = (gcnew System::Windows::Forms::Label());
			this->fechaCompras = (gcnew System::Windows::Forms::Label());
			this->horaCompras = (gcnew System::Windows::Forms::Label());
			this->restriccionCompras = (gcnew System::Windows::Forms::Label());
			this->directorCompras = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnComprar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(61, 149);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(179, 302);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// nombreCompras
			// 
			this->nombreCompras->AutoSize = true;
			this->nombreCompras->BackColor = System::Drawing::Color::Transparent;
			this->nombreCompras->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->nombreCompras->ForeColor = System::Drawing::Color::White;
			this->nombreCompras->Location = System::Drawing::Point(97, 88);
			this->nombreCompras->Name = L"nombreCompras";
			this->nombreCompras->Size = System::Drawing::Size(0, 32);
			this->nombreCompras->TabIndex = 1;
			// 
			// duracionCompras
			// 
			this->duracionCompras->AutoSize = true;
			this->duracionCompras->BackColor = System::Drawing::Color::Transparent;
			this->duracionCompras->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->duracionCompras->ForeColor = System::Drawing::Color::White;
			this->duracionCompras->Location = System::Drawing::Point(370, 195);
			this->duracionCompras->Name = L"duracionCompras";
			this->duracionCompras->Size = System::Drawing::Size(0, 32);
			this->duracionCompras->TabIndex = 3;
			// 
			// teatroCompras
			// 
			this->teatroCompras->AutoSize = true;
			this->teatroCompras->BackColor = System::Drawing::Color::Transparent;
			this->teatroCompras->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->teatroCompras->ForeColor = System::Drawing::Color::White;
			this->teatroCompras->Location = System::Drawing::Point(353, 244);
			this->teatroCompras->Name = L"teatroCompras";
			this->teatroCompras->Size = System::Drawing::Size(0, 32);
			this->teatroCompras->TabIndex = 4;
			// 
			// fechaCompras
			// 
			this->fechaCompras->AutoSize = true;
			this->fechaCompras->BackColor = System::Drawing::Color::Transparent;
			this->fechaCompras->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->fechaCompras->ForeColor = System::Drawing::Color::White;
			this->fechaCompras->Location = System::Drawing::Point(353, 293);
			this->fechaCompras->Name = L"fechaCompras";
			this->fechaCompras->Size = System::Drawing::Size(0, 32);
			this->fechaCompras->TabIndex = 5;
			// 
			// horaCompras
			// 
			this->horaCompras->AutoSize = true;
			this->horaCompras->BackColor = System::Drawing::Color::Transparent;
			this->horaCompras->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->horaCompras->ForeColor = System::Drawing::Color::White;
			this->horaCompras->Location = System::Drawing::Point(353, 339);
			this->horaCompras->Name = L"horaCompras";
			this->horaCompras->Size = System::Drawing::Size(0, 32);
			this->horaCompras->TabIndex = 6;
			// 
			// restriccionCompras
			// 
			this->restriccionCompras->AutoSize = true;
			this->restriccionCompras->BackColor = System::Drawing::Color::Transparent;
			this->restriccionCompras->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->restriccionCompras->ForeColor = System::Drawing::Color::White;
			this->restriccionCompras->Location = System::Drawing::Point(380, 386);
			this->restriccionCompras->Name = L"restriccionCompras";
			this->restriccionCompras->Size = System::Drawing::Size(0, 32);
			this->restriccionCompras->TabIndex = 7;
			// 
			// directorCompras
			// 
			this->directorCompras->AutoSize = true;
			this->directorCompras->BackColor = System::Drawing::Color::Transparent;
			this->directorCompras->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->directorCompras->ForeColor = System::Drawing::Color::White;
			this->directorCompras->Location = System::Drawing::Point(380, 146);
			this->directorCompras->Name = L"directorCompras";
			this->directorCompras->Size = System::Drawing::Size(0, 32);
			this->directorCompras->TabIndex = 2;
			this->directorCompras->Click += gcnew System::EventHandler(this, &Comprar1::directorCompras_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(262, 195);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 32);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Duración:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(262, 386);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(164, 32);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Restriccion:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(262, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(122, 32);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Director:";
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
			this->label4->TabIndex = 11;
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
			this->label5->TabIndex = 12;
			this->label5->Text = L"Fecha:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(262, 339);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 32);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Hora:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->button1->Location = System::Drawing::Point(831, 355);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(134, 46);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Volver";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Comprar1::button1_Click);
			// 
			// btnComprar
			// 
			this->btnComprar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->btnComprar->Location = System::Drawing::Point(831, 268);
			this->btnComprar->Name = L"btnComprar";
			this->btnComprar->Size = System::Drawing::Size(134, 46);
			this->btnComprar->TabIndex = 15;
			this->btnComprar->Text = L"Comprar";
			this->btnComprar->UseVisualStyleBackColor = true;
			this->btnComprar->Click += gcnew System::EventHandler(this, &Comprar1::btnComprar_Click);
			// 
			// Comprar1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1034, 556);
			this->Controls->Add(this->btnComprar);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->restriccionCompras);
			this->Controls->Add(this->horaCompras);
			this->Controls->Add(this->fechaCompras);
			this->Controls->Add(this->teatroCompras);
			this->Controls->Add(this->duracionCompras);
			this->Controls->Add(this->directorCompras);
			this->Controls->Add(this->nombreCompras);
			this->Controls->Add(this->pictureBox1);
			this->MaximumSize = System::Drawing::Size(1052, 603);
			this->MinimumSize = System::Drawing::Size(1052, 603);
			this->Name = L"Comprar1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Comprar1";
			this->Load += gcnew System::EventHandler(this, &Comprar1::Comprar1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
			crearFuncion();
		}
#pragma endregion
	private: System::Void Comprar1_Load(System::Object^  sender, System::EventArgs^  e) {
	}

			 void crearFuncion() {

				 String^ nombre = gcnew String(mifuncionComprar.getNombre().c_str());
				 String^ director = gcnew String(mifuncionComprar.getDirector().c_str());

				 std::string s = std::to_string(mifuncionComprar.getDuracion());
				 String^ duracion = gcnew String(s.c_str());
				 String^ hora = gcnew String(mifuncionComprar.getHora().c_str());
				 String^ fecha = gcnew String(mifuncionComprar.getFecha().c_str());
				 String^ teatro = gcnew String(miteatroComprar.getNombre().c_str());
				 String^ restriccion = gcnew String(mifuncionComprar.getRestriccion().c_str());

				 this->restriccionCompras->Text = restriccion;
				 this->nombreCompras->Text = nombre;
				 this->directorCompras->Text = director;
				 this->duracionCompras->Text = duracion;
				 this->fechaCompras->Text = fecha;
				 this->horaCompras->Text = hora;
				 this->teatroCompras->Text = teatro;

			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Hide();
	obj->Show();

}
private: System::Void directorCompras_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnComprar_Click(System::Object^  sender, System::EventArgs^  e) {
	Hide();
	SelecAsientos1^ res = gcnew SelecAsientos1(mifuncionComprar, miteatroComprar, obj);

	res->ShowDialog();
}
};
}
