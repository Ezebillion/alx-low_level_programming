#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size
 * Return: address of malloc allocated memory if success, else 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b * sizeof(int));
	if (ptr == NULL)
		exit (98);
	return (ptr);
}
