/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Point mass in 3D
*/
#include <stdio.h>
#define COORDINATES 3
void fget_point_mass(int, int[][COORDINATES], int[], FILE*);
void center_grav(int[][COORDINATES], int[], int);
void fwrite_point_mass(int, int[][COORDINATES], int[], FILE*);
void main()
{
	FILE *input = fopen("dataset.txt", "r"), *output = fopen("output.txt", "w");;
	int n, i;
	
	fscanf(input, "%d", &n);
	int point_matrix[n][COORDINATES], masses[n];
	
	fget_point_mass(n, point_matrix, masses, input);
	fwrite_point_mass(n, point_matrix, masses, output);
	center_grav(point_matrix, masses, n);
	
	fclose(input);
	fclose(output);
}

void fget_point_mass(int n, int point_matrix[][COORDINATES], int masses[], FILE *input)
{
	int i, j;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < COORDINATES; j++)
		{
			fscanf(input, "%d", &point_matrix[i][j]);
		}
		fscanf(input, "%d", &masses[i]);
	}
}

void center_grav(int point_matrix[][COORDINATES], int masses[], int n)
{
	int i, j;
	double sum_of_masses = 0, center_of_gravity = 0, sum_of_point = 0;
	
	for(i = 0; i < n; i++)
	{
		sum_of_masses += masses[i];
	}
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < COORDINATES; j++)
		{
			sum_of_point += point_matrix[i][j];
		}
		center_of_gravity += masses[i] * sum_of_point;
	}
	
	center_of_gravity = center_of_gravity / sum_of_masses;
	printf("\nCenter of gravity - %lf\n", center_of_gravity);
}

void fwrite_point_mass(int n, int point_matrix[][COORDINATES], int masses[], FILE *output)
{
	int i, j;
	
	fprintf(output, "location");
	
	for(i = 0; i < n; i++)
	{
		fprintf(output, "\n");
		for(j = 0; j < COORDINATES; j++)
		{
			fprintf(output, "%8c %4d ", ' ', point_matrix[i][j]);
		}
	}
	
	fprintf(output, "\n\nmass");
	for(i = 0; i < n; i++)
	{
		fprintf(output, "\n %2c %d", ' ', masses[i]);
	}
	
	fprintf(output, "\n\nn - %d", n);
}
