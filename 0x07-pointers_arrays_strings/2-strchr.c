#include "holberton.h"
/**
 * _strchr - locates a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
while (*s != c && *s != '\0')
{
s++;
}
if (*s == c)
{
return (s);
}
else
{
return ('\0');
}

}
