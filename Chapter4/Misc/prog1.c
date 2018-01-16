#include "stdio.h"
int f();
int main()
{
	int a = 10;
	a = f();
	printf("%d\n",a);
}

int f()
{
	int x,y;
	printf("\nHi");
	scanf("%d%d, &x, &y");
}
