#include <stdio.h>

 /**
  * main - Entry Point
  *
  * Decription: Prints the alphabet
  *
  * Return: Always 0 (Success).
  */
int main(void)
{
	char alpa[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alpa[i]);
	}
	putchar('\n');
	return (0);
}
