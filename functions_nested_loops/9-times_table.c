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
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			_putchar(result + '0');
		}
		_putchar('\n');
	}
}
