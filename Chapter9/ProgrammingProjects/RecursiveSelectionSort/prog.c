/*
Name: Nikhil Ranjan Nayak
Regd No: 1641012040
Desc: Recursive Selection Sort.
*/
#include <stdio.h>
void selection(int [], int, int, int, int);
void main()
{
    int size, temp, i, j;
    printf("\nEnter the size of the list: ");
    scanf("%d", &size);
    int list[size];
    
    printf("\nEnter the elements in list:");
    for(i = 0; i < size; i++)
        scanf("%d", &list[i]);
        
    selection(list, 0, 0, size, 1);
    
    printf("\nThe sorted list in ascending order :\n");
    for(i = 0; i < size; i++)
        printf("%d  ", list[i]);
        
    printf("\n");
}

void selection(int list[], int i, int j, int size, int flag)
{
    int temp;
    if(i < size - 1)
    {
        if(flag)
            j = i + 1;
        if(j < size)
        {
            if(list[i] > list[j])
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
            selection(list, i, j + 1, size, 0);
        }
        selection(list, i + 1, 0, size, 1);
    }
}