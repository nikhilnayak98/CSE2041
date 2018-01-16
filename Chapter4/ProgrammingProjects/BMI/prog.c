/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - BMI Calculator
*/
#include "stdio.h"
double cal_bmi(double, double);
void main()
{
	double height, weight, bmi;
	printf("\n Enter height in inches - ");
	scanf("%lf", &height);
	printf("\n Enter weight in pounds - ");
	scanf("%lf", &weight);
	bmi = cal_bmi(height, weight);
	printf("\n BMI - %f", bmi);
	if(bmi < 18.2)
		printf("\n Underweight \n");	// Below 18.5 Underweight
	else if(bmi < 24.9)
		printf("\n Normal \n");		// 18.5–24.9 Normal
	else if(bmi < 29.9)
		printf("\n Overweight \n");	// 25.0–29.9 Overweight
	else
		printf("\n Obese \n");		// 30.0 and above Obese
}

double cal_bmi(double height, double weight)
{
	double bmi = ((double)702 * weight)/(height *height);
	return bmi;
}
