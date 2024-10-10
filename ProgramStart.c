#include <stdio.h>
#include "String.c"

int main()
{
    char someInput[12];

    printf("Wlcome \n");
    printf("LogIn or creat and account(Type singup): "); //does nothing rn
    scanf("%s\0", &someInput);


    char* myString = CreateString("this is a test");
    myString = CreateString(NULL);
    printf("%s\n", myString); 
    
    free(myString);

    char * coolMessage = CreateString("This is a pretty Cool Message");
    printf("%s\n", coolMessage);
    return 0;
}