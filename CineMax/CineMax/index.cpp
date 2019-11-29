#include "index.h"
#include "Inicio.h"
  // Reemplazar Project1 por el nombre que se le haya dado al proyecto
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Globalization;

using namespace CineMax;
[STAThread]


void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//Project1 es el nombre del proyecto
	index form;	//Reemplazar MyForm por el nombre que tenga tu clase 
	Application::Run(%form);

}

