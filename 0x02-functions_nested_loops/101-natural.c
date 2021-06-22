#include <stdio.h>

/**
* main - displays the sum of numbers divisible by either 3 or 5
*
* Return: 0
*/

int main(void)
{
	int sum, i;

	sum = 3;

	for (i = 5; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
