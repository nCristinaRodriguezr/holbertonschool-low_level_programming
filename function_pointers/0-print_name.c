#include <stdio.h>
#include <ctype.h>
/**
 * print_name- esta funsion imprime un nombre llamando en
 * la declaracion de la funsion un puntero a una funcion.
 * @name: puntero tipo char
 * @f: puntero a una funcion
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
