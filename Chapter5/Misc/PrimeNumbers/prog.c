/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - No of prime numbers between 1 and 50
*/
#include "stdio.h"
#include "math.h"
int isprime(int);
void main()
{
	int i, ctr = 2;
	for(i = 4; i <= 50; i++)
	{
		if(isprime(i) == 1)
			ctr++;
	}
	printf("%d\n", ctr);
}

int isprime(int n)
{
	int i, ctr = 0;
	for(i = 1; i <= sqrt(n); i++)
	{
		if(n % i == 0)
			ctr++;
	}
	if(ctr == 1)
		return 1;
	return 0;
}
