#include "main.h"

/**
 * _isalpha - prints 1 or 0 depending on input
 * @c: collects a char type
 *
 * Description: Checks for alphabets lower and uppercase
 * Return: Always(0).
 */

int test_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
