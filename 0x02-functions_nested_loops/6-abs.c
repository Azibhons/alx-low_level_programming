#include "main.h"
/**
 * _abs - a function that computes the absolute value of a integer
 * @ab: interger input
 * Return: absolute value of ab
 */
int _abs(in ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
