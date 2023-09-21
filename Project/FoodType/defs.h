#ifndef DEFS_H
#define DEFS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char item[30];
   char quantity[20];
   int calories;
   float protein;
   float carbs;
   float fat;
} food;


typedef struct {
	char month[4];
	int day, year;
} date;



int foodCount;   // counter variable to keep track of the number of foods that are chosen


/* ----------------------------------   prototypes   ---------------------------------- */
// use the file pointer dataFile to read in the data for the foodType[] array
//	use a loop that goes arraySize times so that all the food items are read in
void initializeArray(FILE *dataFile, int arraySize, food foodType[]); // arrayProcessing.c

// used for the food arrays as well as the chosen foods
void printArray(int arraySize, food foodType[]); 							 // arrayProcessing.c

int printMainMenu();   																 // menu.c

// print the meal's food items and nutrition totals
void printTotals(food chosenFoodsArray[], 
  					  int cals, float pro, float carbs, float fat);			 // results.c

// whichOne represents menu choice (lean protein, fruit, etc.)
void chooseFood(int whichOne, food foodArray[], int size,
					 food chosenFoodsArray[], int *totalCals, float *totalPro, 
					 float *totalCarbs, float *totalFat);						 // makeChoices.c


#endif
