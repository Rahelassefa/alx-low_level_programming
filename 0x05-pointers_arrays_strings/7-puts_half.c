#include "main.h"
/**
  * puts_half - prints half of a string
  * @str: takes in a string
  */
void puts_half(char *str)
{
	int i, length;

	length = string_length(str);
	length = length + 1;

	for (i = length / 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
/**
  * string_length - function to return string length
  * @s: takes in a string
  * Return: i - string length
  */
int string_length(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

