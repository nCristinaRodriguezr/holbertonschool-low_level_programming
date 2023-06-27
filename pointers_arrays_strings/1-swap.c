#include <stdio.h>
#include "main.h"
/**
 * swap_int- intercambia los valores de dos enteros
 * @a: variable 1
 * @b: variable 2
 */
void swap_int(int *a, int *b)
{
	int temp = (*a);

	*a = (*b);
	*b = (temp);
}
