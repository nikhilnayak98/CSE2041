/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Calculate the day's number in year
*/
#include "stdio.h"
void main()
{
	int day, year, month, days = 0;
	printf("\n Enter day - ");
	scanf("%d", &day);
	printf("\n Enter month - ");
	scanf("%d", &month);
	printf("\n Enter year - ");
	scanf("%d", &year);
	
	if(month > 11)
		days += 31;
	if(month > 10)
		days += 30;
	if(month > 9)
		days += 31;
	if(month > 8)
		days += 31;
	if(month > 7)
		days += 30;
	if(month > 6)
		days += 31;
	if(month > 5)
		days += 30;
	if(month > 4)
		days += 31;
	if(month > 3)
		days += 30;
	if(month > 2)
	{
		if(leap(year) == 1)
			days += 29;
		else
			days += 28;
	}
	if(month > 1)
		days += 31;
		
	days += day;
	printf("\n Day Number - %d\n", days);
}

int leap(int year)
{
	if(((year % 4 == 0) && (year % 100 !=0)) || ((year % 100 == 0) && (year % 400 == 0)))
		return 1;
	return 0;
}
