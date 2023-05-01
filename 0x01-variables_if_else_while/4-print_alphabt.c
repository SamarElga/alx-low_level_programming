#include <stdio.h>
/**
  * main - Entry main point
  *Description: 'prints alphabets lowercase without q and e.'
  *Return: Always 0.
  */
int main(void)
{
	char alphaletter;

	for (alphaletter = 'a'; alphaletter <= 'z'; alphaletter++)
	{
		if (alphaletter != 'e' && alphaletter != 'q')
			putchar(alphaletter);
	}

	putchar('\n');

	return (0);
}
