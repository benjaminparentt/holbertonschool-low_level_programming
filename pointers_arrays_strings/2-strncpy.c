#include "main.h"
#include <stdio.h>
/**
 *  * _strcat - concatenate two strings
 *   * @dest: char string to concatenate to
 *    * @src: char string
 *     * Return: pointer to resulting string `dest`
 *      */


char* copier(char *dest, const char *src, int n)
{
	for (int i = 0; i < n; i++)
       	{
		dest[i] = src[i];
		// if (src[i] == '\0') // Si la fin de la source est atteinte, on s'arrête
		//         //     break;
	}
}
int main(void)
{
	char s1[98];
	char *ptr;
	int i;
	for (i = 0; i < 98 - 1; i++)
	{
		s1[i] = '*';
	}
	s1[i] = '\0';
	ptr = copier(s1, "Voici la phrase que je veux copier", 20);
	printf("%s", s1);

	return (0);

