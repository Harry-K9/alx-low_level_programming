#include<stdio.h>
#include "main.h"
/**
 * print_array - update value
 * @a: value to be evaluate
 * @n: value to be evaluate
 * Return: 0
 */
void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n ; inc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);
		else
			printf("%d", a[inc]);

	}
	printf("\n");
}
