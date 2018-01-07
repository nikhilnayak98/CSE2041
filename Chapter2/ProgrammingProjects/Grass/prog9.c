/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Time Required to Cut grass
*/
#include "stdio.h"
int main()
{
	double yard_length,yard_width,house_length,house_width,grass_area,time;
	printf("\n Enter yard length - ");
	scanf("%lf", &yard_length);
	printf("\n Enter yard width - ");
	scanf("%lf", &yard_width);
	printf("\n Enter house length - ");
	scanf("%lf", &house_length);
	printf("\n Enter house width - ");
	scanf("%lf", &house_width);
	grass_area = (yard_length*yard_width) - (house_length*house_width);
	printf("\n Area of grass - %f sq ft", grass_area);
	time = (double)grass_area/2;
	printf("\n Time required - %f secs \n", time);
}
