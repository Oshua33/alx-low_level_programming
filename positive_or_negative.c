#include "main.h"
/**
 * positive_or_negative.c - check for positive or negative numbers
 *
 * Return: always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}
