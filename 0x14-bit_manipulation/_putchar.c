#include "main.h"
#include <unistd.h>
/**
 * _putchar - outputs the character c to stdout
 * @c: a character to print
 *
 * Return: a success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
