/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - BTU Calculator
*/
#define ENERGY 138095.238095238 
#include "stdio.h"
int main()
{
	int gallons;
	double eff,btu;
	printf(" \n Enter number of gallons - ");
	scanf("%d", &gallons);
	printf("\n Efficiency - ");
	scanf("%lf", &eff);
	btu = (1 - ((100-eff)/100))*(((double)gallons)*ENERGY);
	printf("\n BTU - %f \n", btu);
}
	
