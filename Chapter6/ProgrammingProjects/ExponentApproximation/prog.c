/*
*Name - Nikhil Ranjan Nayak
*Regd No - 1641012040
*Desc -	Exponent approximation
*/
#include <stdio.h>
#include <math.h>
void approximate(int, double*);
void main()
{
    int x = 1;
    double approx, difference = 1;
    
    printf("\nexp(1)  - %.7f", exp(1));
    
    while(difference > 0.000001)
    {
	    approximate(x, &approx);
	    difference = fabs(exp(1) - approx);
	    x++;
    }
    
    printf("\nApproximated value - %.7f\n", approx);
}

void approximate(int x, double *approx)
{
	double temp = ((2.0 * x) + 1.0) / ((2.0 * x) - 1.0);
	*approx = pow(temp, x);
}