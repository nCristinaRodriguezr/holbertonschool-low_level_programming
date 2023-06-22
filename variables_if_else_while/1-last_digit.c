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
	int n, a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	printf("Last digit of %d is %d ", n, a);
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else if (n % 10 == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");
	return (0);
}
