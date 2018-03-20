/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - strtok() implementation.
*/
#include <stdio.h>
#include <string.h>

void main()
{
	char str[] = {"I' m in PP1, lab"}, *s; 
	int n = strlen(str);
	char temp[n];
	strcpy(temp, str);
	
	s = strtok(str, "'");
	
	while(s != NULL)
	{
		printf("%s\n", s);
		s = strtok(NULL, ",");
	}
}
