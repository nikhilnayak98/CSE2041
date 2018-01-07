/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Perpendicular Bisector Calculator
Formula - y = slope_bisector(x - ymid) + xmid
*/
#include "stdio.h"
int main()
{
	double x1,y1,x2,y2,slope,xmid,ymid,slope_bisector,b;
	printf("\n Enter x1 - ");
	scanf("%lf", &x1);
	printf("\n Enter y1 - ");
	scanf("%lf", &y1);
	printf("\n Enter x2 - ");
	scanf("%lf", &x2);
	printf("\n Enter y2 - ");
	scanf("%lf", &y2);
	slope = (double)(y2 - y1)/(x2 -x1);
	xmid = (double)(x1 + x2)/2;
	ymid = (double)(y1 + y2)/2;
	slope_bisector = -1/(double)slope;
	b = ymid - slope_bisector*xmid;
	printf("\n Equation of perpendicular bisector - \n Y = %fX + %f \n", slope_bisector, b);
}
	
