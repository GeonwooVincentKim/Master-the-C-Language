#include <stdio.h>
#include <limits.h>

int main() {
    int min = INT_MIN;
    printf("INT_MIN = %d\n", min);
    printf("INT_MIN * -1 = %d\n", min * -1);
    printf("INT_MIN * -2 = %d\n", min * -2);
    
    return 0;
}
