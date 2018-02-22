/*
*Name - Nikhil Ranjan Nayak
*Regd No - 1641012040
*Desc -	Paise to Rupee
*/
#include <stdio.h>
#include <math.h>
void convert(int, int*, int*);
void main()
{
	int rupees, leftover, n;
	double paise;
	printf("\nEnter paise - ");
	n = scanf("%lf", &paise);
	if(n == 1)
	{
		if(paise < 0)
			printf("\nPaise cannot be in negative\n");
		else if(ceil(paise) > paise)
			printf("\nPaise cannot be in decimal\n"); 
		else
		{
			convert(paise, &rupees, &leftover);
			printf("\nRupees - %d", rupees);
			printf("\nLeft Over Paise - %d\n", leftover);
		}
	}
	else
		printf("\nWrong Input\n");
}

void convert(int paise, int *rupees, int *leftover)
{
	*leftover = paise % 100;
	*rupees = paise / 100;
}
