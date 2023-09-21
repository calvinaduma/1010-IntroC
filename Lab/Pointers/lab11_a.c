/*	Calvin Aduma
	CPSC 111-Fall Semester
	Lab 11
	This program uses pointers to copy and print text stored in memory.
*/

#include <stdio.h>
#include <stdlib.h>

// this function takes in two character arrays and copies the contents of one
// array into the other.
// inputs: two character arrays
// outputs: none
void my_strcpy(char dest[], const char src[]){
	for(int i=0; i<31; i++){
		dest[i] = src[i];
	}
}

int main(void){
	// initialize variables
	char str1[31], str2[31];
	printf("Enter a string of length at most 30: ");
	scanf("%s", str1);
	
	// function copies str1 into str2
	my_strcpy(str2, str1);
	
	// copies "You entered:" into str1
	char extra[] = "You entered:";
	my_strcpy(str1, extra);

	// prints strings
	printf("%s %s\n",str1,  str2);
	
	return(0);
}
