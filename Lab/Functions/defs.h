#ifndef DEFS_H
#define DEFS_H
/*	Calvin Aduma
	CPSC 111-Section 003
	Lab 9
	This program uses functions to create 2 arrays like in the previous
	lab:Lab 7 and 8. The inner product will be calculated and the
	second highest number from the array will be returned. This time
	however, separiate files will be created for each function and called
	in the main function file.
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

void initWithInput(int arr1 []);
void initWithRandom(int arr1 []);
int findSecondHighest(int arr1 []);
int findHighest(int arr1 []);
int findInnerProduct(int arr1 [], int arr2 []);

#endif
