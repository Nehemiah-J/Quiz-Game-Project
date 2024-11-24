#include "MyForm.h"
#include "Windows.h"


using namespace System;
using namespace System::Windows::Forms;


void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	QuizApplication::MyForm form;
	Application::Run(% form);


}

/*int i = 1 * 60;

void timer() 
{
	Sleep(1000);

	i--;

	if (i > 0)
	{
		timer();
	}

	else 
	{

	}
}
*/