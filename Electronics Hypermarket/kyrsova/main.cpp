#include <iostream>

//Підключення форми
#include "FormWelcome.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew kyrsova::FormWelcome());

	return 0;
}