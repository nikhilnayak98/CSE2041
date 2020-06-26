/*
*Name - Nikhil Ranjan Nayak
*Regd No - 1641012040
*Desc -	Positive Integers
*/
#include <stdio.h>
#include <math.h>
void check(int, int*, int*, int*);
int digits_odd(int);
int isprime(int);
void main()
{
	int num, q1, q2, q3;
	printf("\nIs the value a multiple of 7, 11, or 13?");
	printf("\nIs the sum of the digits odd or even?");
	printf("\nIs the value a prime number?");
	
	printf("\n\nEnter a number ");
	scanf("%d", &num);
	
	check(num, &q1, &q2, &q3);
	
	if(q1 == 1)
		printf("\nYes");
	else
		printf("\nNo");
		
	if(q2 == 1)
		printf("\nOdd");
	else
		printf("\nEven");
	
	if(q3 == 1)
		printf("\nYes\n");
	else
		printf("\nNo\n");
}

void check(int num, int *q1, int *q2, int *q3)
{
	if(((num % 7) == 0) || ((num % 11) == 0) || ((num % 13) == 0))
		*q1 = 1;
	
	if(digits_odd(num))
		*q2 = 1;
		
	if(isprime(num))
		*q3 = 1;
}

int digits_odd(int num)
{
    	int temp;
	int total = 0;
	if(num == 0)
		total = 0;
	else
	{
		while (num > 0)
		{
			temp = num % 10;
			total += temp;
            		num = num / 10;
		}
	}
	
	if(total % 2 == 0)
		return 0;
	return 1;
}

int isprime(int n)
{
	int i, flag = 1;
	for(i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}


