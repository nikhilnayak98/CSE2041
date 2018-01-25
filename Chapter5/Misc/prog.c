#include "stdio.h"
void main()
{
	int x;
	char ch;
	scanf("%d", &x);
	while(x != -1)
	{
		printf("%d\n", x);
		scanf("%d", &x);
		scanf("%c", &ch);
	}
}
