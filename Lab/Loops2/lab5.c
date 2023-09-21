/*
	Calvin Aduma
	September 23, 2019
	CPSC 1111 - Section 003
	Lab 5
	This program tests mastery of ifs and else-if statements, loops,
	and it also test understanding of ASCII Table.
*/

#include <stdio.h>

int main(void){
	// initializes variables
	char userInput;
	int numChar, evenNum, oddNum, reply, loop;

	// [0-9] = 48-57 
	// [A-Z] = 65-90
	// [a-z] = 97-122

	// loop 
	loop = 1;
while(loop == 1){
	
	// user input
	printf("\nEnter a letter or number: ");
	
	// fixes the scanf liability
	freopen("/dev/tty","r",stdin);

	// gathers user input	
	scanf("%c", &userInput);
	
	// converts user input into ASCII number
	numChar = userInput;

	// conditional statements
	if((numChar >= 48) && (numChar <= 57)){
		if((numChar-48)%2 == 0){
			printf("\n%d is an even number.\n", numChar-48);
		}
		else{
			printf("\n%d is an odd number.\n", numChar-48);
		}
	}
	else if((numChar >= 65) && (numChar <= 90)){
		userInput = numChar+32;
		printf("\nThe lower case of that letter is: %c\n", userInput);
	}
	else if((numChar >= 97) && (numChar <= 122)){
		userInput = numChar-32;
		printf("\nThe upper case of that letter is: %c\n", userInput);
	}
	else{
		printf("\nYou entered an invalid character.\n");
	}

	// redo statements
	printf("\nDo you want to enter another character? [1 -YES; 0 -NO]\n");

	// fixes scanf liability
	freopen("/dev/tty","r",stdin);

	// gathers reply
	scanf(" %i", &reply);
	
	// start of redo loop
	if(reply == 0){
		loop = 0;
	}
}
}
