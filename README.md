# ActivationStatus
ActivationStatus is a program you can use to check your activation status on Windows. It currently requires Windows Vista or greater.
# Building
You need [llvm-mingw](https://github.com/mstorsjo/llvm-mingw) and [make](url) installed in your Path Environment Variable. 
Then you can cd to ActivationStatus source directory and execute 
 ```console
    make -f Makefile.mingw
   ```
   which should give you a usable x86_64 binary.
