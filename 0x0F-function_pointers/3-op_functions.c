#include "3-calc.h"
/**
 * op_add - calculates the sum between two numbers
 * @a: first number
 * @b: second number
 * Return: integer result of the sum
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates substraction between two numbers
 * @a: first operand
 * @b: second operand
 * Return: integer remainder of the operation
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates multiplication between two numbers
 * @a: first operand
 * @b: second operand
 * Return: a times b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the division between two numbers
 * @a: numerator
 * @b: denominator
 * Return: result of the division
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates modulus between two numbers
 * @a: numerator
 * @b: denominator
 * Return: residue
*/
int op_mod(int a, int b)
{
	return (a % b);
}
