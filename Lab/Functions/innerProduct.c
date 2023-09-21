/*	Calvin Aduma
	CPSC 111-Section 003
	Lab 9
	This program uses functions to create 2 arrays like in the previous
	lab: Lab 7 and 8. The inner product will be calculated and the
	second highest number from the array will be returned. This time however,
	separate files will be created for each function and called
	in the main function fule.
*/

//	findInnerProduct
//	description: returns the inner product
//	inputs: two integer arras
//	outputs: inner product of two arrays

#include "defs.h" 
	
int findInnerProduct(int arr1[], int arr2[]){
	int i, sum=0, product;
	for(i=0; i<SIZE; i++){
		product = arr1[i] * arr2[i];
		sum += product;
	}
	return sum;
}		
