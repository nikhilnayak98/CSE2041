#include <stdio.h>
void main()
{
	char *points[5], strings[5][5] = {"Jan", "Feb", "Mar", "Apr", "May"};
	int i;
	
	for(i = 0; i < 5; i++)
	{
		points[i] = strings[i];
	}
	
	for(i = 0; i < 5; i++)
	{
		puts(points[i]);
	}
}
