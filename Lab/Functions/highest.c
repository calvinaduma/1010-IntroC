/*	Calvin Aduma
	CPSC 111-Section 003
	Lab 9
	This program uses functions to create 2 arrays like in the previous 
	lab: Lab 7 and Lab 8. The inner product will be calculated and the
	second highest number from the array will be returned. This time however,
	separate files will be created for each function and called in the
	main function file.
*/

#include "defs.h"

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
