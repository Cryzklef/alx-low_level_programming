#include "main.h"

/**
 * _strlen - Find the length of string
 * @s; strings to be counted
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
        return (count);

}
