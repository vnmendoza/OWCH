#include "MyForm.h"
#include "pugixml-1.9/src/pugiconfig.hpp"
#include "pugixml-1.9/src/pugixml.hpp"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	OUCH::MyForm form;
	Application::Run(% form);
	//pugi::xml_document doc;


	//pugi::xml_parse_result result = doc.load_file("C:\Users\VNMen\Documents\Work\Test\test.xml");

	//std::cout << "Load result: " << result.description() << ", mesh name: " << doc.child("mesh").attribute("name").value() << std::endl;

}