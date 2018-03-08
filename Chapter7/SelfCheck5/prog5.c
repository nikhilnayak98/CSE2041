/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Stack.
*/
#include <stdio.h>
#define STACK_EMPTY 0
void push(int[], int, int*, int);
int pop(int[], int*);
void main()
{
	int s_top = -1, max_size, popped_item;
	
	printf("Enter max size of stack - ");
	scanf("%d", &max_size);
	
	int stack[max_size];
	
	push(stack, 67, &s_top, max_size);
	push(stack, 45, &s_top, max_size);
	push(stack, 98, &s_top, max_size);
	push(stack, 100, &s_top, max_size);
	
	printf("Top - %d", retrieve(stack, &s_top));
	
	printf("\n");
}

int retrieve(int stack[], int *top)
{
	return stack[*top];
}

void push(int stack[], int item, int *top, int max_size)
{
	if(*top < (max_size - 1))
	{
		(*top)++;
		stack[*top] = item;
	}
}
int pop(int stack[], int *top)
{
	int item;
	if(*top >= 0)
	{
		item = stack[*top];
		(*top)--;
	}
	else
	{
		item = STACK_EMPTY;
	}
	return item;
}
