#include <stdlib.h>
#include <time.h>
/**
 * Main - main block
 * Description: Get a random number and print the number if it is postive, negative, or zero
 * Return : 0
 */
int main(void)
{
		int n;

		srand(time(0));		
		n = rand() - RAND_MAX / 2;
		if(n > 0)
			printf("%i is postive\n", n);
		 else if(n < 0)
			printf("%i is negative\n", n);
		else
			printf("%i is zero\n", n);

		return (0);
}
