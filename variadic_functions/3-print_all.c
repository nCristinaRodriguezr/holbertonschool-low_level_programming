#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all- imprime todo
 * @format: puntero que la cadena que el usuario desea imprimir
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *esp = "", *coma = ", ";
	va_list argts;

	type_var variables[] = {
		{"c", datac},
		{"i", datanum},
		{"f", dataf},
		{"s", datas},
		{NULL, NULL}
	};
	va_start(argts, format);
	while (format && format[i])
	{
		x = 0;
		while (x < 4)
		{
			if (format[i] == *(variables[x].ptr))
			{
				printf("%s", esp);
				variables[x].function(argts);
				esp = coma;
			}
			x++;
		}
		i++;
	}
	printf("\n");
	va_end(argts);
}
/**
 * datac - print char
 * @argts: list of arguments
 */
void datac(va_list argts)
{
	printf("%c", va_arg(argts, int));
}
/**
 * datanum - print int
 * @argts: list of arguments
 */
void datanum(va_list argts)
{
	printf("%d", va_arg(argts, int));
}
/**
 * dataf - print float
 * @argts: list of arguments
 */
void  dataf(va_list argts)
{
	printf("%f", va_arg(argts, double));
}
/**
 * datas - print string
 * @argts: list of arguments
 */
void datas(va_list argts)
{
	char *str = va_arg(argts, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
