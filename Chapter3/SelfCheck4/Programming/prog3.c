/*
*Name - Nikhil Ranjan Nayak
*Regd no - 1641012040
*Desc - miles kms calc
*/
#define KMS_PER_MILE 1.609
#include "stdio.h"
void display(double);
int calc(double);
void main()
{
	double miles, kms;
	
	// Get the distance in miles.
	printf("Enter the distance in miles> ");
	scanf("%lf", &miles);
	kms = calc(miles);
	display(kms);
	
}

void display(double kms)
{
	// Display the distance in kilometers.
	printf("That equals %f kilometers.\n", kms);
}

double calc(double miles)
{
	// Convert the distance to kilometers.
	double kms = KMS_PER_MILE * miles;
	return kms;
}
