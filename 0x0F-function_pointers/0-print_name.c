#include <stddef.h>
/**
 * print_name - prints a name.
 * @name: The name
 * @f: a function pointer
 *
 * Return: void
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
