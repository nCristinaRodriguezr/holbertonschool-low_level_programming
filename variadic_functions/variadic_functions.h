#ifndef VARIADIC_H
#define VARIADIC_H
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void datac(va_list argts);
void datanum(va_list argts);
void  dataf(va_list argts);
void datas(va_list argts);
/**
 * struct variables - Struct functions
 * @ptr: Apunta al tipo de dato o de especificador
 * @function: Funcion asociada
 */
typedef struct variables
{
	char *ptr;
	void (*function)(va_list argts);
} type_var;
#endif
