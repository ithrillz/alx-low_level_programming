#include <stdio.h>

/**
 * main - main block
 *
 * Returns: 0
 */
int main(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		print("%d\n", num);
		num++;
	}

	return (0);
}	
