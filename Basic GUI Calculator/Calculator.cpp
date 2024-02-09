#include "Calculator.h"

using namespace System;
using namespace System::Windows::Forms;

void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BasicGUICalculator::Calculator form;
	Application::Run(% form);
}