#include <stdio.h>
#include <limits.h>

/*
 * Two's complement
 * - https://www.allaboutcircuits.com/textbook/digital/chpt-7/boolean-arithmetic/
 * */
int main() {
    int min = INT_MIN;
    printf("INT_MIN = %d\n", min);
    printf("INT_MIN * -1 = %d\n", min * -1);
    printf("INT_MIN * -2 = %d\n", min * -2);
    printf("INT_MIN * -3 = %d\n", min * -3);
    printf("INT_MIN * -4 = %d\n", min * -4);
    
    return 0;
}
