#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* If else statement for number testing */
int main(void)
{
	/* Main Functiion */
	int n;
	/* Main Function */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* If else statement for numbering */
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}
