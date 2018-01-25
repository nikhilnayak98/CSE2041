/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - sin & cos table.
*/
#include "stdio.h"
#include "math.h"
#define PI 3.14
void main()
{
	int init_degree, final_degree, step_degree;
	printf("\nEnter initial degree - ");
	scanf("%d", &init_degree);
	printf("\nEnter final degree - ");
	scanf("%d", &final_degree);
	printf("\nEnter step degree - ");
	scanf("%d", &step_degree);

	while(init_degree <= final_degree)
	{
		printf("\nsin(%d) %7c %d", init_degree, ' ',sin(init_degree));
		printf("\ncos(%d) %7c %d", init_degree, ' ',cos(init_degree));
		
		init_degree += step_degree;
	}
	printf("\n");
}
