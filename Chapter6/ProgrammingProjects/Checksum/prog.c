/*
*Name - Nikhil Ranjan Nayak
*Regd No - 1641012040
*Desc -	Checksum
*/
#include <stdio.h>
void get_checksum(int, int*);
void main()
{
	int sum, checksum;
	char ch;
	
	sum = 0;
	scanf("%c", &ch);
	while(ch != '.')
	{
		sum += ((int)ch);
		scanf(" %c", &ch);
	}
	get_checksum(sum, &checksum);
	
	printf("%c", (char)checksum);
	printf("\n");
}

void get_checksum(int sum, int *checksum)
{
	char space = ' ';
	sum %= 64;
	*checksum = sum + (int)space; 
}
