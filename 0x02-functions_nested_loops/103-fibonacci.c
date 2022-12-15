#include <stdio.h>
/**
 * main- calculate fabonnacci
 * Return: c
 */
int sum(int n);
int fib(int n);
cont int N = 4000000;
int main(void)
{
	int i = 2;
	printf(sum(i));
	return 0;
}
int sum(int n) {
	int sum = 0;
	while (fib(n) < N)
  {
		if (fib(n)%2==0)
    {
			sum += fib(n);
		}
		n++;
  }
  return sum;
}

int fib(int n)
{
	int a = 0;
	int b = 1;
	int c = 0;
	int i = 1;
  
	while (i <= n)
  {
    c = a + b;
		a = b;
		b = c;

		i++;
	}
	return 0;
