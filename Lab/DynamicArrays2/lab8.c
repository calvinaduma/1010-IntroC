/*	Calvin Aduma
	CPSC 111-Section 003
	Lab 8
	This program uses functions to create 2 arrays like in the previous lab: 	Lab 7. The inner product will be calculated and the second highest 
	number from the array will be returned.
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

void initWithInput(int arr1 []);
void initWithRandom(int arr1 []);
int findSecondHighest(int arr1 []);
int findHighest(int arr1 []);
int findInnerProduct(int arr1 [], int arr2 []);

int main(void){
	int arr1[SIZE], arr2[SIZE];
	initWithInput(arr1);
printf("\n");
	initWithRandom(arr2);
printf("\n");
	// prints second largest number of each array
	printf("The second highest number in array 1 is %d\n",findSecondHighest(arr1));
	printf("The second highest number in array 2 is %d\n",findSecondHighest(arr2));
printf("\n");
	// prints inner product
	printf("The inner product is: %d",findInnerProduct(arr1,arr2));
printf("\n");
	return 0;
}

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

//	findHighest()
//	description: returns the highest number in the array
//	inputs: integer
//	outputs: array wth organized elements
int findHighest(int arr1 []){
	int i, j, temp1;
	for(i=0; i<SIZE; ++i){
		for(j=0; j<SIZE-1; ++j){
			if(arr1[j] > arr1[i]){
				temp1 = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = temp1;
			}
		}
	}
	return arr1[19];
}

//	findSecondHighest
//	description: returns the second highest number from each array
//	inputs: two integer arrays
//	outputs: second highest number from both arrays
int findSecondHighest(int arr1 []){
	int highest = findHighest(arr1), secondHighest = 0, i;
	for(i=0; i<SIZE; i++){
		if((arr1[i] > secondHighest) && (arr1[i] != highest)){
			 secondHighest = arr1[i];
		}
	}
	return secondHighest;
} 

//	findInnerProduct
//	description: returns the inner product
//	inputs: two integer arras
//	outputs: inner product of two arrays	
int findInnerProduct(int arr1[], int arr2[]){
	int i, sum=0, product;
	for(i=0; i<SIZE; i++){
		product = arr1[i] * arr2[i];
		sum += product;
	}
	return sum;
}		
