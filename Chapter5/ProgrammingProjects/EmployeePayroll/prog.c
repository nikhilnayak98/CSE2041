/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - To process weekly employee time cards for all employees of an organization. 
*/
#include "stdio.h"
#define TAX 3.625
void main()
{
    int i, id_number, employees;
    double wage_rate, overtime_wage, hours_worked, overtime, grosspay, netpay, overtimepay, total_payroll = 0, avg;
    printf("\nEnter number of employees - ");
    scanf("%d", &employees);
    
    for(i = 0; i < employees; i++)
    {
        printf("\nEnter employee ID number - ");
        scanf("%d", &id_number);
        printf("\nEnter hourly wage rate - ");
        scanf("%lf", &wage_rate);
        printf("\nEnter hours worked - ");
        scanf("%lf", &hours_worked);
        
        if (hours_worked <= 40)
		{
			grosspay = hours_worked * wage_rate;
		}
		if (hours_worked > 40)
		{
			overtime_wage = 1.5 * wage_rate;
			overtimepay = (hours_worked - 40) * overtime_wage;
			overtime = hours_worked - 40;
			grosspay = ((hours_worked - overtime) * wage_rate) + overtimepay;
		}
			netpay = grosspay - (grosspay * (TAX / 100));
			total_payroll += netpay;
			printf("\nEmployee ID - %d", id_number);
			printf("\nNet pay - %.2f", netpay);
    }
    
    avg = total_payroll / employees;
    printf("\nTotal payroll - %.2f", total_payroll);
    printf("\nAverage amount paid - %.2f\n", avg);
}