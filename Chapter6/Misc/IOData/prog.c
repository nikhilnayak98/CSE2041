/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Writing n data.
*/
#include <stdio.h>
void main()
{
	int n, x;
	FILE *ptr = fopen("input.txt", "r"), *ptr1 = fopen("output.txt", "w");

	while((n = fscanf(ptr, "%d", &x)) != EOF) 
	{
		fprintf(ptr1, "%d ", x);
	}

	fclose(ptr);
	fclose(ptr1);
}
