/*
Name: Nikhil Ranjan Nayak
Regd No: 1641012040
Desc: Extract capital letters from string
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 10
void extract(char[], char[], int);
void main()
{
	int i;
	char str[MAX], str2[MAX];
	printf("Enter a string - ");
	fgets(str, MAX + 1, stdin);
	
	puts(str);
	extract(str, str2, 0);
	puts(str2);
}

void extract(char str[], char str2[], int i)
{
	if(i == MAX)
		return;
	else
	{
		if(isupper(str[i]))
			printf("%c", str[i]);
			//str2[i] = str[i];
		extract(str, str2, (i + 1));
	}
}
