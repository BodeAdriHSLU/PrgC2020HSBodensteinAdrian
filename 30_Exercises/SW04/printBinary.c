#include <stdio.h>
#include <stdlib.h>

// prototype
void printBinary( unsigned int input );

int main( int argc, char* argv[] )
{
	int number = 0;
	printf("Enter a number: ");
	scanf("%d", &number);
	printBinary( number );
	printf(".\n");

	return 0;
}

// implementation of the printBinary funtion
void printBinary( unsigned int input )
{
	unsigned int i = 0;

	printf("%d in binary form is 0b", input);

	for( i = (1 << 10 ); i > 0; i = (i>>1) )
	{
		if( input & i )
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
