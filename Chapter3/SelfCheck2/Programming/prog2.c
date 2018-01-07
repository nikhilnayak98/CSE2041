/*
*Name - Nikhil Ranjan Nayak
*Regd no - 1641012040
*Desc - Evalute
*/
#include "stdio.h"
#include "math.h"
void main()
{
	double x1,y1,z1,x2,y2,z2,distance;
	printf("\n Enter x1 - ");
	scanf("%lf", &x1);
	printf("\n Enter y1 - ");
	scanf("%lf", &y1);
	printf("\n Enter z1 - ");
	scanf("%lf", &z1);
	printf("\n Enter x2 - ");
	scanf("%lf", &x2);
	printf("\n Enter y2 - ");
	scanf("%lf", &y2);
	printf("\n Enter z2 - ");
	scanf("%f", &z2);
	distance = sqrt(pow((x1 - x2),2) + pow((y1- y2),2) + pow((z1 -z2),2));
	printf("\n Distance - %f \n", distance);
}
