/*
*Name - Nikhil Ranjan Nayak
*Regd No - 1641012040
*Desc -	Internet Lite Corporation
*/
#include <stdio.h>
#include <math.h>
#define FLAT_RATE 7.99
#define ADD_RATE 1.99
void charges(double, double*, double*);
double round_money(double);
void main()
{
	FILE *input = fopen("usage.txt", "r"), *output = fopen("charges.txt", "w");
	
	int month, year, customer_id, n;
	double hours, charge, average;
	
	fscanf(input, "%d %d", &month, &year);
	
	fprintf(output, "Charges for %d/%d", month, year);
	fprintf(output, "\n\nCustomer %5c Hours used %5c Charge per hour %5c Average cost\n", ' ', ' ', ' ');
	
	while(fscanf(input, "%d", &customer_id) != EOF)
	{
		fscanf(input, "%lf", &hours);
		fprintf(output, "%d %9c %.1f", customer_id, ' ', hours);
		charges(hours, &charge, &average);
		fprintf(output, "%13c %.2f %15c %.2f \n", ' ', charge, ' ', average);
	}
	
	fclose(input);
	fclose(output);
}

void charges(double hours, double *charge, double *average)
{
	if(hours <= 10)
		*charge = FLAT_RATE;
	else
		*charge = FLAT_RATE + (ADD_RATE * (ceil(hours) - 10.0));
	
	*average = *charge / hours;
	*charge = round_money(*charge);
	*average = round_money(*average);
}

double round_money(double num)
{
	int digits = 2;
	num = (int)((num * pow(10, digits)) + 0.5) * 0.01;
	return num;
}
