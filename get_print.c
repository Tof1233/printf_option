#include "main.h"

/**
 * get_print - selects the right printing function
 * depending on the conversion specifier passed to _printf
 * @s: character that holds the conversion specifier
 * Description: the function loops through the structs array
 * func_arr[] to find a match between the specifier passed to _printf
 * and the first element of the struct, and then the approriate
 * printing function
 * Return: a pointer to the matching printing function
 */
unsigned int (*get_print(char s))()
{
	ph func_arr[] = {
		{'s', print_string},
		{'c', print_char},
		};

	register int i;

	for (i = 0; i < 9; i++)
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	return (NULL);
}
