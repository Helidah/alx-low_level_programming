#include "holberton.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
char c;
c = 'a';
while (c <= 'z')
{
putchar(c);
c = c + 1;
}
_putchar('\n');
}
