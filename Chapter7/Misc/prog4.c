/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Transpose of a matrix.
*/
#include <stdio.h>
#define MAX 20
void transpose(int[][MAX], int[][MAX], int, int);
void main()
{
	int matrix[MAX][MAX], transpose_matrix[MAX][MAX], i, j, rows , columns;
	
	printf("\nEnter number of rows - ");
	scanf("%d", &rows);
	printf("\nEnter number of colunms - ");
	scanf("%d", &columns);
	
	printf("\nEnter the elements of the array - ");
	for(i = 0; i < rows; i++)
		for(j = 0; j < columns; j++)
			scanf("%d", &matrix[i][j]);
	
	printf("\nOriginal Matrix - ");
	for(i = 0; i < rows; i++)
	{
		printf("\n");
		for(j = 0; j < columns; j++)
		{
			printf("%d ", matrix[i][j]);
		}
	}
	
	transpose(transpose_matrix, matrix, rows, columns);

	printf("\n\nTranspose Matrix - ");
	for(i = 0; i < columns; i++)
	{
		printf("\n");
		for(j = 0; j < rows; j++)
		{
			printf("%d ", transpose_matrix[i][j]);
		}
	}
	
	printf("\n");
}

void transpose(int A[][MAX], int B[][MAX], int rows, int columns)
{
	int i, j;
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < columns; j++)
		{
			A[j][i] = B[i][j];
		}
	}
}
