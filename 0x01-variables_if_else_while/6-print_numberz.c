#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	srand(time(0));

	for (i = 0; i < 10; i++)
	{
	putchar('0' + i);
	}

	putchar('\n');

	return (0);
}
