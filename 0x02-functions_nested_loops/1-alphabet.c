#include "holberton.h"

/**
 *main - Prints lowercase letters using only putchar
 *
 *Description: a program that prints the alphabet in lowercase
 *Return: 0
*/
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
_putchar(c);
c = c + 1;
}
_putchar('\n');

return (0);
}
