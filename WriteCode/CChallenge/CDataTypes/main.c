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
    
	return 0;
}
