#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: input
 * Return: output
 */
void *malloc_checked(unsigned int b)
{
	int *ar;

	ar = malloc(sizeof(unsigned int) * b);
	if (ar == NULL)
	{
		free(ar);
		exit(98);
	}
	return (ar);
}
