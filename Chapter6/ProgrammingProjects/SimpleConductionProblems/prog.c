/*
*Name - Nikhil Ranjan Nayak
*Regd No - 1641012040
*Desc -	Simple conduction problems
*/
#include <stdio.h>
void calc_a(double m, double *area, double del_t, double k, double heat_transfer)
{
	*area = (heat_transfer * m) / (k * del_t);
}

void calc_k(double m, double area, double del_t, double *k, double heat_transfer)
{
	*k = (heat_transfer * m) / (area * del_t);
}

void calc_h(double m, double area, double del_t, double k, double *heat_transfer)
{
	*heat_transfer = (k * area * del_t) / m;
}

void calc_m(double *m, double area, double del_t, double k, double heat_transfer)
{
	*m = (k * area * del_t) / heat_transfer;
}

void calc_t2(double m, double area, double t1, double *t2, double k, double heat_transfer)
{
	*t2 = ((heat_transfer * m) / (k * area)) + t1;
}

void calc_t1(double m, double area, double *t1, double t2, double k, double heat_transfer)
{
	*t1 = t2 - ((heat_transfer * m) / (k * area));
}

void main()
{
	double heat_transfer, coefficient, cross_area, T1, T2, thickness;
	int c1, c2, c3, c4, c5, c6;
	char ch;
	printf("\nRespond to the prompts with the data known. For the unknown quantity, enter a question mark (?).");
	
	printf("\nRate of heat transfer (watts) >> ");
	c1 = scanf(" %lf", &heat_transfer);
	if(c1 == 0)
		scanf("%c", &ch);
		
	printf("\nCoefficient of thermal conductivity (W/m-K) >> ");
	c2 = scanf(" %lf", &coefficient);
	if(c2 == 0)
		scanf("%c", &ch);
		
	printf("\nCross-sectional area of conductor (m^2) >> ");
	c3 = scanf(" %lf", &cross_area);
	if(c3 == 0)
		scanf("%c", &ch);
	
	printf("\nTemperature on one side (K) >> ");
	c4 = scanf(" %lf", &T2);
	if(c4 == 0)
		scanf("%c", &ch);
	
	printf("\nTemperature on other side (K) >> ");
	c5 = scanf(" %lf", &T1);
	if(c5 == 0)
		scanf("%c", &ch);
	
	printf("\nThickness of conductor (m) >> ");
	c6 = scanf(" %lf", &thickness);
	if(c6 == 0)
		scanf("%c", &ch);
	
	if(c1 == 0)
		calc_h(thickness, cross_area, (T2 - T1), coefficient, &heat_transfer);
	else if(c2 == 0)
		calc_k(thickness, cross_area, (T2 - T1), &coefficient, heat_transfer);
	else if(c3 == 0)
		calc_a(thickness, &cross_area, (T2 - T1), coefficient, heat_transfer);
	else if(c4 == 0)
		calc_t2(thickness, cross_area, T1, &T2, coefficient, heat_transfer);
	else if(c5 == 0)
		calc_t1(thickness, cross_area, &T1, T2, coefficient, heat_transfer);
	else if(c6 == 0)
		calc_m(&thickness, cross_area, (T2 - T1), coefficient, heat_transfer);
	
	printf("\n\n%5ckA (T2 - T1)", ' ');
	printf("\nH = ----------------");
	printf("\n%10cX", ' ');
	
	if(c1 == 0)
		printf("\nRate of heat transfer is %.3f W.", heat_transfer);
	else if(c2 == 0)
		printf("\nCoefficient of thermal conductivity is %.3f W/m-K.", coefficient);
	else if(c3 == 0)
		printf("\nCross-sectional area of conductor is %.3f m^2.", cross_area);
	else if(c4 == 0)
		printf("\nTemperature on the other side is %.0f K.", T2);
	else if(c5 == 0)
		printf("\nTemperature on the other side is %.0f K.", T1);
	else if(c6 == 0)
		printf("\nThickness of conductor is %.4f m.", thickness);
		

		printf("\nH = %.3f W.", heat_transfer);
		printf("\nk = %.3f W/m-K.", coefficient);
		printf("\nA = %.3f m^2.", cross_area);
		printf("\nT2 = %.0f K.", T2);
		printf("\nT1 = %.0f K.", T1);
		printf("\nm = %.4f m.", thickness);
}
