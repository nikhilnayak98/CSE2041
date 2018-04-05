/*
Name: Nikhil Ranjan Nayak
Regd No: 1641012040
Desc: Palindrome String
*/
#include <stdio.h>
#define MAX 20
void palindrome(char[], char[], int);
void main()
{
	char str[MAX], str2[MAX];
	printf("Enter a string - ");
	fgets(str, MAX + 1, stdin);
	
	printf("\nString - %s", str);
	
	palindrome(str, str2, 0);
	
	if(strcmp(str2, str) == 0)
		printf("\nIt is Palindrome String\n");
	else
		printf("\nNot a Palindrome String\n");
}

void palindrome(char str[], char str2[], int i)
{
	if(i == MAX)
		return;
	else
	{
		str2[i]= str[i];
		palindrome(str, str2, (i + 1));
	}
}
