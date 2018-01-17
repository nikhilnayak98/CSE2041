/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Display chemical emissions
*/
#include "stdio.h"
void determine_message(int, double, int);
void main()
{
    int pollutant, odometer_reading;
    double grams_emitted;
    printf("\n(1) Carbon monoxide");
    printf("\n(2) Hydrocarbons");
    printf("\n(3) Nitrogen oxides");
    printf("\n(4) Nonmethane hydrocarbons");
    
    printf("\nEnter pollutant number>>");
    scanf("%d", &pollutant);
    if((pollutant < 1) || (pollutant > 4))
        printf("\nWrong Selection");
    else
    {
        printf("\nEnter number of grams emitted per mile>>");
        scanf("%lf", &grams_emitted);
        printf("\nEnter odometer reading>>");
        scanf("%d", &odometer_reading);
        determine_message(pollutant, grams_emitted, odometer_reading);
    }
}

void determine_message(int pollutant, double grams_emitted, int odometer_reading)
{
    if(pollutant == 1)
    {
        if(odometer_reading <= 50000)
        {
            if(grams_emitted > 3.4)
                printf("\nEmissions exceed permitted level of 3.4 grams/mile.\n");
            else
                printf("\nEmissions do not the exceed permitted level.\n");
        }
        else if(odometer_reading > 50000)
        {
            if(grams_emitted > 4.2)
                printf("\nEmissions exceed permitted level of 4.2 grams/mile.\n");
            else
                printf("\nEmissions do not the exceed permitted level.\n");
        }
    }
    else if(pollutant == 2)
    {
        if(odometer_reading <= 50000)
        {
            if(grams_emitted > 0.31)
                printf("\nEmissions exceed permitted level of 0.31 grams/mile.\n");
            else
                printf("\nEmissions do not the exceed permitted level.\n");
        }
        else if(odometer_reading > 50000)
        {
            if(grams_emitted > 0.39)
                printf("\nEmissions exceed permitted level of 0.39 grams/mile.\n");
            else
                printf("\nEmissions do not the exceed permitted level.\n");
        }
    }
    else if(pollutant == 3)
    {
        if(odometer_reading <= 50000)
        {
            if(grams_emitted > 0.4)
                printf("\nEmissions exceed permitted level of 0.4 grams/mile.\n");
            else
                printf("\nEmissions do not the exceed permitted level.\n");
        }
        else if(odometer_reading > 50000)
        {
            if(grams_emitted > 0.5)
                printf("\nEmissions exceed permitted level of 0.5 grams/mile.\n");
            else
                printf("\nEmissions do not the exceed permitted level.\n");
        }
    }
    else if(pollutant == 4)
    {
        if(odometer_reading <= 50000)
        {
            if(grams_emitted > 0.25)
                printf("\nEmissions exceed permitted level of 0.25 grams/mile.\n");
            else
                printf("\nEmissions do not the exceed permitted level.\n");
        }
        else if(odometer_reading > 50000)
        {
            if(grams_emitted > 0.31)
                printf("\nEmissions exceed permitted level of 0.31 grams/mile.\n");
            else
                printf("\nEmissions do not the exceed permitted level.\n");
        }
    }
    
}