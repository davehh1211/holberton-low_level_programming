#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)

{
	char x[9] = "Holberton";
	int a;

	for (a = 0; a <= 8; a++)
	{
		_putchar(x[a]);
	}
	_putchar('\n');
	return (0);
}
