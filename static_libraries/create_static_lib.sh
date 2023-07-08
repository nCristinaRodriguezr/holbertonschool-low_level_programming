 # CC: Es el compilador que vamos a usar

 # CFLAGS:son las opciones de compilación, en este caso,
 # solo -c para generar archivos objeto.

 # AR: es el comando para crear archivos de biblioteca estática.

 # ARFLAGS: son las opciones para el comando ar, en este caso,
 # rcs para crear una biblioteca estática.

 # SRCS: es una variable que utiliza el comando wildcard para
 # buscar todos los archivos .c en el directorio actual.

 # OBJS es una variable que reemplaza la extensión .c por .o
 # $@ $^: son variables que se usan para referirse a el nombre
 #  y las lista de los archivos .o

CC := gcc
CFLAGS := -c
AR := ar
ARFLAGS := rcs

SRCS := $(wildcard *.c)
OBJS := $(SRCS:.c=.o)

all: liball.a

liball.a: $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f liball.a $(OBJS)
