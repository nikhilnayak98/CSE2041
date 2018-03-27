#include <stdio.h>
void print_res(int);
void main()
{
	print_res(3);
}

void print_res(int n)
{
	char str[10];
	if(n == 1)
	{
		scanf("%s", str);
		printf("%s", str);
	}
	else
	{
		scanf("%s", str);
		print_res(n - 1);
		printf("%s", str);
	}
}
