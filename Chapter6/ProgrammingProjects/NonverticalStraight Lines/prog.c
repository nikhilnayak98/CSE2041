/*
*Name - Nikhil Ranjan Nayak
*Regd No - 1641012040
*Desc -	Hospital Suppy
*/
#include <stdio.h>
int get_problem()
{
	int ch;
	printf("\nSelect the form that you would like to convert to slope-intercept form:");
	printf("\n1) Two-point form (you know two points on the line)");
	printf("\n2) Point-slope form (you know the line's slope and one point)");
	printf("\n=>");
	scanf("%d", &ch);
	return ch;
}

void get2_pt(double *x1, double *y1, double *x2, double *y2)
{
	printf("\nEnter the x-y coordinates of the first point separated by a space=>");
	scanf("%lf", &*x1);
	scanf("%lf", &*y1);
	printf("\nEnter the x-y coordinates of the second point separated by a space=>");
	scanf("%lf", &*x2);
	scanf("%lf", &*y2);
}

void get_pt_slope(double *x, double *y, double *slope)
{
	printf("\nEnter the slope=>");
	scanf("%lf", &*slope);
	printf("\nEnter the x-y coordinates of the point separated by a space=>");
	scanf("%lf", &*x);
	scanf("%lf", &*y);
}

void slope_intcpt_from2_pt(double x1, double y1, double x2, double y2, double *slope, double *b)
{
	*slope = ((y2 - y1) / (x2 - x1));
	*b = y1 - (*slope * x1);
}

double intcpt_from_pt_slope(double x, double y, double slope)
{
	return (y - (slope * x));
}

void display2_pt(double x1, double y1, double x2, double y2)
{
	printf("\nTwo-point form");
	printf("\n %3c (%.2f - %.2f)", ' ', y2, y1);
	printf("\nm = --------------");
	printf("\n %3c (%.2f - %.2f)", ' ', x2, x1);
}

void display_pt_slope(double x, double y, double slope)
{
	printf("\nPoint-slope form");
	printf("\ny – %.2f = %.2f(x – %.2f)", y, slope, x);
}

void display_slope_intcpt(double slope, double b)
{
	printf("\nSlope-intercept form");
	printf("\ny = %.2fx + %.2f", slope, b);
}

void main()
{
	int choice;
	char ch = 'Y';
	while(ch == 'Y')
	{
		choice = get_problem();
		if(choice == 1)
		{
			double x1, y1, x2, y2, slope, b;
			get2_pt(&x1, &y1, &x2, &y2);
			display2_pt(x1, y1, x2, y2);
			slope_intcpt_from2_pt(x1, y1, x2, y2, &slope, &b);
			display_slope_intcpt(slope, b);
		}
		else if(choice == 2)
		{	
			double x, y, slope, b;
			get_pt_slope(&x, &y, &slope);
			display_pt_slope(x, y, slope);
			b = intcpt_from_pt_slope(x, y, slope);
			display_slope_intcpt(slope, b);
		}
		printf("\n\nDo another conversion (Y or N)=>");
		scanf(" %c", &ch);
	}
}
