#include "holberton.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: input number.
 * Return: factorial of the number.
 */
int factorial(int n)

{
int result;

if (n < 0)
{
result = -1;
}
else if (n == 0)
{
result = 1;
}
else
{
result = n * factorial (n - 1);
}
return result;
}
