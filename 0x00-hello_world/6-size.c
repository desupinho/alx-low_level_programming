#include <stdio.h>
/**
 * main - program prints the size of various types of computer it is compiled on
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("size of a char: %d byte(s)", sizeof(char));
	printf("size of a init: %d byte(s)", sizeof(int));
	printf("size of a long int: %d byte(s)", sizeof(long int));
	printf("size of a long long int: %d byte(s)", sizeof(long long int));
	printf("size of a float: %d byte(s)", sizeof(float));
	return (0);
}
