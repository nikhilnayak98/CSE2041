/*
*Name - Nikhil Ranjan Nayak
*Regd No - 1641012040
*Desc -	Dispense Change
*/
#include<stdio.h>
#include<math.h>
void cal_change(double ,int*, int*, int*, int*);
void main()
{
     int dollars, quaters = 0, dimes = 0, nickels = 0, pennies = 0;
     double amount_paid , amount_due, amount_change, coin_change;
     
     printf("Enter amount paid:\n");
     scanf("%lf", &amount_paid);
     
     printf("Enter amount due:\n");
     scanf("%lf", &amount_due);
     
     amount_change = amount_paid - amount_due;
     dollars = floor(amount_change);
     coin_change = (int)((amount_change - floor(amount_change)) * 100 * 0.5);
     printf("%f", coin_change);
     
     cal_change(coin_change, &quaters, &dimes, &nickels, &pennies);
     
     printf("\nChange in dollars - %d $", dollars);
     printf("\nQuaters: - %d", quaters);
     printf("\nQimes - %d", dimes);
     printf("\nNickels - %d", nickels);
     printf("\nPennies - %d", pennies);
}

void cal_change(double coin_change, int *quaters, int *dimes, int *nickels, int *pennies)
{
     int q = 1,d = 1,n = 1,p = 1;
     do
     {
     	if(coin_change>=25)
     	{
     		*quaters += q;
     		coin_change -= 25;
     	}
		else if(coin_change>=10)
		{
			*dimes += d;
			coin_change -= 10;
		}
		else if(coin_change>=5)
		{
			*nickels += n;
			coin_change -= 5;
		}
		else if(coin_change >= 1)
		{
        	*pennies += p;
			coin_change--;;
		}
      }while(coin_change >= 1);
}
