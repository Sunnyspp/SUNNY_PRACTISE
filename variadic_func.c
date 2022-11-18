#include <stdarg.h> 
#include <stdio.h>
/**
 * main - check the code
 * 
 * Return: always 0;
 */

int sum_them_all(const unsigned int n, ...);
int main(void)
{
	int sum;

	sum = sum_them_all(2, 98, 1024);
	printf("%d\n", sum);

	sum = sum_them_all(4, 98, 1024, 402, -1024);
	printf("%d\n", sum);
	return (0);
}

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list list;

	va_start(list, n);
	for(i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);	

	return (sum);
}
