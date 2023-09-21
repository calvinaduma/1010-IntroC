/*	Calvin Aduma
	CPSC 111-Section 003
	Lab 10
	This lab prints data stored in an array of stuctures.
*/

#include "defs.h"

int main(int argc, char *argv[]){
	FILE* inFile = NULL;
	int amount;
	inFile = fopen(argv[argc-1],"r");
// opens file to be inputed into program
	if (inFile == NULL){
		fprintf(stderr,"File open error. Exiting program\n");
		exit(1);
	}
	food * arrayFood;
// scans file to find quantity
	fscanf(inFile,"%d\n", &amount);
	arrayFood = (food *)malloc(sizeof(food) * 50);
// checks if memory was allocated
	if(arrayFood == NULL){
		fprintf(stderr, "Error. Exiting program\n");
		exit(1);
	}	
	fclose(inFile);
// scans other contents of file into array created previously
	for (int i=0; i<amount; i++){
		fscanf(inFile, "%s", arrayFood[i].item);
		fscanf(inFile, "%s", arrayFood[i].quantity);
		fscanf(inFile, "%d", &arrayFood[i].calories);
		fscanf(inFile, "%1f", &arrayFood[i].protein);
		fscanf(inFile, "%1f", &arrayFood[i].carbs);
		fscanf(inFile, "%1f", &arrayFood[i].fats);
	}	
// prints array
	printArray(arrayFood, amount);
	return 0;
}
