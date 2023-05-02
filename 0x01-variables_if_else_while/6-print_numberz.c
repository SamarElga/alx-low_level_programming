#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Prints numbers of base 10 with the use of putchar() function'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)

		putchar(n + 48);

	putchar('\n');

	return (0);
}
