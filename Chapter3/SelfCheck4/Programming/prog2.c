/*
*Name - Nikhil Ranjan Nayak
*Regd no - 1641012040
*Desc - Draw DOLL
*/
#include "stdio.h"
void draw_doll();
void draw_d();
void draw_o();
void draw_l();
void main()
{
	draw_doll();
}

void draw_doll()
{
	draw_d();
	printf("\n");
	draw_o();
	printf("\n");
	draw_l();
	printf("\n");
	draw_l();
	printf("\n");
}

void draw_d()
{
	// printing D
	printf("\n ____");
	printf("\n|    \\ ");
	printf("\n|     \\ ");
	printf("\n|      ) ");
	printf("\n|     / ");
	printf("\n|____/ ");
}

void draw_o()
{
	// printing O
	printf("\n _____");
	printf("\n|     |");
	printf("\n|     |");
	printf("\n|     |");
	printf("\n|     |");
	printf("\n|_____|");
}

void draw_l()
{
	// printing L
	printf("\n|");
	printf("\n|");
	printf("\n|");
	printf("\n|");
	printf("\n|_____");
} 
