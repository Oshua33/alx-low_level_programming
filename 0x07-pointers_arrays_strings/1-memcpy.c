#include "main.h"

/**
 * *_memcpy - copies memory are from scr to dest
 * @dest: destination
 * @src: source
 * @n: max bytes to use
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
