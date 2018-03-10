/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Multiple Choice Exam
*/
#include <stdio.h>

void printToFile(int no_of_students, int no_of_qs, int student_id[], char student_answers[], int student_score[], char correct_answers[])
{
	int i;
	FILE *output = fopen("report.txt", "w");
	fprintf(output, "%6c Exam Report\n", ' ');
	
	fprintf(output, "Questions : ");
	for(i = 0; i < no_of_qs; i++)
	{
		fprintf(output, "%d ", (i + 1));
	}
	
	fprintf(output, "\nAnswers : ");
	
	for(i = 0; i < no_of_qs; i++)
	{
		fprintf(output, "%c ", correct_answers[i]);
	}
	
	fprintf(output, "\n\nID %5c Score(%%)", ' ');
	for(i = 0; i < no_of_students; i++)
	{
		fprintf(output, "%d %4c %d", student_id[i], ' ', student_score[i]);
	}
	
	fprintf(output, "Question : ");
	for(i = 0; i < no_of_qs; i++)
	{
		fprintf(output, "%d ", (i + 1));
	}
	
	/*fprintf(output, "Missed By : ");
	for(i = 0; i < no_of_qs; i++)
	{
		fprintf(output, "%d ", missed[i]);
	}*/
	
	fclose(output);
}

void fgetAnswers(int no_of_students, int no_of_qs, int student_id[], char student_answers[], int student_score[], char correct_answers[])
{
	FILE *input = fopen("examdat.txt", "r");
	int i = 0;
	char space;
	
	for(i = 0; i < no_of_students; i++)
	{
		student_score[i] = 0;
	}
	
	while((fscanf(input, "%d", &student_id[i])) != EOF)
	{
		fscanf(input, " %c", &space);
		
		fscanf(input, "%c", &student_answers[i]);
		while(student_answers[i] != '\n')
		{
			if(correct_answers[i] == student_answers[i])
			{
				student_score[i]++;
			}
			fscanf(input, "%c", &student_answers[i]);
			i++;
		}
		
	}
	
	for(i = 0; i < no_of_students; i++)
	{
		student_score[i] = student_score[i] * 20;
	}
	
	for(i = 0; i < no_of_students; i++)
	{
		printf("\n%d %4c %c", student_id[i], ' ', student_score[i]);
	}
	
	fclose(input);
}

void main()
{
	int no_of_qs, no_of_students, i = 0;
	FILE *input = fopen("examdat.txt", "r");
	
	no_of_students = 3;
	
	int student_id[no_of_students], student_score[no_of_students], missed[no_of_students];
	char student_answers[no_of_students], space;
	
	fscanf(input, "%d", &no_of_qs);
	char correct_answers[no_of_qs];
	
	i = 0;
	fscanf(input, "%c %c", &space, &correct_answers[i]);
	while(correct_answers[i] != '\n')
	{
		i++;
		fscanf(input, "%c", &correct_answers[i]);
	}
	
	fclose(input);
	
	fgetAnswers(input, no_of_students, no_of_qs, student_id, student_answers, student_score, correct_answers);
	//printToFile(no_of_students, no_of_qs, student_id, student_answers, student_score, correct_answers);
}
