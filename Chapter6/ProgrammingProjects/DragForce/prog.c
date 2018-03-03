/*
*Name - Nikhil Ranjan Nayak
*Regd No - 1641012040
*Desc -	Calculate drag force
*/
#include <stdio.h>
#include <math.h>
#define RHO 1.23
void calc_drag_force(double*, double, double, double);
void main()
{
    int V;
    double CD, A, F;
    
    printf("\nArea: ");
    scanf("%lf", &A);
    printf("\nDrag co-efficient: ");
    scanf("%lf", &CD);
    
    printf("\n\nVelocity %9c Force", ' ');
    
    for(V = 0; V <= 40; V += 5)
    {
        calc_drag_force(&F, CD, A, V);
        printf("\n%d m/s %8c %.2f N", V, ' ', F);
    }
    printf("\n");
}

void calc_drag_force(double *F, double CD, double A, double V)
{
    *F = 0.5 * CD * A * RHO * pow(V, 2);
}