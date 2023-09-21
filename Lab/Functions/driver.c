/*	Calvin Aduma
	CPSC 111-Section 003
	Lab 9
	This program uses functions to create 2 arrays like in the previous
	lab:Lab 7 and Lab8. The inner product will be calculated and the
	second highest number from the array will be returned. This time however, 
	a separate file will be created for each function and called in the 
	main function.
*/

#include "defs.h"

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
