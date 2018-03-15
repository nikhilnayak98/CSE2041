/*
Name: Nikhil Ranjan Nayak
Regd No: 1641012040
Desc: Peabody Public Utilities 
*/
#include <stdio.h>
#define ROW 2
#define COL 6
void matrix_diff(double[][COL], double[][COL], double[][COL]);
void display(double[][COL]);
void main()
{
	FILE *male = fopen("male.txt", "r"), *female = fopen("female.txt", "r");
	double MALE_MAT[ROW][COL], FEMALE_MAT[ROW][COL], DIFF_MAT[ROW][COL];
	int i, j;
	
	while(!feof(male))
	{
		for(i = 0; i < ROW; i++)
			for(j = 0; j < COL; j++)
				fscanf(male, "%lf", &MALE_MAT[i][j]);
	}
	
	while(!feof(female))
	{
		for(i = 0; i < ROW; i++)
			for(j = 0; j < COL; j++)
				fscanf(female, "%lf", &FEMALE_MAT[i][j]);
	}
	
	matrix_diff(MALE_MAT, FEMALE_MAT, DIFF_MAT);
	
	printf("\nMale");
	display(MALE_MAT);
	
	printf("\n\nFemale");
	display(FEMALE_MAT);
	
	matrix_diff(MALE_MAT, MALE_MAT, DIFF_MAT);
	
	printf("\nDifference");
	display(FEMALE_MAT);
	
	fclose(male);
	fclose(female);
}

void matrix_diff(double A[][COL], double B[][COL], double C[][COL])
{
	int i, j;
	for(i = 0; i < ROW; i++)
	{
		for(j = 0; j < COL; j++)
		{
			C[i][j] = A[i][j] - B[i][j];
		}
	}
}

void display(double A[][COL])
{
	int i, j, year = 1950;
	printf("\nYear %3c Black %3c White\n", ' ', ' ');
	for(i = 0; i < COL; i++)
	{
		printf("\n%d %2c", year, ' ');
		for(j = 0; j < ROW; j++)
		{
			printf("%.1f  ", A[i][j]);
		}
		year += 10;
	}
}
