#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)


{
int i, k, counter = 0;
for (i = 0; s[i] != '\0' ; i++)
{
if (counter != i)
break;

for (k = 0; accept[k] != '\0'; k++)
{
if (s[i] == accept[k])
counter++;
}
}
return (counter);
}
