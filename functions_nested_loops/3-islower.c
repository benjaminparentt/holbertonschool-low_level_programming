#include "main.h"
#include <ctype.h>
/**
  * _islower - Checks for lowercase character
  * @c: The character to be checked
  *
  * Return: 1 for lowercase character or 0 for anything else
  */ 
int _islower(int c)
{
  int temp;
	if (islower(c))
	{
		temp = 1;
  } else
  {
    temp = 0;
  }
	return (temp);

}
