/*
Name: Nikhil Ranjan Nayak
Regd No: 1641012040
Desc: Maze
*/
#include <stdio.h>

#define N_ROWS 8
#define N_COLS 8
#define FOUND 0
#define DEAD_END 1
#define PATH '-'
#define FILLED 'X'
#define EMPTY '.'

int find_path(char[][N_COLS], int, int);
int start_maze(char[][N_COLS], int, int);

void main()
{
    char grid[N_ROWS][N_COLS];
    int x, y, done;

    printf("\nInput the %dX%d array which represents a maze.", N_ROWS, N_COLS);
    printf("\nEnter an '%c' for a filled square, and a '%c' for empty.", FILLED, EMPTY);

    for(y = 0; y <= N_ROWS - 1; y++)
    {
      printf("Input row number %d: ", y);
      scanf("%s", grid[y]);
    }

    for(y = 0; y <= N_ROWS - 1; y++)
    {
      for(x = 0; x <= N_COLS - 1; x++)
          printf("%c", grid[y][x]);
      printf("\n");
    }

    if(grid[0][1] != EMPTY)
      done = DEAD_END;
    else
      done = start_maze(grid, 0, 1);
    if(done == DEAD_END)
      printf("\nNo path thru maze.\n");

    printf("\n");
    for(y = 0; y <= N_ROWS - 1; y++)
    {
      for(x = 0; x <= N_COLS - 1; x++)
        printf("%c", grid[y][x]);
      printf("\n");
    }
}

int find_path (char grid[N_ROWS][N_COLS], int j, int i)
{
    grid[j][i] = PATH;
    printf("( %d, %d)", j, i);

    if((j == N_ROWS - 1) && (i == N_COLS - 1))
      return (FOUND);
    else if((j + 1 <= N_ROWS - 1) && (grid[j + 1][i] == EMPTY))
      j++;
    else if((i + 1 <= N_COLS - 1) && (grid[j][i + 1] == EMPTY))
      i++;
    else if((j - 1 >= 0) && (grid[j - 1][i] == EMPTY))
      j--;
    else if((i - 1 >= 0) && (grid[j][i - 1] == EMPTY))
      i--;
    else
      return (DEAD_END);

    return (start_maze(grid, j, i));
}

int start_maze(char grid[N_ROWS][N_COLS], int j, int i)
{
    int done;
    done = find_path(grid, j, i);
    if(done == DEAD_END)
      done = find_path(grid, j, i);
    return (done);
}