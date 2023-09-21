/*	Calvin Aduma
	CPSC 1111-Section 003
	Lab 12
	This lab prints data stored in an array of structures
*/
#ifndef DEFS_H
#define DEFS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

typedef struct {
	char item[20];
	char quantity[10];
	int calories;
	float protein, carbs, fats;
} food;

void printArray(food foods[], int size);
#endif
