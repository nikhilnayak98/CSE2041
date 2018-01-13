/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - House Cost Calculator
*/
#include "stdio.h"
#define RUN_PERIOD 5
double calculate_cost(double,double,double);
void instruct();
void main()
{
	instruct();
	instruct();
	instruct();
}

void instruct()
{
	double init_cost, tax_rate, annual_fuel_cost, total_cost;
	
	printf("\n Enter initial cost - ");
	scanf("%lf", &init_cost);
	printf("\n Enter annual fuel cost - ");
	scanf("%lf", &annual_fuel_cost);
	printf("\n Enter tax rate - ");
	scanf("%lf", &tax_rate);
	total_cost = calculate_cost(init_cost, tax_rate, annual_fuel_cost);
	printf("\n Total Cost - %.3f \n", total_cost);
}
double calculate_cost(double init_cost,double tax_rate,double annual_fuel_cost)
{
	double total_cost, cost_temp;
	cost_temp = annual_fuel_cost * RUN_PERIOD;
	init_cost = init_cost + (init_cost * tax_rate * RUN_PERIOD);
	total_cost = cost_temp + init_cost;
	return total_cost;
}
