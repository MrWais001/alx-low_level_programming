#include <stdlib.h>

#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{

	int n;
	for (n = 0; n <5; n++)
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d is a positive number \n", n);
	printf("%d is a negative number \n", n);
	/* your code goes there */
	return (0);
}
