#include "main.h"
/**
* reverse_array - Reverese content of array
*@a:  pointer
harry
*@n:  number of elements in array
*Return: j-integer
*/
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}

