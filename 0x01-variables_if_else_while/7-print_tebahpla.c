#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - prints the lowercase alphabet in reverse, followed
 * by a newline
 *
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
