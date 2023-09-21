/*	Calvin ADuma
	CPSC 111-Fall Semester
	Lab 11
	This program uses pointers to copy and print text stored in memory.
*/

#include <stdio.h>
#include <stdlib.h>

// this function takes in two character pointers as the parameters and copies
// the content of one of the pointers and copies it into the other.
// inputs: two character pointers
// outputs: none 
void my_strcpy(char *dest, const char *src){
	for(int i=0; i<31; i++){
		dest[i] = src[i];
	}
}

int main(void){
	// initializes variables
	char *str1, *str2;
	int x;
	printf("What is the longest length of a string that you will enter: ");
	scanf("%d", &x);
	str1 = calloc(x, sizeof(char));
	str2 = calloc(x, sizeof(char));

	// check if NULL
	if((str1 == NULL) || (str1 == NULL)){
		printf("calloc failed to allocate enough memory!\n");
		return 1;
	}
		
	// user input
	printf("Enter a string: ");
	scanf("%s", str1);
	
	// copies str1 into str2
	my_strcpy(str2, str1);

	// sopies "you entered:" into str1
	char extra[] = "You entered:";
	my_strcpy(str1, extra);

	// prints strings
	printf("%s %s\n", str1, str2);

	return(0);
}
