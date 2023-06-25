#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <unistd.h>
/**
 * times_table- imprime la tabla de multiplicar
 * @row
 * @col
 * @result
 */
void times_table(void)
{
	int row, col, result;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			result = row * col;
			if (result < 10)
			{
				if (col != 0)
					putchar(',');
					putchar(' ');
					putchar(' ');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			printf("%d", result);
		}
		putchar('\n');
	}
}
