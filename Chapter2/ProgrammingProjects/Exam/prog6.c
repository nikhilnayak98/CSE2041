/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Exam Marks and Grade predictor
*/
#include "stdio.h"
int main()
{
	char grade;
	double min_avg,cur_avg, percentage,req;
	printf("\n Enter desired grade ");
	scanf("%c", &grade);
	printf("\n Enter minimum average required ");
	scanf("%lf", &min_avg);
	printf("\n Enter current average in course ");
	scanf("%lf", &cur_avg);
	printf("\n Enter how much the final counts as a percentage of the course grade ");
	scanf("%lf", &percentage);
	req = ((min_avg - cur_avg)*(100/(double)percentage)) + cur_avg;
	printf("\n You need a score of %f on the final to get a %c .\n", req, grade);
}
	
