/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Relay Race
*/
#include "stdio.h"
#define DISTANCE 1
double cal_speed_km(double);
double cal_speed_fps(double);
double cal_speed_mps(double);
void instruct();
void main()
{
	instruct();
	instruct();
	instruct();
	instruct();
}

void instruct()
{
	double time, min, sec;
	double km,fps,mps;
	
	printf("\n Enter minutes - ");
	scanf("%lf", &min);
	printf("\n Enter seconds - ");
	scanf("%lf", &sec);
	time = (min * 60) + sec;
	km = cal_speed_km(time);
	fps = cal_speed_fps(time);
	mps = cal_speed_mps(time);
	printf("\n Speed in fps - %f", fps);
	printf("\n Speed in mps - %f \n", mps);

}

double cal_speed_km(double time)
{
	return ((DISTANCE*1.60934)/time);
}

double cal_speed_fps(double time)
{
	return ((double)5280*DISTANCE/time);
}

double cal_speed_mps(double time)
{
	return (1609.34 * DISTANCE/time);
}
