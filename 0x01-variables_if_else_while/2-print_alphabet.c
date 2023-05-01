#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print alphabets lowercase'
 *Return: Always 0 (Success)
 */
int main(void)
{
	char alphaletter;

	for (alphaletter = 'a'; alphaletter <= 'z'; alphaletter++)
		putchar(alphaletter);

	putchar('\n');

	return (0);
}
