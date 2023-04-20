#include "function_pointers.h"
#include <stdio.h>

/**
  * int_index - searches for an interger
  * @array: array argument
  * @size: length of array
  * @cmp: pointer to function.
  * Return: -1 operation failed .
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (index < size)
			{
				if (cmp(array[index]))
					return (index);

				i++;
			}
		}
	}

	return (-1);
}
