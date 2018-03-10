/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Multiple Choice Exam
*/
#include <stdio.h>
void fgetAnswers(char[], int, FILE*);
void main()
{
	FILE *input = fopen("examdat.txt", "r");
	int n, i;

	char answers[20], space;
	
	fscanf(input, "%d", &n);
	fscanf(input, "%c", &space);
	
	for(i = 0; i < n ; i++)
	{
		fscanf(input, "%c", &answers[i]);
	}
	
	fgetAnswers(answers, n, input);
}


void fgetAnswers(char answers[], int n, FILE *input)
{
	FILE *output = fopen("report.txt", "w");
	
	int missed[n], i, id, correct;
	char choice;
	
	for(i = 0; i < n; i++)
	{
		missed[i] = 0;
	}
	
	fprintf(output, "%10c Exam Report %2c", ' ', ' ');
	fprintf(output, "\nQuestion %2c", ' ');

	for(i = 0; i < n ; i++)
	{
		fprintf(output, "%d ", i);
	}

	fprintf(output,"\nAnswer %3c", ' ');
	
	for(i = 0; i < n ; i++)
	{
		fprintf(output, "%c ", answers[i]);
	}
	
	fprintf(output, "\n\nID %2c Score(%%)\n", ' ');
	
	while(fscanf(input, "%d", &id) != EOF)
	{
		correct = 0;
		fprintf(output, "%d %2c", id, ' ');
		fscanf(input, "%c", &choice);
		
		for(i = 0; i < n ; i++)
		{
			fscanf(input, "%c", &choice);
			
			if(choice == answers[i])
				correct++;
			else
				missed[i]++;
		}
		fprintf(output, "%d\n", (correct * 100) / n);
	}

	fprintf(output, "\nQuestion %2c", ' ');
	
	for(i = 0; i < n ; i++)
	{
		fprintf(output, "%d ", i);
	}

	fprintf(output, "\nMissed by %2c", ' ');

	for(i = 0; i < n ; i++)
	{
		fprintf(output, "%d ", missed[i]);
	}
}
