/*
Name: Nikhil Ranjan Nayak
Regd No: 1641012040
Desc: Block Check
*/
#include <stdio.h>
#define MAX 5
int blob_check(int[][MAX], int, int, int*);
void main()
{
	int grid[MAX][MAX] = {(0, 1, 0, 1, 1), (1, 0, 0, 0, 1), (0, 0, 1, 0, 1), (0, 1, 1, 0, 0), (1, 1, 0, 0, 0)};
	int pixels, i, j;

	blob_check(grid, 0, 0, &pixels);
	printf("\nNumber of pixels - %d\n", pixels);
}

int blob_check(int grid[][MAX], int x, int y, int *pixels)
{
	if((x > MAX) || (y > MAX))
		return 0;
	else
	{
		if(grid[x][y] == 1)
			(*pixels)++;
			
		if((y == MAX) && (x < MAX))
		{
			y = -1;
			x++;
		}
			
		blob_check(grid, x, y + 1, pixels);
	}
}
