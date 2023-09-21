/*
	Calvin Aduma
	07/02/219
	CPSC111-Section 003
	Lab #2
	This program practices debugging and fixing a program that has errors in
	it.
*/


#include <stdio.h>

int main (void) {

	// variables for showing precedence and integer truncation
	// error was due to misuse of colon
	int x = 7, y = 4, z = -12, result;

	// variables needed for conversions
	// error was due to missed comma.
	float meters, feet, yards, miles;	
	const float feetMultiplier = 3.28084, 
	  				yardsMultiplier = 1.09361,
					milesMultiplier = .000621371;

	// Show precedence and integer truncation
	result = y + z / x;
	// error was due to missing quotation mark at end of argument.
	printf("\nresult of  y + z / x  is %d, NOT %.3f  \n", 
		    result, (float)(y + z) / x);


	// Get user input 
	// missing closed parenthesis at end of statement

	printf("\n\n** Distance Conversions **\n\n");
	printf("Enter distance in meters: ");
	// missing quotation at end of argument.  			
	scanf("%f", &meters);     			

	/*** conversions ***/
	// meters to feet:
	feet = meters * feetMultiplier;

	// meters to yards:
	yards = meters * yardsMultiplier;

	// meters to miles:
	miles = meters * milesMultiplier;


	// Print results
	// missing a comma after the argument.
	printf("\n%.4f", meters);
	printf(" meters is ");

	// there was a missing starting quote "%" before the f
	printf("%f", feet);
	printf(" feet \n");

	// there was a missing starting quote "%" before the f
	printf("%.4f meters is %f yards\n", 
			 meters, yards);
	
	// added missing comma between miles and meters
	printf("%.4f meters is %f miles\n\n", meters, miles);

	return 0;
}



