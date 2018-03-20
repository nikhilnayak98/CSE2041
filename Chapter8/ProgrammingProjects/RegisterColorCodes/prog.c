/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Register color codes.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
int search(char[][7], int, char[]);
void main()
{
	char COLOR_CODES[10][7] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "gray", "white"}, band1[7], band2[7], band3[7], ch = 'y';
	int size = 10;
	
	while((ch == 'y') || (ch == 'Y'))
	{
		int resistance, index;
		printf("\nEnter the colors of the resistor's three bands, beginning with the band nearest the end. Type the colors in lowercase letters only, NO CAPS.");
	
		printf("\nBand 1 =>");
		scanf("%s", band1);
		printf("\nBand 2 =>");
		scanf("%s", band2);
		printf("\nBand 3 =>");
		scanf("%s", band3);
		
		index = search(COLOR_CODES, size, band1);
		if(index == -1)
		{
			printf("\nInvalid color: %s", band1);
			resistance = -1;
		}
		else
			resistance = index * 10;
			
		index = search(COLOR_CODES, size, band2);
		if(index == -1)
		{
			printf("\nInvalid color: %s", band2);
			resistance = -1;
		}
		else
			resistance += index;
			
		index = search(COLOR_CODES, size, band3);
		if(index == -1)
		{
			printf("\nInvalid color: %s", band3);
			resistance = -1;
		}
		else
			resistance = (resistance * (int)pow(10.0, index)) / 1000;
			
		if(resistance != -1)
			printf("\nResistance value: %d kilo-ohms", resistance);
		printf("\nDo you want to decode another resistor?\n=>");
		scanf(" %c", &ch);
	}
}

int search(char COLOR_CODES[][7], int size, char target[])
{
	int i;
	for(i = 0; i < size; i++)
	{
		if(strcmp(COLOR_CODES[i], target) == 0)
			return i;
	}
	return -1;
}
