#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry of digits between o and 10
 * Return: Always 0
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;	
	a = n % 10;
	if (a > 5)
	{
		printf("%d > 5\n", n, a);
	}
	else if (a == 0) 
	{
		printf("%d = 0\n", n, a);
	}
	else
	{
		printf("%d < 6; > 0\n", n, a);
	}
	return (0);
}
