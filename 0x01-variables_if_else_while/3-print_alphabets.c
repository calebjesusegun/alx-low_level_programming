#include <stdio.h>
 /**
  * main-0-no error, non zero value if error
  *
  * Return:0-no error,non zero value if error.
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
