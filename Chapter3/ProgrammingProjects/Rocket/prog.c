/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Rocket Figure
*/
#include "stdio.h"
void circle();
void draw_intersec_lines();
void skip_5_lines();
void draw_triangle();
void draw_rectangle();
void draw_line();
void main()
{
	// draw rocket
	draw_triangle();
	draw_rectangle();
	draw_intersec_lines();
	
	skip_5_lines();
	
	// draw male
	circle();
	draw_rectangle();
	draw_intersec_lines();
	
	skip_5_lines();
	
	// draw female
	circle();
	draw_triangle();
	draw_intersec_lines();
	
	printf("\n");
}

void skip_5_lines()
{
	printf("\n\n\n\n\n");
}

void draw_intersec_lines()
{
	printf("\n    /\\");
	printf("\n   /  \\");
	printf("\n  /    \\");
	printf("\n /      \\");
}

void circle()
{
	printf("\n    * *");
	printf("\n  *      *");
	printf("\n *       *");
	printf("\n  *     *");
	printf("\n    * * ");	
}

void draw_triangle()
{
	printf("\n    /\\");
	printf("\n   /  \\");
	printf("\n  /    \\");
	printf("\n /      \\");
}

void draw_rectangle()
{
	printf("\n ________");
	printf("\n|        |");
	printf("\n|        |");
	printf("\n|        |");
	printf("\n|        |");
	printf("\n|________|");
}

void draw_line()
{
	printf("________");
}
