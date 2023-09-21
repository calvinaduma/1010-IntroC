/*	Calvin Aduma
	CPSC 1111-Section 003
	Lab 10
	This lab prints data stored in an array of structures.
*/

#include "defs.h"

int main(){

	// initializes declares and initializes array
	int amount;
	scanf("%d", &amount);
	food foods[50];

	// gathers data from input ifle
	for(int i=0; i<amount; i++){
	// stores food to food.item
		scanf("%s\n", foods[i].item);
	// stores item quantity to food.quantity
		scanf("%s\n", foods[i].quantity);
	// stores item calories to food.calories
		scanf("%d\n", &foods[i].calories);
	// stores item protein into food.protein
		scanf("%f\n", &foods[i].protein);
	// stores item carbs into food.carbs
		scanf("%f\n", &foods[i].carbs);
	// stores item fats into food.fats
		scanf("%f\n", &foods[i].fats);
	}
	
	//prints array
	printArray(foods, amount);
}
