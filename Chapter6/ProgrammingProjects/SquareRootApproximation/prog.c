/*
*Name - Nikhil Ranjan Nayak
*Regd No - 1641012040
*Desc -	Square root approximation
*/
#include <stdio.h>
#include <math.h>
#define DIFFERENCE 0.005
void approximate_square_root(double, double, double*);
void main()
{
	double n, LG = 0.1, NG;
	
	n = 4;
	printf("\nNumber %lf - ", n);
	approximate_square_root(n, LG, &NG);
	printf("\nSquare root - %lf", NG);
	
	n = 120.5;
	printf("\n\nNumber %lf - ", n);
	approximate_square_root(n, LG, &NG);
	printf("\nSquare root - %lf", NG);
	
	n = 88;
	printf("\n\nNumber %lf - ", n);
	approximate_square_root(n, LG, &NG);
	printf("\nSquare root - %lf", NG);
	
	n = 36.01;
	printf("\n\nNumber %lf - ", n);
	approximate_square_root(n, LG, &NG);
	printf("\nSquare root - %lf", NG);
	
	n = 10000;
	printf("\n\nNumber %lf - ", n);
	approximate_square_root(n, LG, &NG);
	printf("\nSquare root - %lf", NG);
	
	n = 0.25;
	printf("\n\nNumber %lf - ", n);
	approximate_square_root(n, LG, &NG);
	printf("\nSquare root - %lf", NG);
	
	printf("\n");
}

void approximate_square_root(double N, double LG, double *NG)
{
	double d;
	do
	{
	    *NG = 0.5 * (LG + (N / LG));
	    d = fabs(*NG - LG);
	    LG = *NG;
	}while(d > DIFFERENCE);
}