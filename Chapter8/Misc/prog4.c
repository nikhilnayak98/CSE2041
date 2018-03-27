#include <stdio.h>
void main()
{
	int arr[5], *arr_int[5], i, k = 10;
	
	for(i = 0; i < 5; i++)
	{
		arr[i] = k;
		k += 10;
	}
	
	for(i = 0; i < 5; i++)
	{
		arr_int[i] = &arr[i];
	}
	
	printf("%d\n", *arr_int[1]++);
}
