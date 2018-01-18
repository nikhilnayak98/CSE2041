/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Calculate area
*/
#include "stdio.h"
#define PI 3.14
void main()
{
	int choice;
	double area;
	printf("\n1. Area of circle");
	printf("\n2. Area of square");
	scanf("%d", %choice);
	if(choice == 1)
	{
		double r;
		printf("\nEnter radius - ");
		scanf("%ld", &r);
		area = PI * r * r;
		printf("\nArea of circle - %f\n", area);
	}
	else if(choice == 2)
	{
		double side;
		printf("\nEnter side - ");
		scanf("%ld", &side);
		area = side * side;
		printf("\nArea of circle - %f\n", area);
	}
	else
		printf("\n Wrong Choice\n");
}
