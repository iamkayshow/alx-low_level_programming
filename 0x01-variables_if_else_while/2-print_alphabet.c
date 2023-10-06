#include <stdio.h>

/**
 * main - The Entry Point
 * Return: Always 0 (success)
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
