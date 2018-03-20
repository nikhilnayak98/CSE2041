/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Find hydroxide.
*/
#include <stdio.h>
#include <string.h>
int hydroxide(char[]);

void main()
{
	char chemical[8];
	printf("\nEnter chemical - ");
	scanf("%s", chemical);
	if(hydroxide(chemical))
		printf("\nIt is a hydroxide.");
	else
		printf("\nIt is not a hydroxide.");
}

int hydroxide(char chemical[])
{

}
