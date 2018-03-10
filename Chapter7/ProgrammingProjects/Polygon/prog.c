/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Multiple Choice Exam
*/
#include <stdio.h>
#include <math.h>
int get_corners(FILE*, double[], double[]);
void out_corners(FILE*, double[], double[], int);
double polygon_area(double[], double[], int);
void main()
{
	double X[20], Y[20], area;
	int size;
	FILE *input = fopen("inputs.txt", "r");
	FILE *output = fopen("output.txt", "w");
	size = get_corners(input, X, Y);
	out_corners(output, X, Y, size);
	area = polygon_area(X, Y, size);
	printf("\nArea - %lf \n", area);
	fclose(input);
	fclose(output);
}

int get_corners(FILE *input, double X[], double Y[])
{
	int i = 0;
	while((fscanf(input, "%lf %lf", &X[i], &Y[i])) != EOF)
	{
		i++;
	}
	return i;
}

void out_corners(FILE *output, double X[], double Y[], int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		fprintf(output, "\n%lf %5c %lf", X[i], ' ', Y[i]);
	}
}

double polygon_area(double X[], double Y[], int size)
{
	int i;
	double area = 0;
	for(i = 0; i < size - 3; i++)
	{
		area += (X[i + 1] + X[i]) * (Y[i + 1] - Y[i]);
	}
	
	area = 0.5 * fabs(area);
	
	return area;
}
