#include <stdio.h>

/**
 * startupFunction - excuted function before main
 *
 * Return: void
 */
void startupFunction(void) __attribute__ ((constructor));

void startupFunction(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
