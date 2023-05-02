#include <stdio.h>
/**
  * main - Entry main point
  *
  * Description: Printing lowercase alphabets in reverse
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char alphaletter;

	for (alphaletter = 'z'; alphaletter >= 'a'; alphaletter--)
		putchar(alphaletter);

	putchar('\n');

	return (0);
}
