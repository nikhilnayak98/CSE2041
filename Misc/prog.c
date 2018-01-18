/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Linear Congruence
*/
#include "stdio.h"
int gcd(int, int);
void main()
{
	int x, a, c, m, g;
	printf("\n a ≅ c(mod m)");
	printf("\n a - ");
	scanf("%d", &a);
	printf("\n c - ");
	scanf("%d", &c);
	printf("\n m - ");
	scanf("%d", &m);
	printf("\n %d ≅ %d(mod %d)", a, c, m);
	g = gcd(a, m);
	printf("\n GCD - %d", g);
	if(m % g == 0)
	{
		for(x = 0; x < m; x++)
		{
			if((a*x) % m == c)
				printf("\n x ≅ %d(mod %d)", x, m);
		}
		printf("\n");
	}
	else
		printf("\nNo solutions exist\n");
}

int gcd(int a, int b)
{
	if(b == 0)
		return 0;
	else
		return gcd(b, a%b);
}
