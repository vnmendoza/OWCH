#include "MyForm.h"
#include "pugixml-1.9/src/pugiconfig.hpp"
#include "pugixml-1.9/src/pugixml.hpp"
#include <iostream>
#include<string>

using namespace System;
using namespace System::Windows::Forms;



[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	OUCH::MyForm form;
	Application::Run(% form);
	
	
}