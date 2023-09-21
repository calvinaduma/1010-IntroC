/* 
	Calvin Aduma
	September 9, 2019
	CpSc 111, Section 003
	Lab #3
	The progam calculates the angle of a side, the side length, and the
	perimeter of a n-sided polygon that the user inputs.
*/
#include <stdio.h>
#include <math.h>

int main(void)
{	
	// Variables
	int sides, radius;
	double angleD, angleR, sideLength, perimeterInches,
	perimeterFeet;
	
	// User input - Number of Sides
	printf("Enter the number of sides for your polygon: ");
	scanf("%d",&sides);
	// Makes sure user input is valid
	if (sides<3){
		printf("Enter a number greater than 2: ");
		return 0;
	}
	// User input - Radius length
	printf("Enter the radius of your %d sided polygon: ",sides);
	scanf("%d",&radius); 

	// Angle Conversion
	angleD = 360/sides; // degrees
	angleR = (angleD*M_PI)/180; // radians
	
	// Side legth calculation
	sideLength = sqrt((pow(radius,2))+(pow(radius,2))-(2*(pow(radius,2))*cos
	(angleR)));
	// Perimeter calculation and conversions
	perimeterInches = sideLength * sides;
	perimeterFeet = perimeterInches/12;

	// Statements
	printf("Number of sides: %d\n", sides);
	printf("Radius (in): %d\n\n", radius);
	printf("Angle is %.2f radians (%.1f degrees)\n", angleR, angleD);
	printf("Side is %.2f inches\n", sideLength);
	printf("Perimeter is %.2f inches or %.2f feet\n", perimeterInches,
		perimeterFeet);
}
