#ifndef LIST_H
#define LIST_H
/**
 * struct dlistint_s - Struct to node double
 * @n: es un numero dentro del nodo
 * @prev: puntero que apunta al nodo previo
 * @next: puntero que apunta al siguiente nodo
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
#endif
