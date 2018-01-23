/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Beer distributorship seller.
*/
#include "stdio.h"
int process_sales(int, int);
void main()
{
	int i = 0, brand_id, amount, final_inventory = 0, temp;

		while(i < 4)
		{
			temp = brand_id;
			printf("\nEnter Brand ID Number - ");
			scanf("%d", &brand_id);
			if(temp != brand_id)
			{
				printf("\nEnter Amount Purchased/Sold - ");
				scanf("%d", &amount);
				final_inventory += process_sales(brand_id, amount);
				i++;
			}
			else
				printf("\nAlready Entered enter a different brand ID\n");
			}
	printf("\nFinal Inventory - %d \n", final_inventory);
}

int process_sales(int brand_id, int amount)
{
	int inventory = 0, i;
	inventory += amount;
	
	printf("\nInventory for ID Number %d - %d\n", brand_id, inventory);
	
	return inventory;
}
