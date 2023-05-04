#include "main.h"



/**
 * string_tou[[er -Changes all lowercase letters
 * of a string to uppercase.
 * @src: The string to be changed.
 * @n: The maximum number of bytes to copied from src.
 * Return: A pointer to the changed string/
 *
 */

char *string_toupper(char *str)

{

        int index = 0;

        while (str[index])
	{
        if (str[index] >= 'a' && str[index] <= 'z')
        str[index] -= 32;
	index++;
	}
        return (str);
}	
