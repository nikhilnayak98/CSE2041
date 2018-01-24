/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Use of Manning’s equation.
*/
#include "stdio.h"
#include "math.h"
#define R_COEFF 0.014
#define SLOPE 0.0015
#define FLOW 1000
#define WIDTH 15
double cal_flow(double);
int within_desired(double);
void main()
{	
	double depth, temp_flow, difference, error;
	int flag = -1, i = 0;
	
	printf("\nAt a depth of 5.0000 feet, the flow is 641.3255 cubic feet per second.");
	
	while(flag != 1)
	{
		if(i == 0)
		{
			printf("\nEnter your initial guess for the channel depth when the flow is %d cubic feet per second", FLOW);
			printf("\nEnter guess>");
		}
		else
			printf("\nEnter guess>");
		scanf("%lf", &depth);
		temp_flow = cal_flow(depth);
		
		difference = (double)FLOW - temp_flow;
		error = (difference / FLOW) * 100;
	
		printf("\nDepth: %.4f Flow: %.4f cfs Target: 1000 cfs Difference: %.4f Error: %.4f percent", depth, temp_flow, difference, error);
		
		flag = within_desired(temp_flow);
		i = -1;
	}
}

double cal_flow(double depth)
{
	double area, hydraulic_radius, temp_flow;
	
	hydraulic_radius = (depth * WIDTH) / ((2 * depth) + WIDTH);
	area = depth * WIDTH;
	temp_flow = (1.486/R_COEFF) * (area * pow(cbrt(hydraulic_radius), 2)) * sqrt(SLOPE);
	
	return temp_flow;
}

int within_desired(double num)
{
	if(num >= ((FLOW - ((10/100) * FLOW))) && (num <= (FLOW + ((10/100) * FLOW))))
		return 1;
	return 0;
}
