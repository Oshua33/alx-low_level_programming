#include <stdio.h>

void first(void) __attribute__((constructor));

/**
 * first -The function that prints a sentence before the main
 * function executed
 */

void first(void)
{
	printf("you are beat! and yet, you must allow,\n");
	printf("i bore my house upon my back!\n");
}

