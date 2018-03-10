/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Process numerical data.
*/
#include <stdio.h>
#include <math.h>
int get_size(FILE*, double[], double[]);
void print_to_file(FILE*, double[], double[], double[], int);
void muliply(const double[], const double[], double[], int);
double square_root(double[], int);
void main()
{
	double X[20], Y[20], Z[10];
	int size;
	
	FILE *input = fopen("input.txt", "r");
	FILE *output = fopen("output.txt", "w");
	
	size = get_size(input, X, Y);
	
	muliply(X, Y, Z, size);
	print_to_file(output, X, Y, Z, size);

	fclose(input);
	fclose(output);
}

int get_size(FILE *input, double X[], double Y[])
{
	int i = 0;
	while((fscanf(input, "%lf %lf", &X[i], &Y[i])) != EOF)
	{
		i++;
	}
	
	return i;
}

void muliply(const double X[], const double Y[], double Z[], int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		Z[i] = (X[i] * Y[i]);
	}
}

double square_root(double Z[], int size)
{
	int i, sum = 0;
	for(i = 0; i < size; i++)
	{
		sum += Z[i];
	}
	return (sqrt(sum));
}

void print_to_file(FILE *output, double X[], double Y[], double Z[], int size)
{
	int i;
	fprintf(output, "X %18c Y %18c Z", ' ', ' ');
	for(i = 0; i < size; i++)
	{
		fprintf(output, "\n%lf %8c %lf %8c %lf", X[i], ' ', Y[i], ' ', Z[i]);
	}
	
	fprintf(output, "\n\nSquare root of the sum of Z[] - %lf", (square_root(Z, size)));
}
