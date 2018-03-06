/*
*Name - Nikhil Ranjan Nayak
*Regd No - 1641012040
*Desc -	Gross annual revenues of Broadway 
*/
#include <stdio.h>
#include <math.h>
double revenue(int);
void predict(double);
double round_number(double);

void main()
{
	int t;
	double R, trillion = pow(10, 12);
	predict(trillion);
}

double revenue(int t)
{
	t -= 1984;
	double R = 203.265 * pow(1.071, t);
	return R;
}

void predict(double R)
{
	int t = 1984;
	FILE *output = fopen("table.txt", "w");
	
	fprintf(output, "Year %5c Revenue", ' ');
	
	while(revenue(t) < R)
	{
		fprintf(output, "\n%d %5c %lf", t, ' ', round_number(revenue(t)));
		t++;
	}
	fclose(output);
}

double round_number(double num)
{
	int digits = 3;
	num = (long int)((num * pow(10, digits)) + 0.5) * 0.001;
	
	return num;
}
