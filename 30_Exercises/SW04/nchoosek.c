#include <stdio.h>
#include <stdlib.h>

// prototype
long factorial(int n);
long nChooseK(int n, int k);

int main( int argc, char* argv[] )
{
    int n = 0, k = 0, waitOnValidInput = 1;
	while(waitOnValidInput){
	    printf("Enter a n: ");
    	scanf("%d",&n);
		printf("Enter a k: ");
		scanf("%d",&k);
		if(n >= 0 && k >= 0 && k <= n) {
		    printf("nChooseK of %d and %d = %ld\n", n, k, nChooseK(n, k));
			break;
		}
		else
		{
			printf("Invalid input. Try again.\n");
		}
	}
	return EXIT_SUCCESS;
}

// implementation of the factorial and nChooseK function
long  factorial(int n) {
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}

long nChooseK(int n, int k) {
	return factorial(n)/(factorial(k)*factorial(n-k));
}
