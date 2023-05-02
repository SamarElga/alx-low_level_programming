#include <stdio.h>
/**
  * main - Entry main point
  *
  * Description: printing single digit numbers less than 10 and starting from 0
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
