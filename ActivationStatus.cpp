#include<iostream>
#include <windows.h>
int main() {
   system("title ActivationStatus v1.0.4 Console");
   MessageBox(0,"Please Wait", "Please Wait", MB_OK);
   system("slmgr /xpr");
}
