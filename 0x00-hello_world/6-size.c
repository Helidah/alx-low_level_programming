#include <stdio.h>
/**
 *main - Intro to sizeof
 *Description: return the size of types
 *Return: 0
 */
int main(void)
{
printf("Size of a char: %lu\n", sizeof(char));
printf("Size of an int: %lu\n", sizeof(int));
printf("Size of a long int: %lu\n", sizeof(long int));
printf("Size of a long long int: %lu\n", sizeof(long long int));
printf("Size of a float: %lu\n", sizeof(float));
return (0);
}
