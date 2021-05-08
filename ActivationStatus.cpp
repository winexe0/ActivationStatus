#define VERSION "ActivationStatus v1.3.4\n"
#include <iostream>
#include <windows.h>
#include <string>
#include <VersionHelpers.h>
#include "wait.h"
using namespace std;
int main(int argc, char *argv[]) {
   for (int i = 1; i < argc; ++i) {
	string arg = argv[i];
	if (arg == "--help" || arg == "-h") {
	cout << VERSION << endl;
	cout << "\
Usage: ActivationStatus [-h] [--help] [--version]\n\
Options: --help or -h (Prints this exact messaage) --version (Prints out the version of this ActivationStatus binary)" << endl;
    exit(0);
		}
    if (arg == "--version") {
	cout << VERSION << endl;
	cout << "Copyright (c) 2020-2021 winexe0 aryan.chandna@icloud.com" << endl;
	exit(0);
	}
    else {
	cout << VERSION << endl;
	cout << "Invalid argument" << endl;
	cout << "\
Usage: ActivationStatus [-h] [--help] [--version]\n\
Options: --help or -h (Prints this exact messaage) --version (Prints out the version of this ActivationStatus binary)" << endl;
    exit(0);
	}
}
   string confirm;
   system("title ActivationStatus v1.3.4 Console");
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
   pleasewait();
   system("slmgr /xpr");
}
