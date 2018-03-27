#include <stdio.h>
#include <string.h>
#define MAX 10
int get_min_range(char[][MAX], int, int);
void selection_sort(char[][MAX], char[]);
void main()
{
	char *pointers[10], strings[10][10] = {"Feb", "Mar", "Jan", "Apr", "May", "Jun", "Oct", "Nov", "Dec", "Sep"};
	int i;
	
	for(i = 0; i < MAX; i++)
	{
		pointers[i] = strings[i];
	}
	
	for(i = 0; i < MAX; i++)
	{
		puts(pointers[i]);
	}
	
	selection_sort(strings, pointers);
	printf("\nAfter Sorting\n");
	
	for(i = 0; i < MAX; i++)
	{
		puts(pointers[i]);
	}
}

void selection_sort(char strings[][MAX], char *pointers[])
{
	int i, index_of_min;
	char *temp[MAX];
	
	for(i = 0; i < MAX; i++)
	{
		index_of_min = get_min_range(strings, i, MAX);
		
		if(i != index_of_min)
		{
			temp = pointers[index_of_min];
			pointers[index_of_min] = pointers[i];
			pointers[i] = temp;
		}
	}
}

int get_min_range(char strings[][MAX], int first, int last)
{
	int i;
	for(i = 1; i < MAX; i++)
	{
		if(strcmp(strings[i], strings[first]) < 0)
			first = i;
	}
	return first;
}
