/*
Name: Nikhil Ranjan Nayak
Regd No: 1641012040
Desc: Hangman 
*/
#include <stdio.h>
#define TOTAL_GUESS 15
#define MAX 8
void main()
{
	char words[] = {'H', 'A', 'N', 'G', 'M', 'A', 'N'}, guessed[TOTAL_GUESS], guess;
	int i, j;
	
	for(i = 0; i <= TOTAL_GUESS; i++)
	{
		guessed[i] = '*';
	}
	
	printf("\nHangman");
	printf("\nSize of word %d", MAX);
	printf("\nTotal Guesses %d", TOTAL_GUESS);
	
	j = 1;
	
	for(i = 0; i <= TOTAL_GUESS; i++)
	{
		printf("\nGuess number : %d\n", j);
		scanf(" %c", &guess);
		
		if(toupper(toupper(guess) != words[j - 1]))
		{
			printf("\nWrong guess");
		}
		else
		{
			guessed[i]= guess;
			printf("\nRight guess");
			j++;
		}
		if(j == MAX)
			break;		
	}
	
	if(j == MAX)
		printf("\n\nWinner\n");
	else
		printf("\nLoser\n");
		
	for(i = 0; i <= TOTAL_GUESS; i++)
	{
		printf("%c ", guessed[i]);
	}
}
	
