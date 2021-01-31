#include<iostream>
#include <windows.h>
#include <string>
using namespace std;
int main() {
   string confirm;
   system("title ActivationStatus v1.1.1 Console");
   system("echo Detected Processor is %PROCESSOR_ARCHITECTURE%");
   std::cout << "Do you accept the license terms? It can be found at https://github.com/winexe0/ActivationStatus/blob/master/LICENSE ";
  cin >> confirm;
while (confirm == "no") {
    return 0;
}
while (confirm == "No") {
    return 0;
}
while (confirm == "nO") {
    return 0;
}
while (confirm == "NO") {
    return 0;
}
   MessageBox(0,"Please Wait", "Please Wait", MB_OK);
   system("slmgr /xpr");
}
