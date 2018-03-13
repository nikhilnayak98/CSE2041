/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Polygon area.
*/
#include <stdio.h>
#include <math.h>
int get_corners(FILE*, double[], double[], int);
void out_corners(FILE*, double[], double[], int);
double polygon_area(double[], double[], int);
void main()
{
	int MAX = 20;
	double X[MAX], Y[MAX], area;
	int size;
	FILE *input = fopen("inputs.txt", "r");
	FILE *output = fopen("output.txt", "w");
	size = get_corners(input, X, Y, MAX);
	out_corners(output, X, Y, size);
	area = polygon_area(X, Y, size);
	printf("\nArea - %.2f Square Units\n", area);
	fclose(input);
	fclose(output);
}

int get_corners(FILE *input, double X[], double Y[], int MAX)
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
	fprintf(output, "x %8c y\n", ' ');
	for(i = 0; i < size; i++)
	{
		fprintf(output, "%.2f %5c %.2f\n", X[i], ' ', Y[i]);
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
