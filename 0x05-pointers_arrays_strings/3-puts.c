#include "main.h"
/**
 * _puts - Prints a string to stdout.
 * @str: character.
 * Return: Always 0.
**/
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
