#include "main.h"
/**
 * _abs - a function that computes the absolute value of a integer
 * @i the interger to be converted.
 * Return: absolute value of the input number.
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
