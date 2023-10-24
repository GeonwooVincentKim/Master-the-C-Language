#include <stdio.h>
#include <string.h>

/*
 * 1. () <parentheses> - signifying it's a function
 * 2. function - contains code inside of it
 * 3. {} <squiggly bracket> 
 * - 1. defines starting of the function (left), and the ending of the function (right)
 * - 2. referred to as a block of code
 * */
int main() {
    // 4. body - block of code for the function main
    printf("Hi, my name is Geonwoo\n");
    char str1[] = "Hello";
    char str2[] = "hello";
    int result = strcmp(str1, str2);
    
    printf("Result = %d", result);
    
    return 0;
}
