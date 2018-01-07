/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Acceleration Calculator
*/
#include "stdio.h"
#include "math.h" 
int main()
{
	double velocity,distance,accel,time;
	printf("\n Enter Velocity in km/s - ");
	scanf("%lf", &velocity);
	printf("\n Enter Distance in m - ");
	scanf("%lf", &distance);
	velocity = velocity*(double)5/18;
	accel = (velocity*velocity)/2*distance;
	time = sqrt(2*velocity/accel);
	printf("\n Acceleration - %f ", accel);
	printf("\n Time - %f s ", time);
}
	
