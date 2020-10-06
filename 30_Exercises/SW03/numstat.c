#include <stdio.h>
#include <stdlib.h>

int main( int argc, char* argv[] )
{
	float value1, value2, smallValue, bigValue, sum, difference, product, ratio = 0;
	// make sure we have exactly two arguments
	if( argc != 3 )
	{
		// usage message 
		printf("usage: please enter two float numbers.\n");
	}
	else
	{
		value1 = atof(argv[1]);
		value2 = atof(argv[2]);
		smallValue = (value1 > value2) ? value2 : value1;
		bigValue = (value1 < value2) ? value2 : value1;
		printf("Value 1: %0.3f\nValue 2: %0.3f\n", smallValue, bigValue);
		sum = smallValue + bigValue;
		difference = bigValue - smallValue;
		product = smallValue * bigValue;
		ratio = bigValue / smallValue;
		printf("Sum: %0.3f\nAbsolute Difference: %0.3f\nProduct: %0.3f\nRatio: %0.3f\n", sum, difference, product, ratio);
		
	}	

	return 0;
}
