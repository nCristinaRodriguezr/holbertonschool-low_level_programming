#!/bin/bash

# Recopila los nombres de los archivos .c en una variable
c_files=$(ls *.c)

# Compila los archivos .c en archivos objeto .o
for file in $c_files; do
	    gcc -c $file
    done

    # Crea la biblioteca estática liball.a
    ar rcs liball.a *.o

    # Limpia los archivos objeto generados
    rm -f *.o
