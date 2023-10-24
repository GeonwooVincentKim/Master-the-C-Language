#include <iostream>

extern int x;
/*
 * 1. main .o has reference 'x'
 * 2. iostream
 * 3. linker needs to put main.o and iostream together, create main.exe
 * */
int main() {
    std::cout << "Hello World" << std::endl;
    std::cout << x; // 4. print the value, but cannot find in iostream
    return 0;
}
