#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers- imprime numeros seguido de una nueva linea
 * @separator: puntero
 * @n: argumento constante y sin signo
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
