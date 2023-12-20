#include <stdio.h>

void f (int n) {
    if (n > 1) f(n / 2);
    printf("%d", n % 2);
}

int main() {
    unsigned int a = 60;
    unsigned int b = 13;
    
    signed int a1 = 60;
    signed int b1 = 13;
    
    int a2 = 60;
    int b2 = 13;
    
    printf("A: "); f(a); printf(" "); f(a1); printf(" "); f(a2);
    printf("\n");

    printf("B: "); f(b); printf(" "); f(b1); printf(" "); f(b2);
    printf("\n");
}
