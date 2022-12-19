#include "main.h"
#include <stdio.h>

/**
* print_array - Prints n elements of array
*@a: pointer
*@n: integer
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));
		i++;

		if (i < n)
		{
			printf(", ");
		}
	}
	printf("\n");
}

