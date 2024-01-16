using namespace System;

#include "MyForm.h"

using namespace System::Windows::Forms;

[STAThread]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Applicationofrecorderdatamonitoring::MyForm());
	return 0;
}