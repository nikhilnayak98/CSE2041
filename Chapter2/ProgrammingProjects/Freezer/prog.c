/* Name - Nikhil Ranjan nayak
Regd no - 1641012040
Desc - Temp Freezer Estimator
*/
#include "stdio.h"
int main()
{
	double T,t;
	int hr,min;
	printf("\n Enter how long it has been since the start of the power failure ");
	scanf("%d", &hr);
	scanf("%d", &min);
	t = (double)hr + (double)(min)/(60);
	T = ((4*t*t)/(t+2)) - 20;
	printf("\n T is %f \n", T);
}
