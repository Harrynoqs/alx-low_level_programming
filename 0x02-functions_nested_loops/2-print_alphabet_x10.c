#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet in lowercase 10x
 *
 * Description: prints 'a-z' ten times
 * Return: returns no value
 */

void print_alphabet_x10(void)
{
	int i;
	int ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}

