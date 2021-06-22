#include "holberton.h"

/**
* print_times_table - prints times table till n
*@n: prints times table till this number
*
* Return: void
*/
void print_times_table(int n)
{
	int i, j;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (i * j < 10 && j > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(i * j + '0');
				}
				else if (i * j > 9 && i * j < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((i * j) / 10 + '0');
					_putchar((i * j) % 10 + '0');
				}
				else if (j == 0)
				{
					_putchar(i * j + '0');
				}
				else if (i * j > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((i * j) / 100 + '0');
					_putchar((((i * j) / 10) % 10) + '0');
					_putchar((i * j) % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
