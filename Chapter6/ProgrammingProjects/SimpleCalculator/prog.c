/*
*Name - Nikhil Ranjan Nayak
*Regd No - 1641012040
*Desc -	Simple calculator
*/
#include <stdio.h>
#include <math.h>
void do_next_op(char, double, double*);
void scan_data(char*, double*);
void main()
{
    double accumulator = 0, operand;
    char operator_symbol;
    
    printf("\n+ add");
    printf("\n- subtract");
    printf("\n* multiply");
    printf("\n/ divide");
    printf("\n^ power (raise left operand to power of right operand)");
    printf("\nq quit\n");
    
    scan_data(&operator_symbol, &operand);
    
    while(operator_symbol != 'q')
    {
        do_next_op(operator_symbol, operand, &accumulator);
        
        printf("result so far is %.1f", accumulator);
        scan_data(&operator_symbol, &operand);
    }
    printf("\nfinal result is is %.1f\n", accumulator);
}

void do_next_op(char operator_symbol, double operand, double *accumulator)
{
    if(operator_symbol == '+')
        *accumulator += operand;
    else if(operator_symbol == '-')
        *accumulator -= operand;
    else if(operator_symbol == '*')
        *accumulator *= operand;
    else if(operator_symbol == '/')
    {
        if(operand != 0)
            *accumulator /= operand;
        else
            printf("divide by zero not error\n");
    }
    else if(operator_symbol == '^')
        *accumulator = pow(*accumulator, operand);
    else
        printf("invalid operator\n");
}

void scan_data(char *operator_symbol, double *operand)
{
    printf("\n");
    scanf(" %c", &*operator_symbol);
    scanf(" %lf", &*operand);
}