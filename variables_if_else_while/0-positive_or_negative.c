#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- asignará un número aleatorio
 * a la variable cada vez que se ejecute
 * Return: siempre devuelve 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf( "%d is positive\n",n );
	else if (n == 0)
		printf(n, "%d is zero\n",n );
	else
		printf(n, "%d is negative\n",n );
	return (0);
}
