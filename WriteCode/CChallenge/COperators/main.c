#include <stdio.h>

int f (int n) {
    int value = n;
    
    if (value > 1) f(value / 2);
    return value;
}

int main() {
    unsigned int a = 60;
    unsigned int b = 13;
    
    signed int a1 = 60;
    signed int b1 = 13;
    
    int a2 = 60;
    int b2 = 13;
    
    printf("A: ", f(a % 2), f(a1 % 2), f(a2 % 2));
    printf("B: %d %d %d\n", b, b1, b2);
}

