#include <stdio.h>

 /**
  * main - Prints the alphabet small and Big.
  *
  * Description: Prints the alphabet.
  *
  * Return: Always 0 (Success)
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
