#include <stdio.h>
/**
 *  * main - Entry point
 *   * Description: Print all numbers of base 16 in lowercase.
 *    * You can only use `putchar`, and only 3 times.
 *     * Return: 0 if successful (Always), non-zero otherwise
 *      */
int main(void)
{
		char c;
			int i;

				for (i = 0; i < 10; i++)
						{
									putchar(i + '0');
										}
					for (c = 'a'; c < 'g'; c++)
							{
										putchar(c);
											}
						putchar('\n');

							return (0);
} 
