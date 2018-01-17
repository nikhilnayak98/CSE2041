/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Bread machine controller
*/
#include "stdio.h"
void instruct();
double compute_time(char, int, int);
void main()
{
    char bread_code;
    int loaf_double, baking_manual;
    double time;
    
    instruct();
    
    scanf("%c", &bread_code);
    scanf("%d", &loaf_double);
    scanf("%d", &baking_manual);
    
    time = compute_time(bread_code, loaf_double, baking_manual);
    printf("\n Total Time - %.3f mins \n", time);
}

void instruct()
{
    printf("\n W - White");
    printf("\n S - Sweet");
    printf("\n Enter Bread Code - ");
    
    printf("\n Is it Double? 1/0");
    
    printf("\n Is it Manual? 1/0");
}

double compute_time(char bread_code, int loaf_double,int baking_manual)
{
    double time = 0, tdisplay;
    
    if((bread_code == 'w') || (bread_code == 'W'))
        tdisplay = 15;
    else if((bread_code == 's') || (bread_code == 'S'))
        tdisplay = 20;
    printf("\n Primary kneading - %.3f mins", tdisplay);
    time += tdisplay;
    
    
    tdisplay = 60;
    printf("\n Primary rising - %.3f mins", tdisplay);
    time += 60;
    
    
    if((bread_code == 'w') || (bread_code == 'W'))
        tdisplay = 18;
    else if((bread_code == 's') || (bread_code == 'S'))
        tdisplay = 33;
    printf("\n Secondary kneading - %.3f mins", tdisplay);
    time += tdisplay;
    
    
    if((bread_code == 'w') || (bread_code == 'W'))
        tdisplay = 20;
    else if((bread_code == 's') || (bread_code == 'S'))
        tdisplay = 30;
    printf("\n Secondary rising - %.3f mins", tdisplay);
    time += tdisplay;
    
    
    if(baking_manual == 1)
        printf("\n Remove the dough for manual baking");
    else
        tdisplay = 2;
    printf("\n Loaf shaping - %.3f secs", tdisplay);
    time += ((double)tdisplay/ 60);
    
    
    tdisplay = 75;
    printf("\n Final rising - %.3f mins", tdisplay);
    time += tdisplay;
    
    
    if((bread_code == 'w') || (bread_code == 'W'))
        tdisplay = 45;
    else if((bread_code == 's') || (bread_code == 'S'))
        tdisplay = 35;
    if(loaf_double == 1)
        tdisplay += (0.5 * tdisplay);
    printf("\n Baking - %.3f mins", tdisplay);
    time += tdisplay;
    
    tdisplay = 30;
    printf("\n Cooling - %.3f mins", tdisplay);
    time += tdisplay;
    
    return time;
}