#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * followe by a new line, except q and e
 * Return: Always 0
 */
int main(void)
{
	char y;

	for (y = 'a'; y <= 'z'; y++)
	{
		if (y != 'e' && y != 'q')
			putchar('y');
	}

	putchar('\n');

	return (0);
}

