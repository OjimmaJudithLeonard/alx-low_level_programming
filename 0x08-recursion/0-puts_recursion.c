#include "main.h"
/**
 * _puts_recursion - Similar function like puts
 * @s: input
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
			return (0);
	}
	else
		_putchar("\n");
}
