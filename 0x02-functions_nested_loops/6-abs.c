#include "main.h"

int _abs(int a);

/**
 * _abs - prints the alphabet, followed by a new line.
 * @a: in t
 * Return: the absolute val of the int
 */
int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (-a);
}
