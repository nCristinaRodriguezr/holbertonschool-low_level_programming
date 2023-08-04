#ifndef LIST_H
#define LIST_H
/**
 * struct node - Struct to node
 * @str: puntero que apunta a un string de tipo char
 * @len: un numero
 * @next: puntero que apunta a otro node
 */
typedef struct node
{
	char *str;
	int len;
	struct node *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
#endif
