#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion- devuelve la longitud de una cadena
 * @s: variable 1
 * Return: retorna la longitud de la cadena un entero.
 * en if revisar si se cumple la condición (s es igual al final de la cadena?)
 * si no, se salta el return 0;
 * luego entra a la recursion y abre los procesos sumando 1 para moverse
 * al siguiente caracter. Abre los procesos que necesita en cada iteración,
 * Hasta que se acabe la cadena.
 * Despues cuando va cerrando los procesos le va sumando 1 a la variable
 * hasta que que cierra todos los procesos vuelve al principio y
 * retorna finalmente en numero de la longitud de la cadena.
 * (ojo: el return 0 se ejecuta al final del ultimo proceso,
 *  para empezar a cerrarlos de atras hacia adelante)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		int a = _strlen_recursion(s + 1);

		return (a + 1);
	}
}
