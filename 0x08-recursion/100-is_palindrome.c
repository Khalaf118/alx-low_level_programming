#include "main.h"

int _palindrome_(char *str, int len);
/**
 * is_palindrome - a string is a palindrome or not.
 *
 * @s: The string.
 *
 * Return: The result.
 * 1: a palindrome
 * 0: not
 *
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	return (_palindrome_(s, len));
}
/**
 * _palindrome_ - if a palindrome
 *
 * @str: The string
 * @len: The length of the string
 *
 * Return: The result.
 *
 */
int _palindrome_(char *str, int len)
{
	if (str[0] == str[len - 1] && len > 0)
		return (_palindrome_(str + 1, len - 2));
	if (len > 0)
		return (0);
	else
		return (1);
}
