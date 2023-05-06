#include <stdlib.h>
#include "main.h"

/**
  * flip_bits - obtains the number of bits needed to flip to get a new number
  * @n: value
  * @m: index
  * Return: int
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask_var = 0;
	unsigned long int count_var = 0;

	mask_var = n ^ m;

	while (mask_var)
	{
		if (mask_var & 1)
			count_var++;

		mask_var >>= 1;
	}

	return (count_var);
}
