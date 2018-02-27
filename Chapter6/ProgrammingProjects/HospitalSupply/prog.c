/*
*Name - Nikhil Ranjan Nayak
*Regd No - 1641012040
*Desc -	Hospital Suppy
*/
#include <stdio.h>
#include <math.h>
double fig_drops_min(double rate, double drop_factor)
{
	return ceil((rate * drop_factor) / 60); 
}

double by_weight(double rate, double weight, double concentration)
{
	return ceil(rate * weight * (1 / concentration));
}

double by_units(double rate, double concentration)
{
	return ceil(rate / concentration);
}

double fig_ml_hr(double no_hrs)
{
	return ceil((1.0 / no_hrs) * 1000);
}

int get_problem()
{
	int ch;
	printf("\n\nEnter the number of the problem you wish to solve.");
	printf("\nGIVEN A MEDICAL ORDER IN %5c CALCULATE RATE IN", ' ');
	printf("\n(1) ml/hr & tubing drop factor %5c drops / min", ' ');
	printf("\n(2) 1 L for n hr %5c ml / hr", ' ');
	printf("\n(3) mg/kg/hr & concentration in mg/ml	%5c ml / hr", ' ');
	printf("\n(4) units/hr & concentration in units/ml %5c	ml / hr", ' ');
	printf("\n(5) QUIT");
	printf("\n\nProblem>");
	scanf("%d", &ch);
	return ch;
}

void get_rate_drop_factor(double *drop_rate)
{
	double rate, drop_factor;
	printf("\nEnter rate in ml/hr=>");
	scanf("%lf", &rate);
	printf("\nEnter tubing's drop factor(drops/ml)=>");
	scanf("%lf", &drop_factor);
	*drop_rate = fig_drops_min(rate, drop_factor);
}

void get_kg_rate_conc(double *rate)
{
	double rate_in_mg, weight, concentration;
	printf("\nEnter rate in mg/kg/hr=>");
	scanf("%lf", &rate_in_mg);
	printf("\nEnter patient weight in kg=>");
	scanf("%lf", &weight);
	printf("\nEnter concentration in mg/ml=>");
	scanf("%lf", &concentration);
	*rate = by_weight(rate_in_mg, weight, concentration);
}

void get_units_conc(double *rate)
{
	double rate_in_hr, concentration;
	printf("\nEnter rate in units/hr=>");
	scanf("%lf", &rate_in_hr);
	printf("\nEnter concentration in units/ml=>");
	scanf("%lf", &concentration);
	*rate = by_units(rate_in_hr, concentration);
}

void main()
{
	int choice;
	printf("\nINTRAVENOUS RATE ASSISTANT");
	while((choice = get_problem()) != 5)
	{
		double rate;
		if(choice == 1)
		{
			get_rate_drop_factor(&rate);
			printf("\nThe drop rate per minute is %.2f", rate);
		}
		else if(choice == 2)
		{
			double no_hrs;
			printf("\nEnter number of hours=>");
			scanf("%lf", &no_hrs);
			rate = fig_ml_hr(no_hrs);
			printf("\nThe rate in milliliters per hour is %.2f", rate);
		}
		else if(choice == 3)
		{
			get_kg_rate_conc(&rate);
			printf("\nThe rate in milliliters per hour is %.2f", rate);
		}
		else if(choice == 4)
		{
			get_units_conc(&rate);
			printf("\nThe rate in milliliters per hour is %.2f", rate);
		}
	}
	printf("\n");
}
