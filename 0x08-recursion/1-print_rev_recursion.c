#include "main.h"

/**
* _print_rev_recursion - prints a string in reverse
* @s: string to print
*/
void _print_rev_recurrsion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s+1);
		_putchar(*s);
	}
}
