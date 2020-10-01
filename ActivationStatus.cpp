#include<iostream>
#include <windows.h>
int main() {
   MessageBox(0,"Please Wait", "Please Wait", MB_OK);
   system("slmgr /xpr");
}
