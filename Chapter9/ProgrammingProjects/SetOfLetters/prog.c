/*
Name: Nikhil Ranjan Nayak
Regd No: 1641012040
Desc: Set of letters
*/
#include <stdio.h>
#define MAX 4
void one_ele_subs(char[], int);
void two_ele_subs(char[], int, int);
void three_ele_subs(char[], int);
void main()
{
	char letters[] = "ACEG";
	one_ele_subs(letters, 0);
	printf("\n");
	two_ele_subs(letters, 0, 1);
	printf("\n");
	three_ele_subs(letters, 0);
	printf("\n");
}

void one_ele_subs(char letters[], int i)
{
	if(i == MAX)
		return;
	else
	{
		printf("%c,", letters[i]);
		one_ele_subs(letters, i + 1);
	}
}

void two_ele_subs(char letters[], int i, int j)
{
	if(i == MAX)
		return;
	else
	{
		printf("\n{%c, %c}", letters[i], letters[j]);
		two_ele_subs(letters, i + 1, j + 1);
	}
}

void three_ele_subs(char letters[], int i)
{
	if(i == MAX)
		return;
	else
	{
		printf("\n{%c, %c, %c}", letters[i], letters[i + 1], letters[i + 2]);
		three_ele_subs(letters, i + 1);
	}
}
