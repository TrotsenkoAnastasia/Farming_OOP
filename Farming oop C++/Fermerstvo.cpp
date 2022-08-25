#include "Fermerstvo.h"

using namespace System;
using namespace OOP3;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(cli::array<String^>^ args)
{
	setlocale(0, "rus");
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	OOP3::Fermerstvo form;
	Application::Run(% form);
}