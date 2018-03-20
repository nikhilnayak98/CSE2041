/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Copy.
*/
#include <stdio.h>
#include <string.h>
#define MAX 20

void main()
{
	FILE *output = fopen("output.txt", "w"), *input = fopen("input.txt", "r");
	char str[MAX];
	int i = 0;
	
	fgets(str, (MAX - 1), input);
	while(!feof(input))
	{
		i++;
		fprintf(output, "%d %s", i, str);
		fgets(str, (MAX - 1), input);
	}
	
	fclose(output);
	fclose(input);
}
