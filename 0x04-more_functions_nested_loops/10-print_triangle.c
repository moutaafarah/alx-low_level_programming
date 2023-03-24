#include"main.h"

/**
 * print_triangle - print a triangle
 *
 * @size: is the number of times the # character printed
 *
 * Return: Always 0 (Success)
*/

void print_triangle(int size)
{
	int high, lenght;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (high = 1; high <= size; high++)
		{
			for (lenght = 1; lenght <= (size -= 1); lenght++)
			{
				_putchar(' ');
			}
			for (lenght = 1; lenght <= high; lenght++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}