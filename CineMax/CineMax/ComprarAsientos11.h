#pragma once
#include "Funcion.h"
#include "Teatro.h"
#include "GeneracionBoleto.h"
#include <msclr\marshal_cppstd.h>
namespace CineMax {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	static Teatro miteatroComprarAsientos;
	static Funcion mifuncionComprarAsientos;
	static PilaAsientos pilaAux;
	static int contadorAsientos = 1;
	static int cantAsientos;
	static PilaAsientos pilaAsientosVip;
	static PilaAsientos pilaValidarVip;
	static PilaAsientos pilaValidarAux;
	static int valReserv = 0;

	/// <summary>
	/// Resumen de ComprarAsientos11
	/// </summary>
	public ref class ComprarAsientos11 : public System::Windows::Forms::Form
	{
	public:
		Form ^ obj;
		Form ^ inicio;
	private: System::Windows::Forms::PictureBox^  vipSit5;
	public:
	private: System::Windows::Forms::PictureBox^  vipSit4;
	private: System::Windows::Forms::PictureBox^  vipSit3;
	private: System::Windows::Forms::PictureBox^  vipSit2;
	private: System::Windows::Forms::PictureBox^  vipSit1;
	private: System::Windows::Forms::PictureBox^  vipSit10;
	private: System::Windows::Forms::PictureBox^  vipSit9;
	private: System::Windows::Forms::PictureBox^  vipSit8;
	private: System::Windows::Forms::PictureBox^  vipSit7;
	private: System::Windows::Forms::PictureBox^  vipSit6;
	private: System::Windows::Forms::PictureBox^  vipSit15;

	private: System::Windows::Forms::PictureBox^  vipSit14;

	private: System::Windows::Forms::PictureBox^  vipSit13;

	private: System::Windows::Forms::PictureBox^  vipSit12;


	private: System::Windows::Forms::PictureBox^  vipSit11;
	private: System::Windows::Forms::PictureBox^  vipSit20;


	private: System::Windows::Forms::PictureBox^  vipSit19;

	private: System::Windows::Forms::PictureBox^  vipSit18;

	private: System::Windows::Forms::PictureBox^  vipSit17;

	private: System::Windows::Forms::PictureBox^  vipSit16;
	private: System::Windows::Forms::PictureBox^  vipSit25;


	private: System::Windows::Forms::PictureBox^  vipSit24;

	private: System::Windows::Forms::PictureBox^  vipSit23;
	private: System::Windows::Forms::PictureBox^  vipSit22;


	private: System::Windows::Forms::PictureBox^  vipSit21;
	private: System::Windows::Forms::PictureBox^  vipSit30;


	private: System::Windows::Forms::PictureBox^  vipSit29;

	private: System::Windows::Forms::PictureBox^  vipSit28;

	private: System::Windows::Forms::PictureBox^  vipSit27;

	private: System::Windows::Forms::PictureBox^  vipSit26;
	private: System::Windows::Forms::PictureBox^  vipSit35;


	private: System::Windows::Forms::PictureBox^  vipSit34;

	private: System::Windows::Forms::PictureBox^  vipSit33;

	private: System::Windows::Forms::PictureBox^  vipSit32;

	private: System::Windows::Forms::PictureBox^  vipSit31;
	private: System::Windows::Forms::PictureBox^  vipSit40;


	private: System::Windows::Forms::PictureBox^  vipSit39;

	private: System::Windows::Forms::PictureBox^  vipSit38;

	private: System::Windows::Forms::PictureBox^  vipSit37;

	private: System::Windows::Forms::PictureBox^  vipSit36;
	private: System::Windows::Forms::PictureBox^  vipSit45;


	private: System::Windows::Forms::PictureBox^  vipSit44;

	private: System::Windows::Forms::PictureBox^  vipSit43;

	private: System::Windows::Forms::PictureBox^  vipSit42;

	private: System::Windows::Forms::PictureBox^  vipSit41;
	private: System::Windows::Forms::PictureBox^  vipSit50;


	private: System::Windows::Forms::PictureBox^  vipSit49;

	private: System::Windows::Forms::PictureBox^  vipSit48;

	private: System::Windows::Forms::PictureBox^  vipSit47;

	private: System::Windows::Forms::PictureBox^  vipSit46;
	private: System::Windows::Forms::PictureBox^  prefSit10;

	private: System::Windows::Forms::PictureBox^  prefSit9;

	private: System::Windows::Forms::PictureBox^  prefSit8;

	private: System::Windows::Forms::PictureBox^  prefSit7;

	private: System::Windows::Forms::PictureBox^  prefSit6;

	private: System::Windows::Forms::PictureBox^  prefSit5;

private: System::Windows::Forms::PictureBox^  prefSit4;

private: System::Windows::Forms::PictureBox^  prefSit3;

private: System::Windows::Forms::PictureBox^  prefSit2;

private: System::Windows::Forms::PictureBox^  prefSit1;

	private: System::Windows::Forms::PictureBox^  pictureBox14;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::PictureBox^  pictureBox4;

			 String^ cedula;
		ComprarAsientos11(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	public : ComprarAsientos11(Teatro miteatro, Funcion _mifucion, int _asientos, Form^ _obj, Form^ _anterior, String^ s)
		{
			miteatroComprarAsientos = miteatro;
			mifuncionComprarAsientos = _mifucion;
			cantAsientos = _asientos;
			obj = _anterior;
			inicio = _obj;
			cedula = s;
			pilaAsientosVip = miteatro.getAsientosVip();
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

			 public: ComprarAsientos11(Teatro miteatro, Funcion _mifucion, int _asientos, Form^ _obj, Form^ _anterior, String^ s, int res)
			 {
				 miteatroComprarAsientos = miteatro;
				 mifuncionComprarAsientos = _mifucion;
				 cantAsientos = _asientos;
				 obj = _anterior;
				 inicio = _obj;
				 cedula = s;
				 pilaAsientosVip = miteatro.getAsientosVip();
				 valReserv = res;
				InitializeComponent();
				 //
				 //TODO: agregar código de constructor aquí
				 //
			 }

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ComprarAsientos11()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  normalSit1;
	private: System::Windows::Forms::PictureBox^  normalSit2;
	private: System::Windows::Forms::PictureBox^  normalSit3;
	private: System::Windows::Forms::PictureBox^  normalSit4;
	private: System::Windows::Forms::PictureBox^  normalSit5;
	private: System::Windows::Forms::PictureBox^  normalSit6;
	private: System::Windows::Forms::PictureBox^  normalSit7;
	private: System::Windows::Forms::PictureBox^  normalSit8;
	private: System::Windows::Forms::PictureBox^  normalSit9;
	private: System::Windows::Forms::PictureBox^  normalSit10;
	protected:

	protected:










	protected:
	internal:
		ImageList ^ ImageList1;
	private: System::Windows::Forms::Button^  btnVolver;
	private: System::Windows::Forms::PictureBox^  normalSit20;
	private: System::Windows::Forms::PictureBox^  normalSit19;
	private: System::Windows::Forms::PictureBox^  normalSit18;

	private: System::Windows::Forms::PictureBox^  normalSit17;
	private: System::Windows::Forms::PictureBox^  normalSit16;
	private: System::Windows::Forms::PictureBox^  normalSit15;
	private: System::Windows::Forms::PictureBox^  normalSit14;
	private: System::Windows::Forms::PictureBox^  normalSit13;
	private: System::Windows::Forms::PictureBox^  normalSit12;
	private: System::Windows::Forms::PictureBox^  normalSit11;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::PictureBox^  normalSit40;

	private: System::Windows::Forms::PictureBox^  normalSit39;

	private: System::Windows::Forms::PictureBox^  normalSit38;

	private: System::Windows::Forms::PictureBox^  normalSit37;

	private: System::Windows::Forms::PictureBox^  normalSit36;

	private: System::Windows::Forms::PictureBox^  normalSit35;

	private: System::Windows::Forms::PictureBox^  normalSit34;

	private: System::Windows::Forms::PictureBox^  normalSit33;

	private: System::Windows::Forms::PictureBox^  normalSit32;

	private: System::Windows::Forms::PictureBox^  normalSit31;

	private: System::Windows::Forms::PictureBox^  normalSit30;

	private: System::Windows::Forms::PictureBox^  normalSit29;

	private: System::Windows::Forms::PictureBox^  normalSit28;

	private: System::Windows::Forms::PictureBox^  normalSit27;

	private: System::Windows::Forms::PictureBox^  normalSit26;

	private: System::Windows::Forms::PictureBox^  normalSit25;

	private: System::Windows::Forms::PictureBox^  normalSit24;

	private: System::Windows::Forms::PictureBox^  normalSit23;

	private: System::Windows::Forms::PictureBox^  normalSit22;

	private: System::Windows::Forms::PictureBox^  normalSit21;


private: System::Windows::Forms::PictureBox^  normalSit50;











private: System::Windows::Forms::PictureBox^  normalSit49;

private: System::Windows::Forms::PictureBox^  normalSit48;

private: System::Windows::Forms::PictureBox^  normalSit47;

private: System::Windows::Forms::PictureBox^  normalSit46;

private: System::Windows::Forms::PictureBox^  normalSit45;

private: System::Windows::Forms::PictureBox^  normalSit44;

private: System::Windows::Forms::PictureBox^  normalSit43;

private: System::Windows::Forms::PictureBox^  normalSit42;

private: System::Windows::Forms::PictureBox^  normalSit41;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: System::Windows::Forms::Button^  button1;



	internal:
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ComprarAsientos11::typeid));
			this->normalSit1 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit2 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit3 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit4 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit5 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit6 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit7 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit8 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit9 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit10 = (gcnew System::Windows::Forms::PictureBox());
			this->btnVolver = (gcnew System::Windows::Forms::Button());
			this->normalSit20 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit19 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit18 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit17 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit16 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit15 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit14 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit13 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit12 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit11 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->normalSit40 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit39 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit38 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit37 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit36 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit35 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit34 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit33 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit32 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit31 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit30 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit29 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit28 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit27 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit26 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit25 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit24 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit23 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit22 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit21 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit50 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit49 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit48 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit47 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit46 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit45 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit44 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit43 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit42 = (gcnew System::Windows::Forms::PictureBox());
			this->normalSit41 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->vipSit5 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit4 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit3 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit2 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit1 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit10 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit9 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit8 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit7 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit6 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit15 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit14 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit13 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit12 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit11 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit20 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit19 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit18 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit17 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit16 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit25 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit24 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit23 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit22 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit21 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit30 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit29 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit28 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit27 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit26 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit35 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit34 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit33 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit32 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit31 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit40 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit39 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit38 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit37 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit36 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit45 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit44 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit43 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit42 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit41 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit50 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit49 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit48 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit47 = (gcnew System::Windows::Forms::PictureBox());
			this->vipSit46 = (gcnew System::Windows::Forms::PictureBox());
			this->prefSit10 = (gcnew System::Windows::Forms::PictureBox());
			this->prefSit9 = (gcnew System::Windows::Forms::PictureBox());
			this->prefSit8 = (gcnew System::Windows::Forms::PictureBox());
			this->prefSit7 = (gcnew System::Windows::Forms::PictureBox());
			this->prefSit6 = (gcnew System::Windows::Forms::PictureBox());
			this->prefSit5 = (gcnew System::Windows::Forms::PictureBox());
			this->prefSit4 = (gcnew System::Windows::Forms::PictureBox());
			this->prefSit3 = (gcnew System::Windows::Forms::PictureBox());
			this->prefSit2 = (gcnew System::Windows::Forms::PictureBox());
			this->prefSit1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prefSit10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prefSit9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prefSit8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prefSit7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prefSit6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prefSit5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prefSit4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prefSit3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prefSit2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prefSit1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// normalSit1
			// 
			this->normalSit1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit1.BackgroundImage")));
			this->normalSit1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit1->Location = System::Drawing::Point(852, 683);
			this->normalSit1->Name = L"normalSit1";
			this->normalSit1->Size = System::Drawing::Size(33, 36);
			this->normalSit1->TabIndex = 0;
			this->normalSit1->TabStop = false;
			this->normalSit1->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit1_Click);
			// 
			// normalSit2
			// 
			this->normalSit2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit2.BackgroundImage")));
			this->normalSit2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit2->Location = System::Drawing::Point(813, 683);
			this->normalSit2->Name = L"normalSit2";
			this->normalSit2->Size = System::Drawing::Size(33, 36);
			this->normalSit2->TabIndex = 1;
			this->normalSit2->TabStop = false;
			this->normalSit2->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit2_Click);
			// 
			// normalSit3
			// 
			this->normalSit3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit3.BackgroundImage")));
			this->normalSit3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit3->Location = System::Drawing::Point(774, 683);
			this->normalSit3->Name = L"normalSit3";
			this->normalSit3->Size = System::Drawing::Size(33, 36);
			this->normalSit3->TabIndex = 2;
			this->normalSit3->TabStop = false;
			this->normalSit3->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit3_Click);
			// 
			// normalSit4
			// 
			this->normalSit4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit4.BackgroundImage")));
			this->normalSit4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit4->Location = System::Drawing::Point(735, 683);
			this->normalSit4->Name = L"normalSit4";
			this->normalSit4->Size = System::Drawing::Size(33, 36);
			this->normalSit4->TabIndex = 3;
			this->normalSit4->TabStop = false;
			this->normalSit4->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit4_Click);
			// 
			// normalSit5
			// 
			this->normalSit5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit5.BackgroundImage")));
			this->normalSit5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit5->Location = System::Drawing::Point(696, 683);
			this->normalSit5->Name = L"normalSit5";
			this->normalSit5->Size = System::Drawing::Size(33, 36);
			this->normalSit5->TabIndex = 4;
			this->normalSit5->TabStop = false;
			this->normalSit5->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit5_Click);
			// 
			// normalSit6
			// 
			this->normalSit6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit6.BackgroundImage")));
			this->normalSit6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit6->Location = System::Drawing::Point(657, 683);
			this->normalSit6->Name = L"normalSit6";
			this->normalSit6->Size = System::Drawing::Size(33, 36);
			this->normalSit6->TabIndex = 5;
			this->normalSit6->TabStop = false;
			this->normalSit6->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit6_Click);
			// 
			// normalSit7
			// 
			this->normalSit7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit7.BackgroundImage")));
			this->normalSit7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit7->Location = System::Drawing::Point(618, 683);
			this->normalSit7->Name = L"normalSit7";
			this->normalSit7->Size = System::Drawing::Size(33, 36);
			this->normalSit7->TabIndex = 6;
			this->normalSit7->TabStop = false;
			this->normalSit7->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit7_Click);
			// 
			// normalSit8
			// 
			this->normalSit8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit8.BackgroundImage")));
			this->normalSit8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit8->Location = System::Drawing::Point(579, 683);
			this->normalSit8->Name = L"normalSit8";
			this->normalSit8->Size = System::Drawing::Size(33, 36);
			this->normalSit8->TabIndex = 7;
			this->normalSit8->TabStop = false;
			this->normalSit8->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit8_Click);
			// 
			// normalSit9
			// 
			this->normalSit9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit9.BackgroundImage")));
			this->normalSit9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit9->Location = System::Drawing::Point(540, 683);
			this->normalSit9->Name = L"normalSit9";
			this->normalSit9->Size = System::Drawing::Size(33, 36);
			this->normalSit9->TabIndex = 8;
			this->normalSit9->TabStop = false;
			this->normalSit9->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit9_Click);
			// 
			// normalSit10
			// 
			this->normalSit10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit10.BackgroundImage")));
			this->normalSit10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit10->Location = System::Drawing::Point(501, 683);
			this->normalSit10->Name = L"normalSit10";
			this->normalSit10->Size = System::Drawing::Size(33, 36);
			this->normalSit10->TabIndex = 9;
			this->normalSit10->TabStop = false;
			this->normalSit10->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit10_Click);
			// 
			// btnVolver
			// 
			this->btnVolver->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->btnVolver->Location = System::Drawing::Point(1096, 557);
			this->btnVolver->Name = L"btnVolver";
			this->btnVolver->Size = System::Drawing::Size(160, 53);
			this->btnVolver->TabIndex = 10;
			this->btnVolver->Text = L"Siguiente";
			this->btnVolver->UseVisualStyleBackColor = true;
			this->btnVolver->Click += gcnew System::EventHandler(this, &ComprarAsientos11::btnVolver_Click);
			// 
			// normalSit20
			// 
			this->normalSit20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit20.BackgroundImage")));
			this->normalSit20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit20->Location = System::Drawing::Point(501, 641);
			this->normalSit20->Name = L"normalSit20";
			this->normalSit20->Size = System::Drawing::Size(33, 36);
			this->normalSit20->TabIndex = 20;
			this->normalSit20->TabStop = false;
			this->normalSit20->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit20_Click);
			// 
			// normalSit19
			// 
			this->normalSit19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit19.BackgroundImage")));
			this->normalSit19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit19->Location = System::Drawing::Point(540, 641);
			this->normalSit19->Name = L"normalSit19";
			this->normalSit19->Size = System::Drawing::Size(33, 36);
			this->normalSit19->TabIndex = 19;
			this->normalSit19->TabStop = false;
			this->normalSit19->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit19_Click);
			// 
			// normalSit18
			// 
			this->normalSit18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit18.BackgroundImage")));
			this->normalSit18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit18->Location = System::Drawing::Point(579, 641);
			this->normalSit18->Name = L"normalSit18";
			this->normalSit18->Size = System::Drawing::Size(33, 36);
			this->normalSit18->TabIndex = 18;
			this->normalSit18->TabStop = false;
			this->normalSit18->Click += gcnew System::EventHandler(this, &ComprarAsientos11::pictureBox3_Click);
			// 
			// normalSit17
			// 
			this->normalSit17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit17.BackgroundImage")));
			this->normalSit17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit17->Location = System::Drawing::Point(618, 641);
			this->normalSit17->Name = L"normalSit17";
			this->normalSit17->Size = System::Drawing::Size(33, 36);
			this->normalSit17->TabIndex = 17;
			this->normalSit17->TabStop = false;
			this->normalSit17->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit17_Click);
			// 
			// normalSit16
			// 
			this->normalSit16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit16.BackgroundImage")));
			this->normalSit16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit16->Location = System::Drawing::Point(657, 641);
			this->normalSit16->Name = L"normalSit16";
			this->normalSit16->Size = System::Drawing::Size(33, 36);
			this->normalSit16->TabIndex = 16;
			this->normalSit16->TabStop = false;
			this->normalSit16->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit16_Click);
			// 
			// normalSit15
			// 
			this->normalSit15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit15.BackgroundImage")));
			this->normalSit15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit15->Location = System::Drawing::Point(696, 641);
			this->normalSit15->Name = L"normalSit15";
			this->normalSit15->Size = System::Drawing::Size(33, 36);
			this->normalSit15->TabIndex = 15;
			this->normalSit15->TabStop = false;
			this->normalSit15->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit15_Click);
			// 
			// normalSit14
			// 
			this->normalSit14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit14.BackgroundImage")));
			this->normalSit14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit14->Location = System::Drawing::Point(735, 641);
			this->normalSit14->Name = L"normalSit14";
			this->normalSit14->Size = System::Drawing::Size(33, 36);
			this->normalSit14->TabIndex = 14;
			this->normalSit14->TabStop = false;
			this->normalSit14->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit14_Click);
			// 
			// normalSit13
			// 
			this->normalSit13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit13.BackgroundImage")));
			this->normalSit13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit13->Location = System::Drawing::Point(774, 641);
			this->normalSit13->Name = L"normalSit13";
			this->normalSit13->Size = System::Drawing::Size(33, 36);
			this->normalSit13->TabIndex = 13;
			this->normalSit13->TabStop = false;
			this->normalSit13->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit13_Click);
			// 
			// normalSit12
			// 
			this->normalSit12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit12.BackgroundImage")));
			this->normalSit12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit12->Location = System::Drawing::Point(813, 641);
			this->normalSit12->Name = L"normalSit12";
			this->normalSit12->Size = System::Drawing::Size(33, 36);
			this->normalSit12->TabIndex = 12;
			this->normalSit12->TabStop = false;
			this->normalSit12->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit12_Click);
			// 
			// normalSit11
			// 
			this->normalSit11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit11.BackgroundImage")));
			this->normalSit11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit11->Location = System::Drawing::Point(852, 641);
			this->normalSit11->Name = L"normalSit11";
			this->normalSit11->Size = System::Drawing::Size(33, 36);
			this->normalSit11->TabIndex = 11;
			this->normalSit11->TabStop = false;
			this->normalSit11->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit11_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 564);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(242, 29);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Asientos disponibles:";
			// 
			// normalSit40
			// 
			this->normalSit40->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit40.BackgroundImage")));
			this->normalSit40->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit40->Location = System::Drawing::Point(501, 557);
			this->normalSit40->Name = L"normalSit40";
			this->normalSit40->Size = System::Drawing::Size(33, 36);
			this->normalSit40->TabIndex = 41;
			this->normalSit40->TabStop = false;
			this->normalSit40->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit40_Click);
			// 
			// normalSit39
			// 
			this->normalSit39->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit39.BackgroundImage")));
			this->normalSit39->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit39->Location = System::Drawing::Point(540, 557);
			this->normalSit39->Name = L"normalSit39";
			this->normalSit39->Size = System::Drawing::Size(33, 36);
			this->normalSit39->TabIndex = 40;
			this->normalSit39->TabStop = false;
			this->normalSit39->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit39_Click);
			// 
			// normalSit38
			// 
			this->normalSit38->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit38.BackgroundImage")));
			this->normalSit38->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit38->Location = System::Drawing::Point(579, 557);
			this->normalSit38->Name = L"normalSit38";
			this->normalSit38->Size = System::Drawing::Size(33, 36);
			this->normalSit38->TabIndex = 39;
			this->normalSit38->TabStop = false;
			this->normalSit38->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit38_Click);
			// 
			// normalSit37
			// 
			this->normalSit37->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit37.BackgroundImage")));
			this->normalSit37->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit37->Location = System::Drawing::Point(618, 557);
			this->normalSit37->Name = L"normalSit37";
			this->normalSit37->Size = System::Drawing::Size(33, 36);
			this->normalSit37->TabIndex = 38;
			this->normalSit37->TabStop = false;
			this->normalSit37->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit37_Click);
			// 
			// normalSit36
			// 
			this->normalSit36->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit36.BackgroundImage")));
			this->normalSit36->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit36->Location = System::Drawing::Point(657, 557);
			this->normalSit36->Name = L"normalSit36";
			this->normalSit36->Size = System::Drawing::Size(33, 36);
			this->normalSit36->TabIndex = 37;
			this->normalSit36->TabStop = false;
			this->normalSit36->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit36_Click);
			// 
			// normalSit35
			// 
			this->normalSit35->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit35.BackgroundImage")));
			this->normalSit35->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit35->Location = System::Drawing::Point(696, 557);
			this->normalSit35->Name = L"normalSit35";
			this->normalSit35->Size = System::Drawing::Size(33, 36);
			this->normalSit35->TabIndex = 36;
			this->normalSit35->TabStop = false;
			this->normalSit35->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit35_Click);
			// 
			// normalSit34
			// 
			this->normalSit34->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit34.BackgroundImage")));
			this->normalSit34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit34->Location = System::Drawing::Point(735, 557);
			this->normalSit34->Name = L"normalSit34";
			this->normalSit34->Size = System::Drawing::Size(33, 36);
			this->normalSit34->TabIndex = 35;
			this->normalSit34->TabStop = false;
			this->normalSit34->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit34_Click);
			// 
			// normalSit33
			// 
			this->normalSit33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit33.BackgroundImage")));
			this->normalSit33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit33->Location = System::Drawing::Point(774, 557);
			this->normalSit33->Name = L"normalSit33";
			this->normalSit33->Size = System::Drawing::Size(33, 36);
			this->normalSit33->TabIndex = 34;
			this->normalSit33->TabStop = false;
			this->normalSit33->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit33_Click);
			// 
			// normalSit32
			// 
			this->normalSit32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit32.BackgroundImage")));
			this->normalSit32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit32->Location = System::Drawing::Point(813, 557);
			this->normalSit32->Name = L"normalSit32";
			this->normalSit32->Size = System::Drawing::Size(33, 36);
			this->normalSit32->TabIndex = 33;
			this->normalSit32->TabStop = false;
			this->normalSit32->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit32_Click);
			// 
			// normalSit31
			// 
			this->normalSit31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit31.BackgroundImage")));
			this->normalSit31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit31->Location = System::Drawing::Point(852, 557);
			this->normalSit31->Name = L"normalSit31";
			this->normalSit31->Size = System::Drawing::Size(33, 36);
			this->normalSit31->TabIndex = 32;
			this->normalSit31->TabStop = false;
			this->normalSit31->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit31_Click);
			// 
			// normalSit30
			// 
			this->normalSit30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit30.BackgroundImage")));
			this->normalSit30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit30->Location = System::Drawing::Point(501, 599);
			this->normalSit30->Name = L"normalSit30";
			this->normalSit30->Size = System::Drawing::Size(33, 36);
			this->normalSit30->TabIndex = 31;
			this->normalSit30->TabStop = false;
			this->normalSit30->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit30_Click);
			// 
			// normalSit29
			// 
			this->normalSit29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit29.BackgroundImage")));
			this->normalSit29->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit29->Location = System::Drawing::Point(540, 599);
			this->normalSit29->Name = L"normalSit29";
			this->normalSit29->Size = System::Drawing::Size(33, 36);
			this->normalSit29->TabIndex = 30;
			this->normalSit29->TabStop = false;
			this->normalSit29->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit29_Click);
			// 
			// normalSit28
			// 
			this->normalSit28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit28.BackgroundImage")));
			this->normalSit28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit28->Location = System::Drawing::Point(579, 599);
			this->normalSit28->Name = L"normalSit28";
			this->normalSit28->Size = System::Drawing::Size(33, 36);
			this->normalSit28->TabIndex = 29;
			this->normalSit28->TabStop = false;
			this->normalSit28->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit28_Click);
			// 
			// normalSit27
			// 
			this->normalSit27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit27.BackgroundImage")));
			this->normalSit27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit27->Location = System::Drawing::Point(618, 599);
			this->normalSit27->Name = L"normalSit27";
			this->normalSit27->Size = System::Drawing::Size(33, 36);
			this->normalSit27->TabIndex = 28;
			this->normalSit27->TabStop = false;
			this->normalSit27->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit27_Click);
			// 
			// normalSit26
			// 
			this->normalSit26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit26.BackgroundImage")));
			this->normalSit26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit26->Location = System::Drawing::Point(657, 599);
			this->normalSit26->Name = L"normalSit26";
			this->normalSit26->Size = System::Drawing::Size(33, 36);
			this->normalSit26->TabIndex = 27;
			this->normalSit26->TabStop = false;
			this->normalSit26->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit26_Click);
			// 
			// normalSit25
			// 
			this->normalSit25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit25.BackgroundImage")));
			this->normalSit25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit25->Location = System::Drawing::Point(696, 599);
			this->normalSit25->Name = L"normalSit25";
			this->normalSit25->Size = System::Drawing::Size(33, 36);
			this->normalSit25->TabIndex = 26;
			this->normalSit25->TabStop = false;
			this->normalSit25->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit25_Click);
			// 
			// normalSit24
			// 
			this->normalSit24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit24.BackgroundImage")));
			this->normalSit24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit24->Location = System::Drawing::Point(735, 599);
			this->normalSit24->Name = L"normalSit24";
			this->normalSit24->Size = System::Drawing::Size(33, 36);
			this->normalSit24->TabIndex = 25;
			this->normalSit24->TabStop = false;
			this->normalSit24->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit24_Click);
			// 
			// normalSit23
			// 
			this->normalSit23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit23.BackgroundImage")));
			this->normalSit23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit23->Location = System::Drawing::Point(774, 599);
			this->normalSit23->Name = L"normalSit23";
			this->normalSit23->Size = System::Drawing::Size(33, 36);
			this->normalSit23->TabIndex = 24;
			this->normalSit23->TabStop = false;
			this->normalSit23->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit23_Click);
			// 
			// normalSit22
			// 
			this->normalSit22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit22.BackgroundImage")));
			this->normalSit22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit22->Location = System::Drawing::Point(813, 599);
			this->normalSit22->Name = L"normalSit22";
			this->normalSit22->Size = System::Drawing::Size(33, 36);
			this->normalSit22->TabIndex = 23;
			this->normalSit22->TabStop = false;
			this->normalSit22->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit22_Click);
			// 
			// normalSit21
			// 
			this->normalSit21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit21.BackgroundImage")));
			this->normalSit21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit21->Location = System::Drawing::Point(852, 599);
			this->normalSit21->Name = L"normalSit21";
			this->normalSit21->Size = System::Drawing::Size(33, 36);
			this->normalSit21->TabIndex = 22;
			this->normalSit21->TabStop = false;
			this->normalSit21->Click += gcnew System::EventHandler(this, &ComprarAsientos11::normalSit21_Click);
			// 
			// normalSit50
			// 
			this->normalSit50->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit50.BackgroundImage")));
			this->normalSit50->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit50->Location = System::Drawing::Point(501, 515);
			this->normalSit50->Name = L"normalSit50";
			this->normalSit50->Size = System::Drawing::Size(33, 36);
			this->normalSit50->TabIndex = 52;
			this->normalSit50->TabStop = false;
			this->normalSit50->Click += gcnew System::EventHandler(this, &ComprarAsientos11::pictureBox31_Click);
			// 
			// normalSit49
			// 
			this->normalSit49->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit49.BackgroundImage")));
			this->normalSit49->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit49->Location = System::Drawing::Point(540, 515);
			this->normalSit49->Name = L"normalSit49";
			this->normalSit49->Size = System::Drawing::Size(33, 36);
			this->normalSit49->TabIndex = 51;
			this->normalSit49->TabStop = false;
			this->normalSit49->Click += gcnew System::EventHandler(this, &ComprarAsientos11::pictureBox32_Click);
			// 
			// normalSit48
			// 
			this->normalSit48->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit48.BackgroundImage")));
			this->normalSit48->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit48->Location = System::Drawing::Point(579, 515);
			this->normalSit48->Name = L"normalSit48";
			this->normalSit48->Size = System::Drawing::Size(33, 36);
			this->normalSit48->TabIndex = 50;
			this->normalSit48->TabStop = false;
			this->normalSit48->Click += gcnew System::EventHandler(this, &ComprarAsientos11::pictureBox33_Click);
			// 
			// normalSit47
			// 
			this->normalSit47->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit47.BackgroundImage")));
			this->normalSit47->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit47->Location = System::Drawing::Point(618, 515);
			this->normalSit47->Name = L"normalSit47";
			this->normalSit47->Size = System::Drawing::Size(33, 36);
			this->normalSit47->TabIndex = 49;
			this->normalSit47->TabStop = false;
			this->normalSit47->Click += gcnew System::EventHandler(this, &ComprarAsientos11::pictureBox34_Click);
			// 
			// normalSit46
			// 
			this->normalSit46->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit46.BackgroundImage")));
			this->normalSit46->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit46->Location = System::Drawing::Point(657, 515);
			this->normalSit46->Name = L"normalSit46";
			this->normalSit46->Size = System::Drawing::Size(33, 36);
			this->normalSit46->TabIndex = 48;
			this->normalSit46->TabStop = false;
			this->normalSit46->Click += gcnew System::EventHandler(this, &ComprarAsientos11::pictureBox35_Click);
			// 
			// normalSit45
			// 
			this->normalSit45->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit45.BackgroundImage")));
			this->normalSit45->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit45->Location = System::Drawing::Point(696, 515);
			this->normalSit45->Name = L"normalSit45";
			this->normalSit45->Size = System::Drawing::Size(33, 36);
			this->normalSit45->TabIndex = 47;
			this->normalSit45->TabStop = false;
			this->normalSit45->Click += gcnew System::EventHandler(this, &ComprarAsientos11::pictureBox36_Click);
			// 
			// normalSit44
			// 
			this->normalSit44->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit44.BackgroundImage")));
			this->normalSit44->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit44->Location = System::Drawing::Point(735, 515);
			this->normalSit44->Name = L"normalSit44";
			this->normalSit44->Size = System::Drawing::Size(33, 36);
			this->normalSit44->TabIndex = 46;
			this->normalSit44->TabStop = false;
			this->normalSit44->Click += gcnew System::EventHandler(this, &ComprarAsientos11::pictureBox37_Click);
			// 
			// normalSit43
			// 
			this->normalSit43->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit43.BackgroundImage")));
			this->normalSit43->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit43->Location = System::Drawing::Point(774, 515);
			this->normalSit43->Name = L"normalSit43";
			this->normalSit43->Size = System::Drawing::Size(33, 36);
			this->normalSit43->TabIndex = 45;
			this->normalSit43->TabStop = false;
			this->normalSit43->Click += gcnew System::EventHandler(this, &ComprarAsientos11::pictureBox38_Click);
			// 
			// normalSit42
			// 
			this->normalSit42->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit42.BackgroundImage")));
			this->normalSit42->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit42->Location = System::Drawing::Point(813, 515);
			this->normalSit42->Name = L"normalSit42";
			this->normalSit42->Size = System::Drawing::Size(33, 36);
			this->normalSit42->TabIndex = 44;
			this->normalSit42->TabStop = false;
			this->normalSit42->Click += gcnew System::EventHandler(this, &ComprarAsientos11::pictureBox39_Click);
			// 
			// normalSit41
			// 
			this->normalSit41->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"normalSit41.BackgroundImage")));
			this->normalSit41->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->normalSit41->Location = System::Drawing::Point(852, 515);
			this->normalSit41->Name = L"normalSit41";
			this->normalSit41->Size = System::Drawing::Size(33, 36);
			this->normalSit41->TabIndex = 43;
			this->normalSit41->TabStop = false;
			this->normalSit41->Click += gcnew System::EventHandler(this, &ComprarAsientos11::pictureBox40_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(12, 619);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(223, 29);
			this->label2->TabIndex = 53;
			this->label2->Text = L"Asientos ocupados:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(12, 668);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(273, 29);
			this->label3->TabIndex = 54;
			this->label3->Text = L"Asientos seleccionados:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(299, 564);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(25, 27);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 55;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(299, 619);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(25, 27);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 56;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(299, 670);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(25, 27);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 57;
			this->pictureBox3->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F));
			this->button1->Location = System::Drawing::Point(1096, 654);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 53);
			this->button1->TabIndex = 58;
			this->button1->Text = L"Volver";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ComprarAsientos11::button1_Click);
			// 
			// vipSit5
			// 
			this->vipSit5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit5.BackgroundImage")));
			this->vipSit5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit5->Location = System::Drawing::Point(735, 426);
			this->vipSit5->Name = L"vipSit5";
			this->vipSit5->Size = System::Drawing::Size(33, 36);
			this->vipSit5->TabIndex = 63;
			this->vipSit5->TabStop = false;
			this->vipSit5->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit5_Click);
			// 
			// vipSit4
			// 
			this->vipSit4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit4.BackgroundImage")));
			this->vipSit4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit4->Location = System::Drawing::Point(774, 426);
			this->vipSit4->Name = L"vipSit4";
			this->vipSit4->Size = System::Drawing::Size(33, 36);
			this->vipSit4->TabIndex = 62;
			this->vipSit4->TabStop = false;
			this->vipSit4->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit4_Click);
			// 
			// vipSit3
			// 
			this->vipSit3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit3.BackgroundImage")));
			this->vipSit3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit3->Location = System::Drawing::Point(813, 426);
			this->vipSit3->Name = L"vipSit3";
			this->vipSit3->Size = System::Drawing::Size(33, 36);
			this->vipSit3->TabIndex = 61;
			this->vipSit3->TabStop = false;
			this->vipSit3->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit3_Click);
			// 
			// vipSit2
			// 
			this->vipSit2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit2.BackgroundImage")));
			this->vipSit2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit2->Location = System::Drawing::Point(852, 426);
			this->vipSit2->Name = L"vipSit2";
			this->vipSit2->Size = System::Drawing::Size(33, 36);
			this->vipSit2->TabIndex = 60;
			this->vipSit2->TabStop = false;
			this->vipSit2->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit2_Click);
			// 
			// vipSit1
			// 
			this->vipSit1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit1.BackgroundImage")));
			this->vipSit1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit1->Location = System::Drawing::Point(891, 426);
			this->vipSit1->Name = L"vipSit1";
			this->vipSit1->Size = System::Drawing::Size(33, 36);
			this->vipSit1->TabIndex = 59;
			this->vipSit1->TabStop = false;
			this->vipSit1->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit1_Click);
			// 
			// vipSit10
			// 
			this->vipSit10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit10.BackgroundImage")));
			this->vipSit10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit10->Location = System::Drawing::Point(462, 426);
			this->vipSit10->Name = L"vipSit10";
			this->vipSit10->Size = System::Drawing::Size(33, 36);
			this->vipSit10->TabIndex = 68;
			this->vipSit10->TabStop = false;
			this->vipSit10->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit10_Click);
			// 
			// vipSit9
			// 
			this->vipSit9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit9.BackgroundImage")));
			this->vipSit9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit9->Location = System::Drawing::Point(501, 426);
			this->vipSit9->Name = L"vipSit9";
			this->vipSit9->Size = System::Drawing::Size(33, 36);
			this->vipSit9->TabIndex = 67;
			this->vipSit9->TabStop = false;
			this->vipSit9->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit9_Click);
			// 
			// vipSit8
			// 
			this->vipSit8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit8.BackgroundImage")));
			this->vipSit8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit8->Location = System::Drawing::Point(540, 426);
			this->vipSit8->Name = L"vipSit8";
			this->vipSit8->Size = System::Drawing::Size(33, 36);
			this->vipSit8->TabIndex = 66;
			this->vipSit8->TabStop = false;
			this->vipSit8->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit8_Click);
			// 
			// vipSit7
			// 
			this->vipSit7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit7.BackgroundImage")));
			this->vipSit7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit7->Location = System::Drawing::Point(579, 426);
			this->vipSit7->Name = L"vipSit7";
			this->vipSit7->Size = System::Drawing::Size(33, 36);
			this->vipSit7->TabIndex = 65;
			this->vipSit7->TabStop = false;
			this->vipSit7->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit7_Click);
			// 
			// vipSit6
			// 
			this->vipSit6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit6.BackgroundImage")));
			this->vipSit6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit6->Location = System::Drawing::Point(618, 426);
			this->vipSit6->Name = L"vipSit6";
			this->vipSit6->Size = System::Drawing::Size(33, 36);
			this->vipSit6->TabIndex = 64;
			this->vipSit6->TabStop = false;
			this->vipSit6->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit6_Click);
			// 
			// vipSit15
			// 
			this->vipSit15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit15.BackgroundImage")));
			this->vipSit15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit15->Location = System::Drawing::Point(735, 384);
			this->vipSit15->Name = L"vipSit15";
			this->vipSit15->Size = System::Drawing::Size(33, 36);
			this->vipSit15->TabIndex = 73;
			this->vipSit15->TabStop = false;
			this->vipSit15->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit15_Click);
			// 
			// vipSit14
			// 
			this->vipSit14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit14.BackgroundImage")));
			this->vipSit14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit14->Location = System::Drawing::Point(774, 384);
			this->vipSit14->Name = L"vipSit14";
			this->vipSit14->Size = System::Drawing::Size(33, 36);
			this->vipSit14->TabIndex = 72;
			this->vipSit14->TabStop = false;
			this->vipSit14->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit14_Click);
			// 
			// vipSit13
			// 
			this->vipSit13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit13.BackgroundImage")));
			this->vipSit13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit13->Location = System::Drawing::Point(813, 384);
			this->vipSit13->Name = L"vipSit13";
			this->vipSit13->Size = System::Drawing::Size(33, 36);
			this->vipSit13->TabIndex = 71;
			this->vipSit13->TabStop = false;
			this->vipSit13->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit13_Click);
			// 
			// vipSit12
			// 
			this->vipSit12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit12.BackgroundImage")));
			this->vipSit12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit12->Location = System::Drawing::Point(852, 384);
			this->vipSit12->Name = L"vipSit12";
			this->vipSit12->Size = System::Drawing::Size(33, 36);
			this->vipSit12->TabIndex = 70;
			this->vipSit12->TabStop = false;
			this->vipSit12->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit12_Click);
			// 
			// vipSit11
			// 
			this->vipSit11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit11.BackgroundImage")));
			this->vipSit11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit11->Location = System::Drawing::Point(891, 384);
			this->vipSit11->Name = L"vipSit11";
			this->vipSit11->Size = System::Drawing::Size(33, 36);
			this->vipSit11->TabIndex = 69;
			this->vipSit11->TabStop = false;
			this->vipSit11->Click += gcnew System::EventHandler(this, &ComprarAsientos11::pictureBox18_Click);
			// 
			// vipSit20
			// 
			this->vipSit20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit20.BackgroundImage")));
			this->vipSit20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit20->Location = System::Drawing::Point(462, 384);
			this->vipSit20->Name = L"vipSit20";
			this->vipSit20->Size = System::Drawing::Size(33, 36);
			this->vipSit20->TabIndex = 78;
			this->vipSit20->TabStop = false;
			this->vipSit20->Click += gcnew System::EventHandler(this, &ComprarAsientos11::pictureBox19_Click);
			// 
			// vipSit19
			// 
			this->vipSit19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit19.BackgroundImage")));
			this->vipSit19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit19->Location = System::Drawing::Point(501, 384);
			this->vipSit19->Name = L"vipSit19";
			this->vipSit19->Size = System::Drawing::Size(33, 36);
			this->vipSit19->TabIndex = 77;
			this->vipSit19->TabStop = false;
			this->vipSit19->Click += gcnew System::EventHandler(this, &ComprarAsientos11::pictureBox20_Click);
			// 
			// vipSit18
			// 
			this->vipSit18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit18.BackgroundImage")));
			this->vipSit18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit18->Location = System::Drawing::Point(540, 384);
			this->vipSit18->Name = L"vipSit18";
			this->vipSit18->Size = System::Drawing::Size(33, 36);
			this->vipSit18->TabIndex = 76;
			this->vipSit18->TabStop = false;
			this->vipSit18->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit18_Click);
			// 
			// vipSit17
			// 
			this->vipSit17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit17.BackgroundImage")));
			this->vipSit17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit17->Location = System::Drawing::Point(579, 384);
			this->vipSit17->Name = L"vipSit17";
			this->vipSit17->Size = System::Drawing::Size(33, 36);
			this->vipSit17->TabIndex = 75;
			this->vipSit17->TabStop = false;
			this->vipSit17->Click += gcnew System::EventHandler(this, &ComprarAsientos11::pictureBox22_Click_1);
			// 
			// vipSit16
			// 
			this->vipSit16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit16.BackgroundImage")));
			this->vipSit16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit16->Location = System::Drawing::Point(618, 384);
			this->vipSit16->Name = L"vipSit16";
			this->vipSit16->Size = System::Drawing::Size(33, 36);
			this->vipSit16->TabIndex = 74;
			this->vipSit16->TabStop = false;
			this->vipSit16->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit16_Click);
			// 
			// vipSit25
			// 
			this->vipSit25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit25.BackgroundImage")));
			this->vipSit25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit25->Location = System::Drawing::Point(735, 342);
			this->vipSit25->Name = L"vipSit25";
			this->vipSit25->Size = System::Drawing::Size(33, 36);
			this->vipSit25->TabIndex = 83;
			this->vipSit25->TabStop = false;
			this->vipSit25->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit25_Click);
			// 
			// vipSit24
			// 
			this->vipSit24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit24.BackgroundImage")));
			this->vipSit24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit24->Location = System::Drawing::Point(774, 342);
			this->vipSit24->Name = L"vipSit24";
			this->vipSit24->Size = System::Drawing::Size(33, 36);
			this->vipSit24->TabIndex = 82;
			this->vipSit24->TabStop = false;
			this->vipSit24->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit24_Click);
			// 
			// vipSit23
			// 
			this->vipSit23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit23.BackgroundImage")));
			this->vipSit23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit23->Location = System::Drawing::Point(813, 342);
			this->vipSit23->Name = L"vipSit23";
			this->vipSit23->Size = System::Drawing::Size(33, 36);
			this->vipSit23->TabIndex = 81;
			this->vipSit23->TabStop = false;
			this->vipSit23->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit23_Click);
			// 
			// vipSit22
			// 
			this->vipSit22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit22.BackgroundImage")));
			this->vipSit22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit22->Location = System::Drawing::Point(852, 342);
			this->vipSit22->Name = L"vipSit22";
			this->vipSit22->Size = System::Drawing::Size(33, 36);
			this->vipSit22->TabIndex = 80;
			this->vipSit22->TabStop = false;
			this->vipSit22->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit22_Click);
			// 
			// vipSit21
			// 
			this->vipSit21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit21.BackgroundImage")));
			this->vipSit21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit21->Location = System::Drawing::Point(891, 342);
			this->vipSit21->Name = L"vipSit21";
			this->vipSit21->Size = System::Drawing::Size(33, 36);
			this->vipSit21->TabIndex = 79;
			this->vipSit21->TabStop = false;
			this->vipSit21->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit21_Click);
			// 
			// vipSit30
			// 
			this->vipSit30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit30.BackgroundImage")));
			this->vipSit30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit30->Location = System::Drawing::Point(462, 342);
			this->vipSit30->Name = L"vipSit30";
			this->vipSit30->Size = System::Drawing::Size(33, 36);
			this->vipSit30->TabIndex = 88;
			this->vipSit30->TabStop = false;
			this->vipSit30->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit30_Click);
			// 
			// vipSit29
			// 
			this->vipSit29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit29.BackgroundImage")));
			this->vipSit29->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit29->Location = System::Drawing::Point(501, 342);
			this->vipSit29->Name = L"vipSit29";
			this->vipSit29->Size = System::Drawing::Size(33, 36);
			this->vipSit29->TabIndex = 87;
			this->vipSit29->TabStop = false;
			this->vipSit29->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit29_Click);
			// 
			// vipSit28
			// 
			this->vipSit28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit28.BackgroundImage")));
			this->vipSit28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit28->Location = System::Drawing::Point(540, 342);
			this->vipSit28->Name = L"vipSit28";
			this->vipSit28->Size = System::Drawing::Size(33, 36);
			this->vipSit28->TabIndex = 86;
			this->vipSit28->TabStop = false;
			this->vipSit28->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit28_Click);
			// 
			// vipSit27
			// 
			this->vipSit27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit27.BackgroundImage")));
			this->vipSit27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit27->Location = System::Drawing::Point(579, 342);
			this->vipSit27->Name = L"vipSit27";
			this->vipSit27->Size = System::Drawing::Size(33, 36);
			this->vipSit27->TabIndex = 85;
			this->vipSit27->TabStop = false;
			this->vipSit27->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit27_Click);
			// 
			// vipSit26
			// 
			this->vipSit26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit26.BackgroundImage")));
			this->vipSit26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit26->Location = System::Drawing::Point(618, 342);
			this->vipSit26->Name = L"vipSit26";
			this->vipSit26->Size = System::Drawing::Size(33, 36);
			this->vipSit26->TabIndex = 84;
			this->vipSit26->TabStop = false;
			this->vipSit26->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit26_Click);
			// 
			// vipSit35
			// 
			this->vipSit35->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit35.BackgroundImage")));
			this->vipSit35->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit35->Location = System::Drawing::Point(735, 300);
			this->vipSit35->Name = L"vipSit35";
			this->vipSit35->Size = System::Drawing::Size(33, 36);
			this->vipSit35->TabIndex = 93;
			this->vipSit35->TabStop = false;
			this->vipSit35->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit35_Click);
			// 
			// vipSit34
			// 
			this->vipSit34->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit34.BackgroundImage")));
			this->vipSit34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit34->Location = System::Drawing::Point(774, 300);
			this->vipSit34->Name = L"vipSit34";
			this->vipSit34->Size = System::Drawing::Size(33, 36);
			this->vipSit34->TabIndex = 92;
			this->vipSit34->TabStop = false;
			this->vipSit34->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit34_Click);
			// 
			// vipSit33
			// 
			this->vipSit33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit33.BackgroundImage")));
			this->vipSit33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit33->Location = System::Drawing::Point(813, 300);
			this->vipSit33->Name = L"vipSit33";
			this->vipSit33->Size = System::Drawing::Size(33, 36);
			this->vipSit33->TabIndex = 91;
			this->vipSit33->TabStop = false;
			this->vipSit33->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit33_Click);
			// 
			// vipSit32
			// 
			this->vipSit32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit32.BackgroundImage")));
			this->vipSit32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit32->Location = System::Drawing::Point(852, 300);
			this->vipSit32->Name = L"vipSit32";
			this->vipSit32->Size = System::Drawing::Size(33, 36);
			this->vipSit32->TabIndex = 90;
			this->vipSit32->TabStop = false;
			this->vipSit32->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit32_Click);
			// 
			// vipSit31
			// 
			this->vipSit31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit31.BackgroundImage")));
			this->vipSit31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit31->Location = System::Drawing::Point(891, 300);
			this->vipSit31->Name = L"vipSit31";
			this->vipSit31->Size = System::Drawing::Size(33, 36);
			this->vipSit31->TabIndex = 89;
			this->vipSit31->TabStop = false;
			this->vipSit31->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit31_Click);
			// 
			// vipSit40
			// 
			this->vipSit40->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit40.BackgroundImage")));
			this->vipSit40->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit40->Location = System::Drawing::Point(462, 300);
			this->vipSit40->Name = L"vipSit40";
			this->vipSit40->Size = System::Drawing::Size(33, 36);
			this->vipSit40->TabIndex = 98;
			this->vipSit40->TabStop = false;
			this->vipSit40->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit40_Click);
			// 
			// vipSit39
			// 
			this->vipSit39->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit39.BackgroundImage")));
			this->vipSit39->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit39->Location = System::Drawing::Point(501, 300);
			this->vipSit39->Name = L"vipSit39";
			this->vipSit39->Size = System::Drawing::Size(33, 36);
			this->vipSit39->TabIndex = 97;
			this->vipSit39->TabStop = false;
			this->vipSit39->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit39_Click);
			// 
			// vipSit38
			// 
			this->vipSit38->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit38.BackgroundImage")));
			this->vipSit38->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit38->Location = System::Drawing::Point(540, 300);
			this->vipSit38->Name = L"vipSit38";
			this->vipSit38->Size = System::Drawing::Size(33, 36);
			this->vipSit38->TabIndex = 96;
			this->vipSit38->TabStop = false;
			this->vipSit38->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit38_Click);
			// 
			// vipSit37
			// 
			this->vipSit37->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit37.BackgroundImage")));
			this->vipSit37->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit37->Location = System::Drawing::Point(579, 300);
			this->vipSit37->Name = L"vipSit37";
			this->vipSit37->Size = System::Drawing::Size(33, 36);
			this->vipSit37->TabIndex = 95;
			this->vipSit37->TabStop = false;
			this->vipSit37->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit37_Click);
			// 
			// vipSit36
			// 
			this->vipSit36->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit36.BackgroundImage")));
			this->vipSit36->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit36->Location = System::Drawing::Point(618, 300);
			this->vipSit36->Name = L"vipSit36";
			this->vipSit36->Size = System::Drawing::Size(33, 36);
			this->vipSit36->TabIndex = 94;
			this->vipSit36->TabStop = false;
			this->vipSit36->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit36_Click);
			// 
			// vipSit45
			// 
			this->vipSit45->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit45.BackgroundImage")));
			this->vipSit45->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit45->Location = System::Drawing::Point(735, 258);
			this->vipSit45->Name = L"vipSit45";
			this->vipSit45->Size = System::Drawing::Size(33, 36);
			this->vipSit45->TabIndex = 103;
			this->vipSit45->TabStop = false;
			this->vipSit45->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit45_Click);
			// 
			// vipSit44
			// 
			this->vipSit44->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit44.BackgroundImage")));
			this->vipSit44->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit44->Location = System::Drawing::Point(774, 258);
			this->vipSit44->Name = L"vipSit44";
			this->vipSit44->Size = System::Drawing::Size(33, 36);
			this->vipSit44->TabIndex = 102;
			this->vipSit44->TabStop = false;
			this->vipSit44->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit44_Click);
			// 
			// vipSit43
			// 
			this->vipSit43->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit43.BackgroundImage")));
			this->vipSit43->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit43->Location = System::Drawing::Point(813, 258);
			this->vipSit43->Name = L"vipSit43";
			this->vipSit43->Size = System::Drawing::Size(33, 36);
			this->vipSit43->TabIndex = 101;
			this->vipSit43->TabStop = false;
			this->vipSit43->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit43_Click);
			// 
			// vipSit42
			// 
			this->vipSit42->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit42.BackgroundImage")));
			this->vipSit42->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit42->Location = System::Drawing::Point(852, 258);
			this->vipSit42->Name = L"vipSit42";
			this->vipSit42->Size = System::Drawing::Size(33, 36);
			this->vipSit42->TabIndex = 100;
			this->vipSit42->TabStop = false;
			this->vipSit42->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit42_Click);
			// 
			// vipSit41
			// 
			this->vipSit41->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit41.BackgroundImage")));
			this->vipSit41->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit41->Location = System::Drawing::Point(891, 258);
			this->vipSit41->Name = L"vipSit41";
			this->vipSit41->Size = System::Drawing::Size(33, 36);
			this->vipSit41->TabIndex = 99;
			this->vipSit41->TabStop = false;
			this->vipSit41->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit41_Click);
			// 
			// vipSit50
			// 
			this->vipSit50->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit50.BackgroundImage")));
			this->vipSit50->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit50->Location = System::Drawing::Point(462, 258);
			this->vipSit50->Name = L"vipSit50";
			this->vipSit50->Size = System::Drawing::Size(33, 36);
			this->vipSit50->TabIndex = 108;
			this->vipSit50->TabStop = false;
			this->vipSit50->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit50_Click);
			// 
			// vipSit49
			// 
			this->vipSit49->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit49.BackgroundImage")));
			this->vipSit49->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit49->Location = System::Drawing::Point(501, 258);
			this->vipSit49->Name = L"vipSit49";
			this->vipSit49->Size = System::Drawing::Size(33, 36);
			this->vipSit49->TabIndex = 107;
			this->vipSit49->TabStop = false;
			this->vipSit49->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit49_Click);
			// 
			// vipSit48
			// 
			this->vipSit48->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit48.BackgroundImage")));
			this->vipSit48->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit48->Location = System::Drawing::Point(540, 258);
			this->vipSit48->Name = L"vipSit48";
			this->vipSit48->Size = System::Drawing::Size(33, 36);
			this->vipSit48->TabIndex = 106;
			this->vipSit48->TabStop = false;
			this->vipSit48->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit48_Click);
			// 
			// vipSit47
			// 
			this->vipSit47->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit47.BackgroundImage")));
			this->vipSit47->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit47->Location = System::Drawing::Point(579, 258);
			this->vipSit47->Name = L"vipSit47";
			this->vipSit47->Size = System::Drawing::Size(33, 36);
			this->vipSit47->TabIndex = 105;
			this->vipSit47->TabStop = false;
			this->vipSit47->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit47_Click);
			// 
			// vipSit46
			// 
			this->vipSit46->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vipSit46.BackgroundImage")));
			this->vipSit46->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->vipSit46->Location = System::Drawing::Point(618, 258);
			this->vipSit46->Name = L"vipSit46";
			this->vipSit46->Size = System::Drawing::Size(33, 36);
			this->vipSit46->TabIndex = 104;
			this->vipSit46->TabStop = false;
			this->vipSit46->Click += gcnew System::EventHandler(this, &ComprarAsientos11::vipSit46_Click);
			// 
			// prefSit10
			// 
			this->prefSit10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"prefSit10.BackgroundImage")));
			this->prefSit10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->prefSit10->Location = System::Drawing::Point(501, 164);
			this->prefSit10->Name = L"prefSit10";
			this->prefSit10->Size = System::Drawing::Size(33, 36);
			this->prefSit10->TabIndex = 118;
			this->prefSit10->TabStop = false;
			this->prefSit10->Click += gcnew System::EventHandler(this, &ComprarAsientos11::prefSit10_Click);
			// 
			// prefSit9
			// 
			this->prefSit9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"prefSit9.BackgroundImage")));
			this->prefSit9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->prefSit9->Location = System::Drawing::Point(540, 164);
			this->prefSit9->Name = L"prefSit9";
			this->prefSit9->Size = System::Drawing::Size(33, 36);
			this->prefSit9->TabIndex = 117;
			this->prefSit9->TabStop = false;
			this->prefSit9->Click += gcnew System::EventHandler(this, &ComprarAsientos11::prefSit9_Click);
			// 
			// prefSit8
			// 
			this->prefSit8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"prefSit8.BackgroundImage")));
			this->prefSit8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->prefSit8->Location = System::Drawing::Point(579, 164);
			this->prefSit8->Name = L"prefSit8";
			this->prefSit8->Size = System::Drawing::Size(33, 36);
			this->prefSit8->TabIndex = 116;
			this->prefSit8->TabStop = false;
			this->prefSit8->Click += gcnew System::EventHandler(this, &ComprarAsientos11::prefSit8_Click);
			// 
			// prefSit7
			// 
			this->prefSit7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"prefSit7.BackgroundImage")));
			this->prefSit7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->prefSit7->Location = System::Drawing::Point(618, 164);
			this->prefSit7->Name = L"prefSit7";
			this->prefSit7->Size = System::Drawing::Size(33, 36);
			this->prefSit7->TabIndex = 115;
			this->prefSit7->TabStop = false;
			this->prefSit7->Click += gcnew System::EventHandler(this, &ComprarAsientos11::prefSit7_Click);
			// 
			// prefSit6
			// 
			this->prefSit6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"prefSit6.BackgroundImage")));
			this->prefSit6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->prefSit6->Location = System::Drawing::Point(657, 164);
			this->prefSit6->Name = L"prefSit6";
			this->prefSit6->Size = System::Drawing::Size(33, 36);
			this->prefSit6->TabIndex = 114;
			this->prefSit6->TabStop = false;
			this->prefSit6->Click += gcnew System::EventHandler(this, &ComprarAsientos11::prefSit6_Click);
			// 
			// prefSit5
			// 
			this->prefSit5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"prefSit5.BackgroundImage")));
			this->prefSit5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->prefSit5->Location = System::Drawing::Point(696, 164);
			this->prefSit5->Name = L"prefSit5";
			this->prefSit5->Size = System::Drawing::Size(33, 36);
			this->prefSit5->TabIndex = 113;
			this->prefSit5->TabStop = false;
			this->prefSit5->Click += gcnew System::EventHandler(this, &ComprarAsientos11::prefSit5_Click);
			// 
			// prefSit4
			// 
			this->prefSit4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"prefSit4.BackgroundImage")));
			this->prefSit4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->prefSit4->Location = System::Drawing::Point(735, 164);
			this->prefSit4->Name = L"prefSit4";
			this->prefSit4->Size = System::Drawing::Size(33, 36);
			this->prefSit4->TabIndex = 112;
			this->prefSit4->TabStop = false;
			this->prefSit4->Click += gcnew System::EventHandler(this, &ComprarAsientos11::prefSit4_Click);
			// 
			// prefSit3
			// 
			this->prefSit3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"prefSit3.BackgroundImage")));
			this->prefSit3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->prefSit3->Location = System::Drawing::Point(774, 164);
			this->prefSit3->Name = L"prefSit3";
			this->prefSit3->Size = System::Drawing::Size(33, 36);
			this->prefSit3->TabIndex = 111;
			this->prefSit3->TabStop = false;
			this->prefSit3->Click += gcnew System::EventHandler(this, &ComprarAsientos11::prefSit3_Click);
			// 
			// prefSit2
			// 
			this->prefSit2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"prefSit2.BackgroundImage")));
			this->prefSit2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->prefSit2->Location = System::Drawing::Point(813, 164);
			this->prefSit2->Name = L"prefSit2";
			this->prefSit2->Size = System::Drawing::Size(33, 36);
			this->prefSit2->TabIndex = 110;
			this->prefSit2->TabStop = false;
			this->prefSit2->Click += gcnew System::EventHandler(this, &ComprarAsientos11::prefSit2_Click);
			// 
			// prefSit1
			// 
			this->prefSit1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"prefSit1.BackgroundImage")));
			this->prefSit1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->prefSit1->Location = System::Drawing::Point(852, 164);
			this->prefSit1->Name = L"prefSit1";
			this->prefSit1->Size = System::Drawing::Size(33, 36);
			this->prefSit1->TabIndex = 109;
			this->prefSit1->TabStop = false;
			this->prefSit1->Click += gcnew System::EventHandler(this, &ComprarAsientos11::prefSit1_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(412, 25);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(532, 50);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 119;
			this->pictureBox14->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(12, 723);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(271, 29);
			this->label4->TabIndex = 120;
			this->label4->Text = L"Asientos preferenciales:";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(299, 725);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(25, 27);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 121;
			this->pictureBox4->TabStop = false;
			// 
			// ComprarAsientos11
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1302, 801);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->prefSit10);
			this->Controls->Add(this->prefSit9);
			this->Controls->Add(this->prefSit8);
			this->Controls->Add(this->prefSit7);
			this->Controls->Add(this->prefSit6);
			this->Controls->Add(this->prefSit5);
			this->Controls->Add(this->prefSit4);
			this->Controls->Add(this->prefSit3);
			this->Controls->Add(this->prefSit2);
			this->Controls->Add(this->prefSit1);
			this->Controls->Add(this->vipSit50);
			this->Controls->Add(this->vipSit49);
			this->Controls->Add(this->vipSit48);
			this->Controls->Add(this->vipSit47);
			this->Controls->Add(this->vipSit46);
			this->Controls->Add(this->vipSit45);
			this->Controls->Add(this->vipSit44);
			this->Controls->Add(this->vipSit43);
			this->Controls->Add(this->vipSit42);
			this->Controls->Add(this->vipSit41);
			this->Controls->Add(this->vipSit40);
			this->Controls->Add(this->vipSit39);
			this->Controls->Add(this->vipSit38);
			this->Controls->Add(this->vipSit37);
			this->Controls->Add(this->vipSit36);
			this->Controls->Add(this->vipSit35);
			this->Controls->Add(this->vipSit34);
			this->Controls->Add(this->vipSit33);
			this->Controls->Add(this->vipSit32);
			this->Controls->Add(this->vipSit31);
			this->Controls->Add(this->vipSit30);
			this->Controls->Add(this->vipSit29);
			this->Controls->Add(this->vipSit28);
			this->Controls->Add(this->vipSit27);
			this->Controls->Add(this->vipSit26);
			this->Controls->Add(this->vipSit25);
			this->Controls->Add(this->vipSit24);
			this->Controls->Add(this->vipSit23);
			this->Controls->Add(this->vipSit22);
			this->Controls->Add(this->vipSit21);
			this->Controls->Add(this->vipSit20);
			this->Controls->Add(this->vipSit19);
			this->Controls->Add(this->vipSit18);
			this->Controls->Add(this->vipSit17);
			this->Controls->Add(this->vipSit16);
			this->Controls->Add(this->vipSit15);
			this->Controls->Add(this->vipSit14);
			this->Controls->Add(this->vipSit13);
			this->Controls->Add(this->vipSit12);
			this->Controls->Add(this->vipSit11);
			this->Controls->Add(this->vipSit10);
			this->Controls->Add(this->vipSit9);
			this->Controls->Add(this->vipSit8);
			this->Controls->Add(this->vipSit7);
			this->Controls->Add(this->vipSit6);
			this->Controls->Add(this->vipSit5);
			this->Controls->Add(this->vipSit4);
			this->Controls->Add(this->vipSit3);
			this->Controls->Add(this->vipSit2);
			this->Controls->Add(this->vipSit1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->normalSit21);
			this->Controls->Add(this->normalSit50);
			this->Controls->Add(this->normalSit49);
			this->Controls->Add(this->normalSit48);
			this->Controls->Add(this->normalSit47);
			this->Controls->Add(this->normalSit46);
			this->Controls->Add(this->normalSit45);
			this->Controls->Add(this->normalSit44);
			this->Controls->Add(this->normalSit43);
			this->Controls->Add(this->normalSit42);
			this->Controls->Add(this->normalSit41);
			this->Controls->Add(this->normalSit40);
			this->Controls->Add(this->normalSit39);
			this->Controls->Add(this->normalSit38);
			this->Controls->Add(this->normalSit37);
			this->Controls->Add(this->normalSit36);
			this->Controls->Add(this->normalSit35);
			this->Controls->Add(this->normalSit34);
			this->Controls->Add(this->normalSit33);
			this->Controls->Add(this->normalSit32);
			this->Controls->Add(this->normalSit31);
			this->Controls->Add(this->normalSit30);
			this->Controls->Add(this->normalSit29);
			this->Controls->Add(this->normalSit28);
			this->Controls->Add(this->normalSit27);
			this->Controls->Add(this->normalSit26);
			this->Controls->Add(this->normalSit25);
			this->Controls->Add(this->normalSit24);
			this->Controls->Add(this->normalSit23);
			this->Controls->Add(this->normalSit22);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->normalSit20);
			this->Controls->Add(this->normalSit19);
			this->Controls->Add(this->normalSit18);
			this->Controls->Add(this->normalSit17);
			this->Controls->Add(this->normalSit16);
			this->Controls->Add(this->normalSit15);
			this->Controls->Add(this->normalSit14);
			this->Controls->Add(this->normalSit13);
			this->Controls->Add(this->normalSit12);
			this->Controls->Add(this->normalSit11);
			this->Controls->Add(this->btnVolver);
			this->Controls->Add(this->normalSit10);
			this->Controls->Add(this->normalSit9);
			this->Controls->Add(this->normalSit8);
			this->Controls->Add(this->normalSit7);
			this->Controls->Add(this->normalSit6);
			this->Controls->Add(this->normalSit5);
			this->Controls->Add(this->normalSit4);
			this->Controls->Add(this->normalSit3);
			this->Controls->Add(this->normalSit2);
			this->Controls->Add(this->normalSit1);
			this->Name = L"ComprarAsientos11";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ComprarAsientos11";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalSit41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vipSit46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prefSit10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prefSit9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prefSit8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prefSit7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prefSit6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prefSit5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prefSit4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prefSit3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prefSit2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->prefSit1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
			if (valReserv == 2) {
				validarListaEspera();
			}
			else {
				validarNormales();
				validarPreferenciales();
				validarVIP();

			}
		}

		
#pragma endregion
	private: System::Void normalSit1_Click(System::Object^  sender, System::EventArgs^  e) {

		if (valReserv != 2) {

			Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(1);
			Asiento * miasiento = minodo->getAsiento();
			if (miasiento->getEstado() == 0) {
				if (contadorAsientos <= cantAsientos) {
					normalSit1->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit1->BackgroundImageLayout = ImageLayout::Stretch;
					if (valReserv == 1) {
						miasiento->setEstado(2);
						msclr::interop::marshal_context context;
						std::string cedulaRe = context.marshal_as<std::string>(cedula);
						miasiento->setCedulaReserva(cedulaRe);
					}
					else {
						miasiento->setEstado(3);
					}
				}
				contadorAsientos++;
			}

		}
		else if (valReserv == 2) {
			Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				if (contadorAsientos <= cantAsientos) {
					while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 1) {
							normalSit1->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
							normalSit1->BackgroundImageLayout = ImageLayout::Stretch;
							minodo->getAsiento()->setEstado(6);
							contadorAsientos++;
						}
						minodo = minodo->getSiguiente();
					}
				}
			

			
		}

	}

private: System::Void btnVolver_Click(System::Object^  sender, System::EventArgs^  e) {
	Hide();
	miteatroComprarAsientos.setAsientosVip(pilaAsientosVip);
	int i = 0;
	if (valReserv == 2) {
			i = 1;
	}
	GeneracionBoleto^ gen = gcnew GeneracionBoleto(mifuncionComprarAsientos, miteatroComprarAsientos, cedula, inicio, i);
	gen->Show();
	contadorAsientos = 1;
	valReserv = 0;

	

}
		 void validarListaEspera() {

			 Nodo *aux = miteatroComprarAsientos.getColaEspera().getFrente();
			 Nodo *auxNormales = miteatroComprarAsientos.getAsientosNormales().getCabeza();
			 Nodo *auxpil = miteatroComprarAsientos.getAsientosVip().getTope();
			 Nodo *auxPref = miteatroComprarAsientos.getAsientosPref().getCabeza();
			 PilaAsientos PilaVip;

			 for (int j = 0; j < 50; j++) {
				 PilaVip.insertarElem(pilaAsientosVip.eliminarElem());
			 }
				

			 Nodo *auxVip = PilaVip.getTope();
			 while (aux != NULL) {
				 for (int i = 1; i < 110; i++) {
						 while (auxNormales != NULL) {
							 if (auxNormales->getAsiento()->getEstado() == 1 || aux->getAsiento()->getEstado() == 5) {
								 if (i <= 10 && aux->getAsiento()->getTipoAsiento() == "normales") {
									 if (aux->getAsiento()->getNumero() == 1) {
										 normalSit1->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit1->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 2) {
										 normalSit2->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit2->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 3) {
										 normalSit3->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit3->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 4) {
										 normalSit4->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit4->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 5) {
										 normalSit5->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit5->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 6) {
										 normalSit6->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit6->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 7) {
										 normalSit7->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit7->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 8) {
										 normalSit8->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit8->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 9) {
										 normalSit9->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit9->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 10) {
										 normalSit10->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit10->BackgroundImageLayout = ImageLayout::Stretch;
									 }
								 }
								 else if (i <= 20 && aux->getAsiento()->getTipoAsiento() == "normales") {
									 if (aux->getAsiento()->getNumero() == 11) {
										 normalSit11->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit11->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 12) {
										 normalSit12->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit12->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 13) {
										 normalSit13->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit13->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 14) {
										 normalSit14->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit14->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 15) {
										 normalSit15->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit15->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 16) {
										 normalSit16->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit16->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 17) {
										 normalSit17->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit17->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 18) {
										 normalSit18->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit18->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 19) {
										 normalSit19->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit19->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 20) {
										 normalSit20->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit20->BackgroundImageLayout = ImageLayout::Stretch;
									 }
								 }
								 else if (i <= 30 && aux->getAsiento()->getTipoAsiento() == "normales") {
									 if (aux->getAsiento()->getNumero() == 21) {
										 normalSit21->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit21->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 22) {
										 normalSit22->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit22->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 23) {
										 normalSit23->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit23->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 24) {
										 normalSit24->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit24->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 25) {
										 normalSit25->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit25->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 26) {
										 normalSit26->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit26->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 27) {
										 normalSit27->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit27->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 28) {
										 normalSit28->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit28->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 29) {
										 normalSit29->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit29->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 30) {
										 normalSit30->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit30->BackgroundImageLayout = ImageLayout::Stretch;
									 }
								 }
								 else if (i <= 40 && aux->getAsiento()->getTipoAsiento() == "normales") {
									 if (aux->getAsiento()->getNumero() == 31) {
										 normalSit31->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit31->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 32) {
										 normalSit32->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit32->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 33) {
										 normalSit33->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit33->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 34) {
										 normalSit34->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit34->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 35) {
										 normalSit35->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit35->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 36) {
										 normalSit36->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit36->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 37) {
										 normalSit37->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit37->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 38) {
										 normalSit38->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit38->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 39) {
										 normalSit39->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit39->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 40) {
										 normalSit40->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit40->BackgroundImageLayout = ImageLayout::Stretch;
									 }
								 }
								 else if (i <= 50 && aux->getAsiento()->getTipoAsiento() == "normales") {
									 if (aux->getAsiento()->getNumero() == 41) {
										 normalSit41->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit41->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 42) {
										 normalSit42->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit42->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 43) {
										 normalSit43->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit43->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 44) {
										 normalSit44->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit44->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 45) {
										 normalSit45->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit45->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 46) {
										 normalSit46->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit46->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 47) {
										 normalSit47->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit47->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 48) {
										 normalSit48->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit48->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 49) {
										 normalSit49->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit49->BackgroundImageLayout = ImageLayout::Stretch;
									 }
									 else if (aux->getAsiento()->getNumero() == 50) {
										 normalSit50->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										 normalSit50->BackgroundImageLayout = ImageLayout::Stretch;
									 }
								
								 }


						  }

						  aux = aux->getSiguiente();
							 auxNormales = auxNormales->getSiguiente();
							 i++;
						}
						 
						while (auxVip != NULL) {
							if (auxVip->getAsiento()->getEstado() == 1 || aux->getAsiento()->getEstado() == 5) {
								if (i <= 60 && aux->getAsiento()->getTipoAsiento() == "vip") {
									if (aux->getAsiento()->getNumero() == 51) {
										vipSit1->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit1->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 52) {
										vipSit2->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit2->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 53) {
										vipSit3->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit3->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 54) {
										vipSit4->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit4->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 55) {
										vipSit5->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit5->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 56) {
										vipSit6->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit6->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 57) {
										vipSit7->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit7->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 58) {
										vipSit8->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit8->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 59) {
										vipSit9->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit9->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 60) {
										vipSit10->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit10->BackgroundImageLayout = ImageLayout::Stretch;
									}
								}
								else if (i <= 70 && aux->getAsiento()->getTipoAsiento() == "vip") {
									if (aux->getAsiento()->getNumero() == 61) {
										vipSit11->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit11->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 62) {
										vipSit12->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit12->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 63) {
										vipSit13->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit13->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 64) {
										vipSit14->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit14->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 65) {
										vipSit15->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit15->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 66) {
										vipSit16->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit16->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 67) {
										vipSit17->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit17->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 68) {
										vipSit18->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit18->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 69) {
										vipSit19->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit19->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 70) {
										vipSit20->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit20->BackgroundImageLayout = ImageLayout::Stretch;
									}
								}
								else if (i <= 80 && aux->getAsiento()->getTipoAsiento() == "vip") {
									if (aux->getAsiento()->getNumero() == 71) {
										vipSit21->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit21->BackgroundImageLayout = ImageLayout::Stretch;
									}

									else if (aux->getAsiento()->getNumero() == 72) {
										vipSit22->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit22->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 73) {
										vipSit23->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit23->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 74) {
										vipSit24->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit24->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 75) {
										vipSit25->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit25->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 76) {
										vipSit26->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit26->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 77) {
										vipSit27->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit27->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 78) {
										vipSit28->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit28->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 79) {
										vipSit29->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit29->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 80) {
										vipSit30->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit30->BackgroundImageLayout = ImageLayout::Stretch;
									}

								}
								else if (i <= 90 && aux->getAsiento()->getTipoAsiento() == "vip") {
									if (aux->getAsiento()->getNumero() == 81) {
										vipSit31->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit31->BackgroundImageLayout = ImageLayout::Stretch;
									}

									else if (aux->getAsiento()->getNumero() == 82) {
										vipSit32->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit32->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 83) {
										vipSit33->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit33->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 84) {
										vipSit34->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit34->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 85) {
										vipSit35->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit35->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 86) {
										vipSit36->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit36->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 87) {
										vipSit37->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit37->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 88) {
										vipSit38->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit38->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 89) {
										vipSit39->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit39->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 90) {
										vipSit40->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit40->BackgroundImageLayout = ImageLayout::Stretch;
									}
								}
								else if (i <= 100 && aux->getAsiento()->getTipoAsiento() == "vip") {
									if (aux->getAsiento()->getNumero() == 91) {
										vipSit41->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit41->BackgroundImageLayout = ImageLayout::Stretch;
									}

									else if (aux->getAsiento()->getNumero() == 92) {
										vipSit42->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit42->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 93) {
										vipSit43->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit43->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 94) {
										vipSit44->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit44->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 95) {
										vipSit45->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit45->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 96) {
										vipSit46->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit46->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 97) {
										vipSit47->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit47->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 98) {
										vipSit48->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit48->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 99) {
										vipSit49->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit49->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 100) {
										vipSit50->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										vipSit50->BackgroundImageLayout = ImageLayout::Stretch;
									}
								}
							}

							aux = aux->getSiguiente();
							auxVip = auxVip->getSiguiente();
							i++;
						}

						while (auxPref != NULL) {
							if (auxPref->getAsiento()->getEstado() == 1 || aux->getAsiento()->getEstado() == 5) {


								if (i <= 110 && aux->getAsiento()->getTipoAsiento() == "preferenciales") {
									if (aux->getAsiento()->getNumero() == 101) {
										prefSit1->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										prefSit1->BackgroundImageLayout = ImageLayout::Stretch;
									}

									else if (aux->getAsiento()->getNumero() == 102) {
										prefSit2->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										prefSit2->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 103) {
										prefSit3->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										prefSit3->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 104) {
										prefSit4->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										prefSit4->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 105) {
										prefSit5->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										prefSit5->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 106) {
										prefSit6->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										prefSit6->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 107) {
										prefSit7->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										prefSit7->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 108) {
										prefSit8->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										prefSit8->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 109) {
										prefSit9->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										prefSit9->BackgroundImageLayout = ImageLayout::Stretch;
									}
									else if (aux->getAsiento()->getNumero() == 110) {
										prefSit10->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
										prefSit10->BackgroundImageLayout = ImageLayout::Stretch;
									}

								}

							}
							aux = aux->getSiguiente();
							auxPref = auxPref->getSiguiente();
							i++;
						}
						
					 
				 }
			 }
			 for (int j = 0; j < 50; j++) {
				 pilaAsientosVip.insertarElem(PilaVip.eliminarElem());
			 }
		 }


		 
		 void validarPreferenciales() {

			 Nodo *aux = miteatroComprarAsientos.getAsientosPref().getCabeza();
			 while (aux != NULL) {

				 for (int i = 0; i < 50; i++) {
					 if (aux->getAsiento()->getEstado() == 1 || aux->getAsiento()->getEstado() == 4) {
						 if (i <= 10) {
							 if (aux->getAsiento()->getNumero() == 1) {
								 prefSit1->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 prefSit1->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 2) {
								 prefSit2->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 prefSit2->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 3) {
								 prefSit3->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 prefSit3->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 4) {
								 prefSit4->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 prefSit4->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 5) {
								 prefSit5->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 prefSit5->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 6) {
								 prefSit6->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 prefSit6->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 7) {
								 prefSit7->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 prefSit7->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 8) {
								 prefSit8->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 prefSit8->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 9) {
								 prefSit9->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 prefSit9->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 10) {
								 prefSit10->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 prefSit10->BackgroundImageLayout = ImageLayout::Stretch;
							 }
						 }
					 }
				 }
				 aux = aux->getSiguiente();
			 }

			

		 }

		 void validarNormales() {
			 Nodo *aux = miteatroComprarAsientos.getAsientosNormales().getCabeza();
			 while (aux != NULL) {

				 for (int i = 0; i < 50; i++) {
					 if (aux->getAsiento()->getEstado() == 1 || aux->getAsiento()->getEstado() == 4) {
						 if (i <= 10) {
							 if (aux->getAsiento()->getNumero() == 1) {
								 normalSit1->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit1->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 2) {
								 normalSit2->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit2->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 3) {
								 normalSit3->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit3->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 4) {
								 normalSit4->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit4->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 5) {
								 normalSit5->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit5->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 6) {
								 normalSit6->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit6->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 7) {
								 normalSit7->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit7->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 8) {
								 normalSit8->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit8->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 9) {
								 normalSit9->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit9->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 10) {
								 normalSit10->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit10->BackgroundImageLayout = ImageLayout::Stretch;
							 }
						 }
						 else if (i <= 20) {
							 if (aux->getAsiento()->getNumero() == 11) {
								 normalSit11->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit11->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 12) {
								 normalSit12->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit12->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 13) {
								 normalSit13->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit13->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 14) {
								 normalSit14->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit14->BackgroundImageLayout = ImageLayout::Stretch;
							 }	
							 else if (aux->getAsiento()->getNumero() == 15) {
								 normalSit15->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit15->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 16) {
								 normalSit16->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit16->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 17) {
								 normalSit17->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit17->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 18) {
								 normalSit18->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit18->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 19) {
								 normalSit19->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit19->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 20) {
								 normalSit20->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit20->BackgroundImageLayout = ImageLayout::Stretch;
							 }
						 }
						 else if (i <= 30) {
							 if (aux->getAsiento()->getNumero() == 21) {
								 normalSit21->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit21->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 22) {
								 normalSit22->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit22->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 23) {
								 normalSit23->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit23->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 24) {
								 normalSit24->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit24->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 25) {
								 normalSit25->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit25->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 26) {
								 normalSit26->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit26->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 27) {
								 normalSit27->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit27->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 28) {
								 normalSit28->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit28->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 29) {
								 normalSit29->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit29->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 30) {
								 normalSit30->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit30->BackgroundImageLayout = ImageLayout::Stretch;
							 }
						 }
						 else if (i <= 40) {
							 if (aux->getAsiento()->getNumero() == 31) {
								 normalSit31->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit31->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 32) {
								 normalSit32->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit32->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 33) {
								 normalSit33->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit33->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 34) {
								 normalSit34->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit34->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 35) {
								 normalSit35->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit35->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 36) {
								 normalSit36->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit36->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 37) {
								 normalSit37->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit37->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 38) {
								 normalSit38->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit38->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 39) {
								 normalSit39->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit39->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 40) {
								 normalSit40->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit40->BackgroundImageLayout = ImageLayout::Stretch;
							 }
						 }
						 else if (i <= 50) {
							 if (aux->getAsiento()->getNumero() == 41) {
								 normalSit41->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit41->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 42) {
								 normalSit42->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit42->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 43) {
								 normalSit43->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit43->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 44) {
								 normalSit44->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit44->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 45) {
								 normalSit45->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit45->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 46) {
								 normalSit46->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit46->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 47) {
								 normalSit47->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit47->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 48) {
								 normalSit48->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit48->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 49) {
								 normalSit49->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit49->BackgroundImageLayout = ImageLayout::Stretch;
							 }
							 else if (aux->getAsiento()->getNumero() == 50) {
								 normalSit50->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
								 normalSit50->BackgroundImageLayout = ImageLayout::Stretch;
							 }
						 }
					 }
				 }





				 aux = aux->getSiguiente();
			 }
		
			
		 }

		 void validarVIP() {

			 pilaValidarVip = pilaAsientosVip;


			 for (int i = 0; i < 50; i++) {
				 pilaValidarAux.insertarElem(pilaValidarVip.eliminarElem());
				 Asiento *miasiento = pilaValidarAux.getTope()->getAsiento();
				 if (miasiento->getEstado() == 1 || miasiento->getEstado() == 4) {
					 if (miasiento->getNumero() == 1) {
						 vipSit1->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit1->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 2) {
						 vipSit2->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit2->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 3) {
						 vipSit3->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit3->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 4) {
						 vipSit4->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit4->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 5) {
						 vipSit5->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit5->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 6) {
						 vipSit6->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit6->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 7) {
						 vipSit7->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit7->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 8) {
						 vipSit8->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit8->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 9) {
						 vipSit9->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit9->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 10) {
						 vipSit10->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit10->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 11) {
						 vipSit11->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit11->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 12) {
						 vipSit12->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit12->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 13) {
						 vipSit13->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit13->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 14) {
						 vipSit14->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit14->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 15) {
						 vipSit15->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit15->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 16) {
						 vipSit16->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit16->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 17) {
						 vipSit17->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit17->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 18) {
						 vipSit18->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit18->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 19) {
						 vipSit19->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit19->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 20) {
						 vipSit20->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit20->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 21) {
						 vipSit21->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit21->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 22) {
						 vipSit22->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit22->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 23) {
						 vipSit23->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit23->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 24) {
						 vipSit24->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit24->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 25) {
						 vipSit25->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit25->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 26) {
						 vipSit26->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit26->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 27) {
						vipSit27->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						vipSit27->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 28) {
						vipSit28->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						vipSit28->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 29) {
						vipSit29->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						vipSit29->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 30) {
						vipSit30->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						vipSit30->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 31) {
						vipSit31->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						vipSit31->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 32) {
						vipSit32->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						vipSit32->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 33) {
						 vipSit33->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit33->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 34) {
						 vipSit34->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit34->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 35) {
						 vipSit35->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit35->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 36) {
						 vipSit36->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit36->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 37) {
						 vipSit37->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit37->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 38) {
						 vipSit38->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit38->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 39) {
						 vipSit39->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit39->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 40) {
						 vipSit40->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
						 vipSit40->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 41) {
					 vipSit41->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
					 vipSit41->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 42) {
					 vipSit42->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
					 vipSit42->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 43) {
					 vipSit43->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
					 vipSit43->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 44) {
					 vipSit44->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
					 vipSit44->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 45) {
					 vipSit45->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
					 vipSit45->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 46) {
					 vipSit46->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
					 vipSit46->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 47) {
					 vipSit47->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
					 vipSit47->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 48) {
					 vipSit48->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
					 vipSit48->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 49) {
					 vipSit49->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
					 vipSit49->BackgroundImageLayout = ImageLayout::Stretch;
					 }
					 else if (miasiento->getNumero() == 50) {
					 vipSit50->BackgroundImage = Image::FromFile("..\\assets\\seat_1.png");
					 vipSit50->BackgroundImageLayout = ImageLayout::Stretch;
					 }
				 }
			 }

			 for (int j = 0; j < 50; j++) {
				 pilaAsientosVip.insertarElem(pilaValidarAux.eliminarElem());
			 }

















		 }
private: System::Void normalSit2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(2);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit2->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit2->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);

				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 2) {
					normalSit2->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit2->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}


private: System::Void normalSit3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(3);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit3->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit3->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 3) {
					normalSit3->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit3->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(4);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit4->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit4->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 4) {
					normalSit4->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit4->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(5);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit5->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit5->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 5) {
					normalSit5->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit5->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(6);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit6->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit6->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);

				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 6) {
					normalSit6->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit6->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(7);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit7->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit7->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 7) {
					normalSit7->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit7->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}

private: System::Void normalSit8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(8);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit8->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit8->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 8) {
					normalSit8->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit8->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(9);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit9->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit9->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 9) {
					normalSit9->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit9->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(10);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit10->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit10->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 10) {
					normalSit10->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit10->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit11_Click(System::Object^  sender, System::EventArgs^  e) {

	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(11);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit11->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit11->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 11) {
					normalSit11->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit11->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(12);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit12->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit12->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 12) {
					normalSit12->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit12->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit13_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(13);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit13->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit13->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 13) {
					normalSit13->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit13->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit14_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(14);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit14->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit14->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 14) {
					normalSit14->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit14->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit15_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(15);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit15->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit15->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 15) {
					normalSit15->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit15->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit16_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(16);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit16->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit16->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 16) {
					normalSit16->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit16->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit17_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(17);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit17->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit17->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 17) {
					normalSit17->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit17->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(18);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit18->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit18->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 18) {
					normalSit18->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit18->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit19_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(19);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit19->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit19->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 19) {
					normalSit19->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit19->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit20_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(20);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit20->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit20->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 20) {
					normalSit20->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit20->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void pictureBox30_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox21_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox22_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox23_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox24_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox25_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox26_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox27_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox28_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox29_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox40_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(41);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit41->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit41->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 41) {
					normalSit41->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit41->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void pictureBox31_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(50);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit50->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit50->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 50) {
					normalSit50->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit50->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void pictureBox32_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(49);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit49->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit49->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 49) {
					normalSit49->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit49->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void pictureBox33_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(48);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit48->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit48->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 48) {
					normalSit48->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit48->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void pictureBox34_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(47);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit47->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit47->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 47) {
					normalSit47->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit47->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void pictureBox35_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(46);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit46->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit46->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 46) {
					normalSit46->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit46->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void pictureBox36_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(45);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit45->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit45->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 45) {
					normalSit45->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit45->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void pictureBox37_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(44);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit44->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit44->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 44) {
					normalSit44->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit44->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void pictureBox38_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(43);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit43->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit43->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 43) {
					normalSit43->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit43->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void pictureBox39_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(42);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit42->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit42->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 42) {
					normalSit42->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit42->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void normalSit21_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(21);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit21->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit21->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 21) {
					normalSit21->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit21->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit22_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(22);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit22->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit22->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 22) {
					normalSit22->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit22->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit23_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(23);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit23->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit23->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 23) {
					normalSit23->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit23->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit24_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(24);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit24->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit24->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 24) {
					normalSit24->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit24->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit25_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(25);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit25->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit25->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 25) {
					normalSit25->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit25->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit26_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(26);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit26->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit26->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 26) {
					normalSit26->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit26->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit27_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(27);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit27->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit27->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 27) {
					normalSit27->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit27->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit28_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(28);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit28->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit28->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 28) {
					normalSit28->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit28->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit29_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(29);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit29->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit29->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 29) {
					normalSit29->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit29->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit30_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(30);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit30->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit30->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 30) {
					normalSit30->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit30->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit31_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(31);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit31->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit31->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 31) {
					normalSit31->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit31->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit32_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(32);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit32->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit32->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 32) {
					normalSit32->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit32->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit33_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(33);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit33->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit33->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 33) {
					normalSit33->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit33->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit34_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(34);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit34->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit34->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 34) {
					normalSit34->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit34->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit35_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(35);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit35->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit35->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 35) {
					normalSit35->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit35->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit36_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(36);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit36->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit36->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 36) {
					normalSit36->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit36->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit37_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(37);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit37->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit37->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 37) {
					normalSit37->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit37->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit38_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(38);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit38->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit38->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 38) {
					normalSit38->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit38->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit39_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(39);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit39->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit39->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 39) {
					normalSit39->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit39->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void normalSit40_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosNormales().buscarAsiento(40);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				normalSit40->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				normalSit40->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 40) {
					normalSit40->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					normalSit40->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Hide();
	obj->Show();
	contadorAsientos = 1;
}
private: System::Void vipSit1_Click(System::Object^  sender, System::EventArgs^  e) {
	
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 1) {
					if (miasiento->getEstado() == 0) {
						vipSit1->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit1->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 51) {
						vipSit1->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit1->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}
			
		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}

	

}
private: System::Void vipSit2_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 2) {
					if (miasiento->getEstado() == 0) {
						vipSit2->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit2->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 52) {
						vipSit2->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit2->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}


}
private: System::Void vipSit3_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 3) {
					if (miasiento->getEstado() == 0) {
						vipSit3->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit3->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 53) {
						vipSit3->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit3->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}



}
private: System::Void vipSit4_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 4) {
					if (miasiento->getEstado() == 0) {
						vipSit4->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit4->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 54) {
						vipSit4->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit4->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}



}
private: System::Void vipSit5_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 5) {
					if (miasiento->getEstado() == 0) {
						vipSit5->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit5->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 55) {
						vipSit5->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit5->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}


}
private: System::Void vipSit6_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 6) {
					if (miasiento->getEstado() == 0) {
						vipSit6->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit6->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 56) {
						vipSit6->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit6->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}


}
private: System::Void vipSit7_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 7) {
					if (miasiento->getEstado() == 0) {
						vipSit7->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit7->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 57) {
						vipSit7->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit7->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}


}
private: System::Void vipSit8_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 8) {
					if (miasiento->getEstado() == 0) {
						vipSit8->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit8->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 58) {
						vipSit8->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit8->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}


}
private: System::Void vipSit9_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 9) {
					if (miasiento->getEstado() == 0) {
						vipSit9->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit9->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 59) {
						vipSit9->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit9->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}


}
private: System::Void vipSit10_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 10) {
					if (miasiento->getEstado() == 0) {
						vipSit10->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit10->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 60) {
						vipSit10->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit10->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}


}
private: System::Void pictureBox18_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 11) {
					if (miasiento->getEstado() == 0) {
						vipSit11->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit11->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 61) {
						vipSit11->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit11->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}

}
private: System::Void vipSit12_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 12) {
					if (miasiento->getEstado() == 0) {
						vipSit12->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit12->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 62) {
						vipSit12->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit12->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit13_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 13) {
					if (miasiento->getEstado() == 0) {
						vipSit13->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit13->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 63) {
						vipSit13->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit13->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit14_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 14) {
					if (miasiento->getEstado() == 0) {
						vipSit14->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit14->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 64) {
						vipSit14->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit14->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit15_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 15) {
					if (miasiento->getEstado() == 0) {
						vipSit15->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit15->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 65) {
						vipSit15->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit15->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit16_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 16) {
					if (miasiento->getEstado() == 0) {
						vipSit16->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit16->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 66) {
						vipSit16->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit16->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void pictureBox22_Click_1(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 17) {
					if (miasiento->getEstado() == 0) {
						vipSit17->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit17->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 67) {
						vipSit17->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit17->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit18_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 18) {
					if (miasiento->getEstado() == 0) {
						vipSit18->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit18->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 68) {
						vipSit18->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit18->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void pictureBox20_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 19) {
					if (miasiento->getEstado() == 0) {
						vipSit19->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit19->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 69) {
						vipSit19->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit19->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void pictureBox19_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 20) {
					if (miasiento->getEstado() == 0) {
						vipSit20->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit20->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 70) {
						vipSit20->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit20->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit21_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 21) {
					if (miasiento->getEstado() == 0) {
						vipSit21->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit21->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 71) {
						vipSit21->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit21->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit22_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 22) {
					if (miasiento->getEstado() == 0) {
						vipSit22->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit22->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 72) {
						vipSit22->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit22->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit23_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 23) {
					if (miasiento->getEstado() == 0) {
						vipSit23->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit23->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 73) {
						vipSit23->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit23->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit24_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 24) {
					if (miasiento->getEstado() == 0) {
						vipSit24->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit24->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 74) {
						vipSit24->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit24->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit25_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 25) {
					if (miasiento->getEstado() == 0) {
						vipSit25->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit25->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 75) {
						vipSit25->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit25->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit26_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 26) {
					if (miasiento->getEstado() == 0) {
						vipSit26->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit26->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 76) {
						vipSit26->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit26->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit27_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 27) {
					if (miasiento->getEstado() == 0) {
						vipSit27->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit27->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 77) {
						vipSit27->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit27->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit28_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 28) {
					if (miasiento->getEstado() == 0) {
						vipSit28->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit28->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 78) {
						vipSit28->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit28->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit29_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 29) {
					if (miasiento->getEstado() == 0) {
						vipSit29->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit29->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 79) {
						vipSit29->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit29->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit30_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 30) {
					if (miasiento->getEstado() == 0) {
						vipSit30->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit30->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 80) {
						vipSit30->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit30->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit31_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 31) {
					if (miasiento->getEstado() == 0) {
						vipSit31->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit31->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 81) {
						vipSit31->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit31->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit32_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 32) {
					if (miasiento->getEstado() == 0) {
						vipSit32->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit32->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 82) {
						vipSit32->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit32->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit33_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 33) {
					if (miasiento->getEstado() == 0) {
						vipSit33->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit33->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 83) {
						vipSit33->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit33->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit34_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 34) {
					if (miasiento->getEstado() == 0) {
						vipSit34->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit34->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 84) {
						vipSit34->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit34->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit35_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 35) {
					if (miasiento->getEstado() == 0) {
						vipSit35->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit35->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 85) {
						vipSit35->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit35->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit36_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 36) {
					if (miasiento->getEstado() == 0) {
						vipSit36->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit36->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 86) {
						vipSit36->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit36->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit37_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 37) {
					if (miasiento->getEstado() == 0) {
						vipSit37->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit37->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 87) {
						vipSit37->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit37->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit38_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 38) {
					if (miasiento->getEstado() == 0) {
						vipSit38->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit38->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 88) {
						vipSit38->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit38->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit39_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 39) {
					if (miasiento->getEstado() == 0) {
						vipSit39->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit39->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 89) {
						vipSit39->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit39->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit40_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 40) {
					if (miasiento->getEstado() == 0) {
						vipSit40->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit40->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 90) {
						vipSit40->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit40->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit41_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 41) {
					if (miasiento->getEstado() == 0) {
						vipSit41->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit41->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 91) {
						vipSit41->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit41->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit42_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 42) {
					if (miasiento->getEstado() == 0) {
						vipSit42->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit42->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 92) {
						vipSit42->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit42->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit43_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 43) {
					if (miasiento->getEstado() == 0) {
						vipSit43->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit43->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 93) {
						vipSit43->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit43->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit44_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 44) {
					if (miasiento->getEstado() == 0) {
						vipSit44->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit44->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 94) {
						vipSit44->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit44->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit45_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 45) {
					if (miasiento->getEstado() == 0) {
						vipSit45->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit45->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 95) {
						vipSit45->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit45->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit46_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 46) {
					if (miasiento->getEstado() == 0) {
						vipSit46->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit46->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 96) {
						vipSit46->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit46->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit47_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 47) {
					if (miasiento->getEstado() == 0) {
						vipSit47->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit47->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 97) {
						vipSit47->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit47->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit48_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 48) {
					if (miasiento->getEstado() == 0) {
						vipSit48->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit48->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 98) {
						vipSit48->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit48->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit49_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 49) {
					if (miasiento->getEstado() == 0) {
						vipSit49->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit49->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 99) {
						vipSit49->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit49->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void vipSit50_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 50; i++) {
		pilaAux.insertarElem(pilaAsientosVip.eliminarElem());
		Asiento *miasiento = pilaAux.getTope()->getAsiento();
		if (contadorAsientos <= cantAsientos) {

			if (valReserv != 2) {
				if (miasiento->getNumero() == 50) {
					if (miasiento->getEstado() == 0) {
						vipSit50->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit50->BackgroundImageLayout = ImageLayout::Stretch;
						if (valReserv == 1) {
							miasiento->setEstado(2);
							msclr::interop::marshal_context context;
							std::string cedulaRe = context.marshal_as<std::string>(cedula);
							miasiento->setCedulaReserva(cedulaRe);
						}
						else {
							miasiento->setEstado(3);
						}
						contadorAsientos++;
					}
				}
			}
			else if (valReserv == 2) {
				Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
				while (minodo != NULL) {
					if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 100) {
						vipSit50->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
						vipSit50->BackgroundImageLayout = ImageLayout::Stretch;
						minodo->getAsiento()->setEstado(6);
						contadorAsientos++;
					}
					minodo = minodo->getSiguiente();
				}
			}

		}
	}

	for (int j = 0; j < 50; j++) {
		pilaAsientosVip.insertarElem(pilaAux.eliminarElem());
	}
}
private: System::Void prefSit1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosPref().buscarAsiento(1);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				prefSit1->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				prefSit1->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 101) {
					prefSit1->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					prefSit1->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}

}
private: System::Void prefSit2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosPref().buscarAsiento(2);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				prefSit2->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				prefSit2->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 102) {
					prefSit2->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					prefSit2->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}

}
private: System::Void prefSit3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosPref().buscarAsiento(3);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				prefSit3->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				prefSit3->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 103) {
					prefSit3->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					prefSit3->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}

}
private: System::Void prefSit4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosPref().buscarAsiento(4);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				prefSit4->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				prefSit4->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 104) {
					prefSit4->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					prefSit4->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}

}
private: System::Void prefSit5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosPref().buscarAsiento(5);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				prefSit5->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				prefSit5->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 105) {
					prefSit5->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					prefSit5->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}

}
private: System::Void prefSit6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosPref().buscarAsiento(6);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				prefSit6->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				prefSit6->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 106) {
					prefSit6->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					prefSit6->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}

}
private: System::Void prefSit7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosPref().buscarAsiento(7);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				prefSit7->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				prefSit7->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 107) {
					prefSit7->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					prefSit7->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}

}
private: System::Void prefSit8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosPref().buscarAsiento(8);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				prefSit8->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				prefSit8->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 108) {
					prefSit8->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					prefSit8->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}

}
private: System::Void prefSit9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosPref().buscarAsiento(9);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				prefSit9->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				prefSit9->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 109) {
					prefSit9->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					prefSit9->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}

}
private: System::Void prefSit10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (valReserv != 2) {

		Nodo * minodo = miteatroComprarAsientos.getAsientosPref().buscarAsiento(10);
		Asiento * miasiento = minodo->getAsiento();
		if (miasiento->getEstado() == 0) {
			if (contadorAsientos <= cantAsientos) {
				prefSit10->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
				prefSit10->BackgroundImageLayout = ImageLayout::Stretch;
				if (valReserv == 1) {
					miasiento->setEstado(2);
					msclr::interop::marshal_context context;
					std::string cedulaRe = context.marshal_as<std::string>(cedula);
					miasiento->setCedulaReserva(cedulaRe);
				}
				else {
					miasiento->setEstado(3);
				}
			}
			contadorAsientos++;
		}

	}
	else if (valReserv == 2) {
		Nodo * minodo = miteatroComprarAsientos.getColaEspera().getFrente();
		if (contadorAsientos <= cantAsientos) {
			while (minodo != NULL) {
				if (minodo->getAsiento()->getEstado() == 0 && minodo->getAsiento()->getNumero() == 110) {
					prefSit10->BackgroundImage = Image::FromFile("..\\assets\\seat_5.png");
					prefSit10->BackgroundImageLayout = ImageLayout::Stretch;
					minodo->getAsiento()->setEstado(6);
					contadorAsientos++;
				}
				minodo = minodo->getSiguiente();
			}
		}



	}

}
};

}
