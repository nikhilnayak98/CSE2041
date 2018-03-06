#include <stdio.h>
void main()
{
	int size, i, total = 0;
	double per;
	printf("Enter size - ");
	scanf("%d", &size);
	
	int arr[size];
	printf("\nEnter values - ");
	for(i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
		total += arr[i];
	}
	
	printf("\n\nn %5c %% of total", ' ');
	
	for(i = 0; i < size; i++)
	{
		per = arr[i] * 100.0 / total;
		printf("\n%d %5c %.2f", arr[i], ' ', per);
	}
	printf("\n");
}
