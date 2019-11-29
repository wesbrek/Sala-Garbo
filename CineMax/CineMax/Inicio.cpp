#include "Inicio.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Globalization;

using namespace CineMax;
[STAThread]



void main1(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//Project1 es el nombre del proyecto
	Inicio form;	//Reemplazar MyForm por el nombre que tenga tu clase 
	Application::Run(%form);
}