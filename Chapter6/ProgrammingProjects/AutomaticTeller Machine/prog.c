/*
*Name - Nikhil Ranjan Nayak
*Regd No - 1641012040
*Desc -	Automatic teller machine
*/
#include <stdio.h>
void dispense(int, int*, int*, int*);
void main()
{
	int dollars, tens = 0, fifs = 0, twens = 0;
	printf("\nEnter dollars(multiple of 10) - ");
	scanf("%d", &dollars);
	if((dollars % 10) == 0)
	{
		dispense(dollars, &tens, &twens, &fifs);
		printf("\nDollars - %d", dollars);
		if(tens != 0)
			printf("\n10s - %d", tens);
		if(twens != 0)
			printf("\n20s - %d", twens);
		if(fifs != 0)
			printf("\n50s - %d", fifs);
		printf("\n");
	}
	else
		printf("\nNot a multiple of 10\n");
}

void dispense(int dollars, int *tens, int *twens, int *fifs)
{
	*fifs = dollars / 50;
	dollars = dollars % 50;
	*twens = dollars / 20;
	dollars = dollars % 20;
	*tens = dollars / 10;
	dollars = dollars % 10;
}
