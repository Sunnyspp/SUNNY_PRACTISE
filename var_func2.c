#include <stdio.h>
#include <stdarg.h>
/**
 * main - check the code
 * 
 * Return: Always 0
 */

void print_strings(const char *seperator, const unsigned int n, ...);

int main(void)
{
	print_strings(", ", 2, "jay", "Django");
	return (0);
}

void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if(!seperator)
			printf("%d", va_arg(list, int));
		else if(seperator && i == 0)
			printf("%d", va_arg(list, int));
		else 
			printf("%s%d", seperator, va_arg(list, int));
	}

	va_end(list);

	printf("\n");
}
