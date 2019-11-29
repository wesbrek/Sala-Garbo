#include "Reservas1.h"
#include "Funcion.h"
// Reemplazar Project1 por el nombre que se le haya dado al proyecto
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Globalization;

using namespace CineMax;
[STAThread]

Funcion crearFuncion();
void main3(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//Project1 es el nombre del proyecto
	Reservas1 form;	//Reemplazar MyForm por el nombre que tenga tu clase 
	Application::Run(%form);

}

