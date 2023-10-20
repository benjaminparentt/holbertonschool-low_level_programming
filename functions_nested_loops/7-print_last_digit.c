#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - Check for a integer
 * @r: The character to be checked
 * Return: Returns the value of the last digit
 */
int print_last_digit(int r)
{
       	int a;
	
       	a = abs(r);
       	a = r % 10;
       	a = abs(a);
       	_putchar (a + '0');

       	return (a);
}
