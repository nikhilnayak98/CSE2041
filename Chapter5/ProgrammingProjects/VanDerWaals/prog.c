/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Van der Waals equation of state for a gas.
*/
#include "stdio.h"
#define a 3.592
#define b 0.0427
#define R 0.08206
void print_table(double, double);
void main()
{
	double volume_initial, volume_final, volume_increment, kelvin_temp, moles, pressure;
	
	printf("\nPlease enter at the prompts the number of moles of carbon dioxide, the absolute temperature, the initial volume in milliliters, the final volume, and the increment volume between lines of the table.");
	
	printf("\nQuantity of carbon dioxide (moles)>");
	scanf("%lf", &moles);
	printf("\nTemperature (kelvin)>");
	scanf("%lf", &kelvin_temp);
	printf("\nInitial volume (milliliters)>");
	scanf("%lf", &volume_initial);
	printf("\nFinal volume (milliliters)>");
	scanf("%lf", &volume_final);
	printf("\nVolume increment (milliliters)>");
	scanf("%lf", &volume_increment);
	
	system("clear");
	
	printf("\nVolume (ml) %5c Pressure (atm)",' ');
	
	while(volume_initial <= volume_final)
	{
		pressure = ((moles * R * kelvin_temp) / (volume_initial/1000 - (b * moles))) - ((a * moles * moles) / volume_initial/1000 * volume_initial/1000);
		
		print_table(volume_initial, pressure);
		
		volume_initial += volume_increment;
	}
	printf("\n");
}

void print_table(double volume, double pressure)
{
	printf("\n %.2f %10c %.4f", volume, ' ', pressure);
}
