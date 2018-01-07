/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Water Cost Estimator
*/
#include "stdio.h"
#include "math.h"
#define OLD_FLUSH 15
#define NEW_FLUSH 2
#define COST 150
int main()
{
	int toilets, persons;
	double old_water_used,new_water_used,diff;
	printf("\n Enter number of persons - ");
	scanf("%d", &persons);
	toilets = ceil((double)persons/3);
	old_water_used = OLD_FLUSH*14;
	new_water_used = NEW_FLUSH*14;
	diff = old_water_used - new_water_used;
	printf("\n Cost of water saved - %f", diff);
	printf("\n Total Amout - %f \n", (double)toilets*COST);
}
	
