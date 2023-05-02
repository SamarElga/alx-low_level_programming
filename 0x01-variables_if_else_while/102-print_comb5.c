#include <stdio.h>
/**
  * main - Entry main point
  *
  * Description: Prints compination of two two-digit numbers (0-99)
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int n1, n2;

		for (n1 = 0; n1 < 98; n1++)
		{
			for (n2 = n1 + 1; n2 < 99; n2++)
			{
				putchar((n1 / 10) + 48);
				putchar((n1 % 10) + 48);
				putchar(' ');
				putchar((n2 / 10) + 48);
				putchar((n2 % 10) + 48);

				if (n1 == 98 && n2 == 99)
					continue;

				putchar(',');
				putchar(' ');
			}
		}

		putchar('\n');

		return (0);
}
