# ActivationStatus
ActivationStatus is a program you can use to check your activation status on Windows. It currently requires Windows Vista or greater.
# Building
You need [llvm-mingw](https://github.com/mstorsjo/llvm-mingw) and [make](url) installed in your Path Environment Variable. 
Then you can cd to ActivationStatus source directory and execute 
   ```
    make -f Makefile.mingw
   ```
   which should give you a usable x86_64 binary.
   If you want to build for x86_32 instead, execute
    ```
    make -f Makefile.mingw x86=y
    ```
   which should give you a usable x86_32 binary.
   If you want to build for aarch64 instead, execute
     ```
   make -f Makefile.mingw ARM64=y
     ```
    which should give you a usable aarch64 binary.
    If you want to build for ARMv7 instead, execute 
     ```
     make -f Makefile.mingw ARM=y
     ```
    which should give you a usable ARMv7 binary.
