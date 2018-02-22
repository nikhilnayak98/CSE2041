/*
*Name - Nikhil Ranjan Nayak
*Regd No - 1641012040
*Desc -	Read write
*/
#include <stdio.h>
void main()
{
	FILE *inp, *outp;
	double item;
	int input_status, ctr = 0;

	inp = fopen("indata.txt", "r");
	outp = fopen("outdata.txt", "w");

	input_status = fscanf(inp, "%lf", &item);
	while(input_status == 1) 
	{
		fprintf(outp, "%.2f\n", item);
		ctr++;
		input_status = fscanf(inp, "%lf", &item);
	}
	
	fprintf(outp, "\n%d\n", ctr);
	
	fclose(inp);
	fclose(outp);
}
