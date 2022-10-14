#include <stdlib.h>

#include <time.h>
/**
 * main - Prints with proper grammar, but the outcome is art
 * Return: always 0.
 */
int main(void)
{

	int n;
	for (n = 0; n <5; n++)
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0){
		printf("%d : is positive\n",n);
	/* your code goes there */
	return 0;
}
