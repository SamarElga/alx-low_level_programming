#include <stdio.h>
/**
  * main - Entry main point
  * Description: 'Prints alphabets in lowercase and then in uppercase'
  * Return: Always 0 (Success)
  */
int main(void)
{
	char alphaletter;

	for (alphaletter = 'a'; alphaletter <= 'z'; alphaletter++)
		putchar(alphaletter);

	for (alphaletter = 'A'; alphaletter <= 'Z'; alphaletter++)
		putchar(alphaletter);

	putchar('\n');

	return (0);
}
