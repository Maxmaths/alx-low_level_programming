#include "main.h"

/**
 * _strcpy - a function that cpoies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * and updates the value it points to 98
 * @dest: a char
 * @src: a char
 *
 * Return: returns 0 on success
 */

char *_strcpy(char *dest, char *src)
{
	char *alx = dest;

	while (*src)
		*dest++ = *src++;
	return (alx);

}
