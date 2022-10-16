#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main()
{
	int i, j;

	for (i=0, j=1; i<100; i++, j++)
		putchar(i);
		putchar(j);
	return 0;
}
