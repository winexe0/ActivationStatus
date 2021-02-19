#include <iostream>
#include <windows.h>
#include <string>
#include <VersionHelpers.h>
using namespace std;
int main() {
   string confirm;
   system("title ActivationStatus v1.2.1 Console");
   system("echo Detected Processor is %PROCESSOR_ARCHITECTURE%");
    if (!IsWindowsVistaOrGreater())
    {
       MessageBox(NULL, "ActivationStatus requires at least Windows Vista to function", "Windows Version Not Supported", MB_ICONSTOP | MB_OK);
       cout << "Exiting due to Windows version not supported" << endl;
       exit(1);
    }
   int license = MessageBox(
        NULL,
        "Do you accept the license terms?\nIt can be found at https://github.com/winexe0/ActivationStatus/blob/master/LICENSE ",
        "License Agreement",
        	MB_ICONQUESTION | MB_YESNO | MB_DEFBUTTON1
    );

    switch (license)
    {
    case IDNO:
        cout << "Exiting due to refusal of license agreement." << endl;
        exit(7);
        break;
    }
   MessageBox(0,"Please Wait", "Please Wait", MB_ICONINFORMATION | MB_OK);
   system("slmgr /xpr");
}
