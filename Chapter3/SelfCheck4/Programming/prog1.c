/*
*Name - Nikhil Ranjan Nayak
*Regd no - 1641012040
*Desc - Draw Figure
*/
#include "stdio.h"
void draw_parallel();
void draw_base();
void draw_rectangle();
void main()
{
	draw_rectangle();
	printf("\n");
}

void draw_parallel()
{
	// printing parallel lines
	 
	printf("\n|		|");
	printf("\n|		|");
	printf("\n|		|");
	printf("\n|		| \n");
}

void draw_base()
{
	// printing base
	printf(" _______________");
}

void draw_rectangle()
{
	draw_base();
	draw_parallel();
	draw_base();
}
