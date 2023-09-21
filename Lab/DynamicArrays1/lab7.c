/*	Calvin Aduma
	CPSC 111-Section 003
	Lab 7
	This program creates 2 arrays; one is using user input and the other is 	made from a random number generator. The inner product of the array will	be calculated and the second highest number in each will be calculated.
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int main(void){
	
	// variables
	int array1[SIZE], array2[SIZE], userInput, temp1, temp2, sum=0, product,	i, j;

	// user input array
	printf("Enter 20 integers:\n");
	for(i=1; i<=SIZE; i++){
		scanf("%d",&userInput);
		array1[i-1] = userInput;
	}
	// check of array1 values
	for(i=0; i<SIZE; i++){
		printf("%d\n", array1[i]);
	}

printf("\n");
	
	// random number array
	for(i=1; i<=SIZE; i++){
		array2[i-1] = rand()% 50 + 1;
	}
	// check of array2 values
	for(i=0; i<SIZE; i++){
		printf("%d\n", array2[i]);
	}

printf("\n");

	// finding inner product
	for(i=0; i<SIZE; i++){
		product = array1[i] * array2[i];
		sum += product;
	}

	// finding second largest number in each array
	for(i=0; i<SIZE; ++i){
		for(j=0; j<=SIZE-1; ++j){
			if (array1[j] > array1[i]){
				temp1 = array1[i];
				array1[i] = array1[j];
				array1[j] = temp1;
			}
			if (array2[j] > array2[i]){
				temp2 = array2[i];
				array2[i] = array2[j];
				array2[j] = temp2;
			}
		}
	}

printf("\n");
	
	// print second largest number of each array
	printf("%d is the second highest number in array1\n", array1[18]);
	printf("%d is the second highest number in array2\n", array2[18]);
printf("\n");

	// print inner product
	printf("%d is the inner product", sum);
	return 0;
}
