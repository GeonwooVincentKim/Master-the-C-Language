#include <stdio.h>
#include <stdbool.h> // C99 Standard

int main(int argc, char **argv)
{
//    _Bool myBoolean = 1; // C89 Standard
//    bool myBoolean1 = true; // You have to use stdbool header
	printf("hello world\n");
    
    enum gender {male, female};
    enum gender myGender;
    myGender = male;
    
    printf("%d", myGender);
    
    enum gender anotherGender = female;
    bool isMale = (myGender == anotherGender);
    
    printf("%d", isMale);
    printf("\n\n");
    
    int numberOfArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];
    
    printf("Number of Arguments: %d\n", numberOfArguments);
    printf("Argument 1 is the program name: %s\n", argument1);
    printf("Argument 2 is the command line argument: %s\n", argument2);
    
	return 0;
}
