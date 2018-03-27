/*
Name - Nikhil Ranjan Nayak
Redg No - 1641012040
Desc - Tower of hanoi
*/
#include <stdio.h>
void tower(char, char, char, int);
void main()
{
	char source = 'A', temp = 'B', target = 'C', n = 3;
	tower(source, target, temp, n);
}

void tower(char from_peg, char to_peg, char aux_peg, int n)
{
	if(n == 1)
	{
		printf("Move disk 1 from peg %c to peg %c\n", from_peg, to_peg);
	}
	else
	{
		tower(from_peg, aux_peg, to_peg, n - 1);
		printf("Move disk %d from peg %c to peg %c\n", n, from_peg, to_peg);
		tower(aux_peg, to_peg, from_peg, n - 1);
	}
}
