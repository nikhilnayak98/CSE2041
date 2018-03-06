/*
*Name - Nikhil Ranjan Nayak
*Regd No - 1641012040
*Desc -	Checksum
*/
#include <stdio.h>
#include <stdlib.h>
void get_checksum(int, int*);
void operate(char ch);
void main()
{	
	char ch;
	scanf(" %c", &ch);
	operate(ch);
}

void operate(char ch)
{
	int sum, checksum;
	
	sum = (int)'.';
	sum += (int)ch;
	
	scanf(" %c", &ch);
	while(ch != '.')
	{
		sum += ((int)ch);
		scanf(" %c", &ch);
	}

	get_checksum(sum, &checksum);
	printf("checksum - %c (%d)\n", (char)checksum, checksum);
	
	scanf(" %c", &ch);
	if(ch != '.')
		operate(ch);
}

void get_checksum(int sum, int *checksum)
{
	sum %= 64;
	*checksum = sum + (int)' ';
}
