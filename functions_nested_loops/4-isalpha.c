#include "main.h"
/**
 * isalpha - Checks for alphabetic character
 * @c: the character to be checked
 * 
 * Retur: 1 for alphabetic character or 0 for anything else
 */
 int _isalpha(int C)
{
	int temp;

	if ((c>=65 && c<90)) | ((c>=97 && c<=122))
	{
		temp = 1;
	} else
		temp = 0;
	return (temp);

}
	
