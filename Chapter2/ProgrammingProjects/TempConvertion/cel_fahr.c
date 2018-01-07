/*
Name - Nikhil Ranjan Nayak
Redg No - 1641012040
Desc - Temperature Convertion
*/
#include "stdio.h"
int main()
{
	int choice;
	double farh,cels;
	scanf("%lf", &cels);
	farh = (cels*(double)(9)/(5)) + 32;
	printf("\n Fahrenheit - %f \n", farh);
}
