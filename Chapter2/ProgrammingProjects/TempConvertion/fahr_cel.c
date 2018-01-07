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
	scanf("%lf", &farh);
	cels = (farh-32)*(double)(5)/(9);
	printf("\n Celsius - %f \n", cels);
}
