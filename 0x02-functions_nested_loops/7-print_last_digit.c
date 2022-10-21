#include "main.h"


/**
 * print_last_digit - prints the alphabet, in lowercase
 * @n: int
 * Return: the absolute val of the int
 */

int print_last_digit(int n)
{
	int p = n % 10;

	if (p < 0)
		p *= -1;
	_putchar(p + '0');
	return (p);
}
