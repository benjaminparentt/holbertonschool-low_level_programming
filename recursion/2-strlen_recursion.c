#include "main.h"
/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: the string to be printed
 *
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
