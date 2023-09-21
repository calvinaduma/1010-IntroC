/*	Calvin Aduma
	CPSC 111-Section 003
	Lab 9
	This program uses functions to create 2 arrays like in the previous lab: 	Lab 7. The inner product will be calculated and the second highest 
	number from the array will be returned.
*/

#include "defs.h"

//	initWithInput()
//	description: creates an array from user's input
//	inputs: integer
//	outputs: array1 with user input
void initWithInput(int arr1 []){
	int userInput, i;
	printf("Enter %d integers\n",SIZE);
	for(i=1; i<=SIZE; i++){
		scanf("%d", &userInput);
		arr1[i-1] = userInput;
	}
printf("\n");
	        for(i=0; i<SIZE; i++){ 
                printf("%d\n", arr1[i]);
        }
}
// 	initWithRandom()
//	description: creates an array from random number generator
//	inputs: integer and global variable
//	outputs: array2 with random numbers
void initWithRandom(int arr2 []){
	int i;
	for(i=1; i<=SIZE; i++){
		arr2[i-1] = rand()% 50+1;
	}
 for(i=0; i<SIZE; i++){
                printf("%d\n", arr2[i]);
        }
}
