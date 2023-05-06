#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * get_bit - Obtains the value of a bit at a given index
  * @n: number to find the index
  * @index: The index to find
  * Return: value of the bit at index index or -1 if an error occured
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int comp_index = 0;

	while (n)
	{
		if (comp_index == index)
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}

		n = n / 2;
		comp_index++;
	}

	if (index > comp_index && index < 63)
		return (0);

	return (-1);
}
