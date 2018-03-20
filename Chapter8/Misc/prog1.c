/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - String copy.
*/
#include <stdio.h>
#include <string.h>

void main()
{
	char str[20];
	fgets(str, 15, stdin);
	
	int n = strlen(str) - 1;
	char str2[n];
	
	if(n % 2 == 0)
	{
		strncpy(str2, str + ((n / 2) - 1), ((n / 2) - 1));
	}
	else
	{
		strncpy(str2, str + (n / 2), ((n / 2) - 1));
	}
	printf("%s \n", str2);
}
