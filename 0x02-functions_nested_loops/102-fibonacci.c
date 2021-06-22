#include <stdio.h>

/**
* main - displays the first 50 fibonacci numbers
*
* Return: 0
*/

int main(void)
{
	unsigned long int prev, current, next;
	int i;

	prev = 1;
	current = 2;
	printf("%lu, %lu, ", prev, current);
	for (i = 2; i < 50; i++)
	{
		next = prev + current;
		printf("%lu", next);
		prev = current;
		current = next;
		if (i != 49)
			printf(", ");
		else
			putchar('\n');
	}
	return (0);
}
