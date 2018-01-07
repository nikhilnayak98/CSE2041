/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Hydroelectric Dam
*/
#define G 9.8;
#include "stdio.h"
int main()
{
	double height,mass,work,megawatt;
	printf("\n Enter height of the dam in meters ");
	scanf("%lf", &height);
	printf("\n Enter Number of cubic meters of water ");
	scanf("%lf", &mass);
	work = mass * height * G;
	work = work*0.9;
	megawatt = work/1000000;
	printf("\n Number of Megawatts generated %f \n", megawatt);
}
