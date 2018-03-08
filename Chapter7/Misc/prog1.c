/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Prime elements in an array
*/
#include <stdio.h>
#include <math.h>
int isprime(int);
void main()
{
	int arr[10], i;
	
	printf("\nEnter first 5 elements of the array - \n");
	
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(i = 0; i < 5; i++)
	{
		if(isprime(arr[i]))
			printf("\n Prime element - %d", arr[i]);
	}
	printf("\n");
}

int isprime(int n)
{
	int i;
	if((n == 1) || (n == 0))
		return 0;
 
	for(i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
			return 0;
	}
	return 1;
}
