#include "OpeningDialog.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TestGUI::OpeningDialog openDialog;
	Application::Run(% openDialog);
	return 0;
}