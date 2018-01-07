/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - I.V. medications information labels
*/
#include "stdio.h"
int main()
{
	double vol,mins,rate;
	printf("\n Volume to be infused (ml)");
	scanf("%lf", &vol);
	printf("\n Minutes over which to infuse");
	scanf("%lf", &mins);
	rate = vol/(mins/60);
	printf("\n VTBI - %f", rate);
}
