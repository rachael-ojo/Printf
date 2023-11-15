#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_c - prints character
 * @args: character argument
 * Return: number of characters
 */
int print_c(va_list args)
{
	int c;

	c = va_arg(args, int);
	return (_putchar(c));
}
/**
 * print_s - prints a string
 * @args: string  argument
 * Return: number of characters
 */
int print_s(va_list args)
{
	int i, count = 0;
	char *str;

	i = 0;
	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		count++;
	}
	return (count);
}

/**
 * print_percent - percent symbol
 * @args: string  argument
 * Return: return the percent symbol
 *
 */
int print_percent(va_list args)
{
	char *str;

	str = "%";
	if (va_arg(args, int) == *str)
	{
		return (*str);
	}
	return (*str);
}

/**
 * print_d - print a decimal
 * @args: decimal argument
 * Return: returnnmb
 */
int print_d(va_list args)
{

	unsigned int abs, ab, countnum, count;
	int n;

	count = 0;
	n = va_arg(args, int);
		if (n < 0)
		{
			abs = (n * -1);
			count += _putchar('-');
		}
		else
			abs = n;

	ab = abs;
	countnum = 1;
	while (ab > 9)
	{
		ab /= 10;
		countnum *= 10;
	}
	while (countnum >= 1)
	{
		count += _putchar(((abs / countnum) % 10) + '0');
		countnum /= 10;
	}
	return (count);
}
/**
 * print_i - prints integer same as print_d
 * @args: integer argument
 * Return: return the function print d
 */

int print_i(va_list args)
{
	return (print_d(args));
}
