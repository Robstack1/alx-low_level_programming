#include "main.h"
/**
 * *_strcpy - pointer to a character
 *
 * @dest: string 1 pointer to a char
 * @scr: string 2 pointer to a char
 *
 * Return: character (dest)
 *
 */
char *_strcpy(char *dest, char *scr)
{
	int i;

	for (i = 0; scr[i] != '\0'; i++)
	{
		dest[i] = scr[i];
	}
	dest[i] = '\0';

	return (dest);
}
