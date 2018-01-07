/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Pythagorean Trilpet Generator
*/
#include "stdio.h"
int main()
{
 	int side1,side2,hypotenuse,m,n;
 	printf("\n Enter m - ");
 	scanf("%d", &m);
 	printf("\n Enter n - ");
 	scanf("%d", &n);
 	side1 = m*m - n*n;
 	side2 = 2*m*n;
 	hypotenuse = m*m +n*n;
 	printf("\n Side 1 - %d", side1);
 	printf("\n Side 2 - %d", side2);
 	printf("\n Hypotenuse - %d \n", hypotenuse);
 }
