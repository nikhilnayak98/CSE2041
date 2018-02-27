/*
*Name - Nikhil Ranjan Nayak
*Regd No - 1641012040
*Desc -	Sum and Average
*/
#include <stdio.h>
void sum_n_avg(double, double, double*, double*);
void main()
{
	double one, two, three, sum_of_2, avg_of_2;
	printf("Enter three numbers - ");
	scanf("%lf %lf %lf", &one, &two, &three);
	sum_n_avg(one, two, &sum_of_2, &avg_of_2);
	sum_n_avg(sum_of_2, three, &sum_of_2, &avg_of_2);
	printf("\nSum - %lf", sum_of_2);
	printf("\nAverage - %lf\n", avg_of_2);
}

void sum_n_avg(double one, double two, double *sum_of_2, double *avg_of_2)
{
	*sum_of_2 = one + two;
	*avg_of_2 = *sum_of_2 / 2.0;
}
