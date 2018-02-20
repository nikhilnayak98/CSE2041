/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Separate the signs, whole number part, fractional part.
*/
#include <stdio.h>
#include <math.h>
void separate(double, int*, double*, char*);
void main()
{
	int whole_num;
	double value, frac_part;
	char sign; 
	
	printf("\nEnter a number - ");
	scanf("%lf", &value);
	
	separate(value, &whole_num, &frac_part, &sign);
	
	printf("\nSign of the number %f - %c", value, sign);
	printf("\nWhole number part - %d", whole_num);
	printf("\nFractional part - %lf\n", frac_part);
}

void separate(double value, int *whole_num, double *frac_part, char *sign)
{
	double mag;
	if (value < 0)
		*sign = '-';
	else if (value == 0)
		*sign = ' ';
	else
		*sign = '+';
	
	mag = fabs(value);
	*whole_num = floor(mag);
	*frac_part = mag - *whole_num;
}
