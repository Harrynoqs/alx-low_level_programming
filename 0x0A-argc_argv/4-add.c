#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * digit - checkc for integers
 * @s: input digit
 * Return: 0 for success 1 for error
 */
int digit(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!(isdigit(s[i])))
			return (0);
	}
	return (0);
}

/**
 * main - multiply numbers
 * @argc:the no of arguments
 * @argv: the name of the arguments
 * Return: 0 success 1 error
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		if (digit(argv[i]))
		{
			j = atoi(argv[i]);
			sum += j;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
