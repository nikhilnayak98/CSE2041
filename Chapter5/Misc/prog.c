#include "stdio.h"
void main()
{
	int x;
	scanf("%d", &x);
	while(x != -1)
	{
		printf("%d\n", x);
		scanf("%d", &x);
	}
}
