#include "main.h"
/**
  * _puts - prints a string follow by new line
  * @str: takes in a string
  */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
