#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - Funcion lee el texto de un archivo e imprime en el POSIX
 * @filename: apuntador a una cadena de texto, ruta del archivo
 * @letters: numero de letras que deberia leer e imprimir
 * Return: Devuelve read bytes
 */
ssize_t read_textfile(const char *filename, size_t letters);
{
	FILE *file;
	char *buffer;
	ssize_t read_bytes;
	ssize_t written_bytes;

	if (filename == NULL)
	{
		return (0);
	}
	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}
	buffer = (char *)malloc(letters);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	read_bytes = fread(buffer, sizeof(char), letters, file);
	fclose(file);
	if (read_bytes <= 0)
	{
		free(buffer);
		return (0);
	}
	written_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	free(buffer);
	if (written_bytes != read_bytes)
	{
		return (0);
	}
	return (read_bytes);
}
