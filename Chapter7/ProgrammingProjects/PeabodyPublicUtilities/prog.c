/*
Name: Nikhil Ranjan Nayak
Regd No: 1641012040
Desc: Peabody Public Utilities 
*/
#include <stdio.h>
#define ROW 3
#define COL 4
void get_grid(int[][COL]);
void display_grid(int[][COL]);
int power_ok(int[][COL]);
void where_off(int[][COL]);
void main()
{
	int grid[ROW][COL], power_flag;
	
	get_grid(grid);
	display_grid(grid);
	
	power_flag = power_ok(grid);
	if(power_flag == 1)
		printf("\n\nPower is on throughout grid.\n");
	else
		where_off(grid);
}

void get_grid(int grid[][COL])
{
	int i, j;
	FILE *input = fopen("grid.txt", "r");
	while(!feof(input))
	{
		for(i = 0; i < ROW; i++)
			for(j = 0; j < COL; j++)
				fscanf(input, "%d", &grid[i][j]);
	}
	
	fclose(input);
}

void display_grid(int grid[][COL])
{
	int i, j;
	for(i = 0; i < ROW; i++)
	{
		printf("\n");
		for(j = 0; j < COL; j++)
		{
			printf("%d ", grid[i][j]);
		}
	}
}

int power_ok(int grid[][COL])
{
	int i, j, flag = 0;
	for(i = 0; i < ROW; i++)
	{
		for(j = 0; j < COL; j++)
		{
			if(grid[i][j] == 0)
				return flag;
		}
	}
	return 1;
}

void where_off(int grid[][COL])
{
	int i, j;
	printf("\n\nPower is off in sectors:");
	for(i = 0; i < ROW; i++)
	{
		for(j = 0; j < COL; j++)
		{
			if(grid[i][j] == 0)
				printf("\n(%d,%d)", i, j);
		}
	}
	printf("\n");
}
