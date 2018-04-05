/*
Name: Nikhil Ranjan Nayak
Regd No: 1641012040
Desc: Binary Number Representation
*/
#include <stdio.h>
#include <string.h>

int display(char*);
int replace_first_x(char*, char*, char*);

void main()
{
    char str[80];
    printf("\nBinary number: ");
    scanf("%s", str);
    display(str);
    printf("\n");
}

int display(char *string)
{
    char stringA[80], stringB[80];
    if(replace_first_x(string, stringA, stringB) == 0)
    {
        printf("%s\n", string);
        return 0;
    }
    display(stringB);
    display(stringA);
    return 0;
}

int replace_first_x(char *inputstring, char *outstringA, char *outstringB)
{
    char *pch;
    pch = strchr(inputstring, 'x');
    while(pch != NULL)
    {
        *pch = '1';
        strcpy(outstringA, inputstring);
        *pch = '0';
        strcpy(outstringB, inputstring);
        return 1;
    }
    return 0;
}