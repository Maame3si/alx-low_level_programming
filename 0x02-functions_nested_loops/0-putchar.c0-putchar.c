#include <unistd.h>

/**
 * _putcgar - write the character c to stdout
 * @c: The character to print
 * REturn: On success 1.
 * On erro, -1 returned, and errno is set appropriately. 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
