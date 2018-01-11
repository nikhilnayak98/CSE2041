/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Relay Race
*/
#include "stdio.h"
#include "math.h"
#define DISTANCE 1.60934
void main()
{
	int min, sec;
	printf("\n Enter minutes - ");
	scanf("%d", &min);
	printf("\n Enter seconds - ");
	scanf("%d", &sec);
	printf("\n Speed in km/s - %f");
}

double cal_speed_km(int time)
{
	return (DISTANCE/time);
}

double cal_speed_fps(int time)
{
	return (DISTANCE/time);
}

double cal_speed_mps(int time)
{
	return (DISTANCE/time);
}
