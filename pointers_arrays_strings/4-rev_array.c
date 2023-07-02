#include <stdio.h>
#include "main.h"
/**
 * reverse_array-invierte el contenido de una matriz de enteros.
 * @a: variable 1
 * @n: variable 2
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int *b = a;

	for (i = n - 1, j = 0; i >= 0 && j < n / 2; i--, j++)
	{
		int temp = b[j];

		b[j] = a[i];
		a[i] = temp;
	}
}
/*
 * se agregaron las siguientes variables:
 * i: que empieza en n-1
 * (se resta 1 por que las posiciones empiezan desde cero),
 * posision en la que inicia (de atras hacia adelante)
 * *b:cree el puntero b con el fin de no perder la referencia
 * del primer contenido de la cadena a la que apunta a.
 * j:se crea j con el fin de que marque la posicion en la que inicia b
 *
 *  j < n / 2 = en esta condicion en el for, la idea es que n se divida en 2,
 *  con el fin de que solo llegue a la mitad de la cadena
 *  luego verifica que j sea menor que n, con el fin
 *  de que no avance más de la mitad de la cadena.
 *  lo que quiere decir es que si j llega a ser mayor a n se sale del for.
 *  (si este for no llegara a la mitad y siguiera,
 *  no reversaria nunca la cadena, ya que la dejaria
 *  tal y como y como estaba al principio).
 *
 *  temp: en esta varible guardamos temporalmente en cada
 *  iteracion el contenido de la posicion de j
 *  b[j] = a[i]: aqui le digo que el contenido de la
 *  posicion j sea igual al contenido de la posicion de i,
 *  para que el contenido de la primera posicion de la cadena a se
 *  intercambie con el contenido de la ultima posicion.
 *
 * a[i] = temp . aqui la idea es que temp ponga el contenido guardado
 * en la posicion i,asi en cada iteracion.
 */
