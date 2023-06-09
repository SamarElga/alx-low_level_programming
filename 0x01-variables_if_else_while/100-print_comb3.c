#include <stdio.h>
/**
  * main - Entry main point
  *
  * Description: printing the smallest of two digit numbers ascendingly
  *
  * Return: Always 0 (Successful)
  */
int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 < 9; n1++)
	{
		for (n2 = n1 + 1; n2 < 10; n2++)
		{
			putchar(n1 + 48);
			putchar(n2 + 48);

			if (n1 == 8 && n2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
