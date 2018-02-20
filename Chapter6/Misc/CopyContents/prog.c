/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Copy contents from one file to another.
*/
#include <stdio.h>
void userinput();
void main()
{
	FILE *ptr, *ptr1;
	int x;
	double y;
	userinput();
	ptr = fopen("input.txt", "r");
	fscanf(ptr, "%d %lf", &x, &y);
	fclose(ptr);
	ptr1 = fopen("output.txt", "w");
	fprintf(ptr, "%d %lf", x, y);
	fclose(ptr);
}

void userinput()
{
	FILE *ptr;
	int x;
	double y;
	printf("\nEnter Integer Value - ");
	scanf("%d", &x);
	printf("\nEnter Double Value - ");
	scanf("%lf", &y);
	ptr = fopen("input.txt", "w");
	fprintf(ptr, "%d %lf", x, y);
	fclose(ptr);
}
