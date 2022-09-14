#include "main.h"
/**
 * main - prints the string _putchar from a character array.
 * Return: 0 on success.
 */
int main(void)
{
	char a[] = "_putchar";
	int b;

	for (b = 0; a < 9; b++)
	{
		_putchar(a[b]);
	}
	_putchar('\n');
	return (0);
}
