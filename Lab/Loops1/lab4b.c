/*
	Calvin Aduma
	September 16, 2019
	Section 003
	CPSC 1111
	This program tests my mastery of while loops, for loops, and do-while
	loops; in addition it also tests the use of differet flags in printf
	statements
*/

#include <stdio.h>

int main(void)
{
	// initializes variables
	int number, squarez, sumz, count;
	
	// asks user to input integer
	printf("Enter an integer: \n");
	scanf("%d", &number);
	
	// start of loop
	printf("%9s%12s\n","Value","Sum");
	squarez = 1;
	sumz = 1;
	for (count = 1; count <= number ;count++)
	{
		printf("%9d%12d\n",squarez, sumz);
		squarez = squarez * 2;
		sumz = sumz + squarez;
	}
}
