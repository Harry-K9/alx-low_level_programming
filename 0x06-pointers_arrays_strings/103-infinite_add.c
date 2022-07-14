#include "main.h"

/**
 * infinite_add - addition of two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer
 * @size_r: buffer size
 * Return: outcome of char *r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0;
	int sum = 0;
	int tens = 0;
	int begin = 0;
	int swap = 0;

	while (n1[i] != 0)
		i++;
	while (n2[j] != 0)
		j++;
	i--;
	j--;
	if (i > size_r || j > size_r)
		return (0);
	for ( ; k < size_r; i--, j--, k++)
	{
		sum = tens;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		if (i < 0 && j < 0 && sum == 0)
			break;
		tens = sum / 10;
		r[k] = sum % 10 + '0';
	}
	if (i >= 0 || j >= 0 || sum > 0)
		return (0);
	r[k] = '\0';
	k--;
	for ( ; begin < k; k--, begin++)
	{
		swap = r[k];
		r[k] = r[begin];
		r[begin] = swap;
	}
	return (r);
}
