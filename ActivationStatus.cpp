#include<iostream>
#include <windows.h>
int main() {
   system("title ActivationStatus v1.0.5 Console");
   system("echo Detected Processor is %PROCESSOR_ARCHITECTURE%");
   MessageBox(0,"Please Wait", "Please Wait", MB_OK);
   system("slmgr /xpr");
}
