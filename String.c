#include <string.h>
#include <stdlib.h>

/*
    Creates a string Make sure to use free(); when you are 
    done using the string to free up allocated memory           
*/ 
char* CreateString(char* pInputString) 
{
    if (pInputString == NULL) 
    {
        printf("%s\n", "The argument was null");
        return NULL;
    }

    char* pOutputString = (char*)malloc((strlen(pInputString) + 1));

    if (pOutputString == NULL)
    {
        printf("%s\n", "Allocaton of string memory failed");
        return NULL;
    }

    strcpy(pOutputString, pInputString);
    return pOutputString;
}
