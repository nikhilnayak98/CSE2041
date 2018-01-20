/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - To process a collection of daily high temperatures.
*/
#include "stdio.h"
void main()
{
    int n, i, hot_days = 0, cold_days = 0, pleasant_days = 0, avg_temp, temp_sum;
    double temp;
    while((n = scanf("%lf", &temp)) != EOF)
    {
        temp_sum += temp;
        if(temp >= 85)
        {
            printf("\n%.3f is a Hot Day\n", temp);
            hot_days++;
        }
        else if(temp >= 60)
        {
            printf("\n%.3f is a Pleasant Day\n", temp);
            pleasant_days++;
        }
        else
        {
            printf("\n%.3f is a Cold Day\n", temp);
            cold_days++;
        }
    }
    
    avg_temp = temp_sum / (hot_days + cold_days + pleasant_days);
    
    printf("\nNumber of Hot Days - %d", hot_days);
    printf("\nNumber of Pleasant Days - %d", cold_days);
    printf("\nNumber of Cold Days - %d\n", pleasant_days);
    
    printf("\nAverage Temperature is - %d\n", avg_temp);
}