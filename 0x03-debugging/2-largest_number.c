#include <stdio.h>
#include "main.h"

/**
* largest_number - prints the largest of 3 integers
* @a: first integer
* @b: second integer
* @c: third integer
*
* Return: largest number
*/

int largest_number(int a, int b, int c)
{
	int largest = b;

	if (a > b)
	{
		largest = a;
	}
	else if (c > b)
	{
		largest = c;
	}

	return (largest);
}
