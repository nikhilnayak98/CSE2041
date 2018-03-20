/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - String file.
*/
#include <stdio.h>
#include <string.h>
#define MAX 20
void deblank(char[], char[]);
void main()
{
	char str[MAX], str2[MAX];
	printf("Enter a string - ");
	fgets(str, (MAX - 1), stdin);
	deblank(str, str2);
	printf("%s\n", str2);
}

void deblank(char input[], char output[])
{
	int i;
	char *s;
	
	strcpy(output, "");

	s = strtok(input, " ");
	while(s != NULL)
	{
		strcat(output, s);
		s = strtok(NULL, " ");
	}
}
