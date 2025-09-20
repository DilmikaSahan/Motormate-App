
#include "motormate.h"
//#include "Booking.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Replace 'Project1' with your namespace/project name
    Motormate::motormate form;
    Application::Run(% form);
    return 0;

    /*Motormate::Booking^ form = gcnew Motormate::Booking();
    Application::Run(form);*/

}