#include "GraphBuilder.h"

using namespace System;

using namespace System::Windows::Forms;

[STAThreadAttribute]

void Main(array<String^>^ args) {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	GraphBuilder::GraphBuilder GraphBuilder;

	Application::Run(% GraphBuilder);

}