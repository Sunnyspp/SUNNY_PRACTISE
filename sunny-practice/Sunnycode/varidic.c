#include <stdio.h>

#include <stdlib.h>

#include <stdarg.h>



/**

 * Sum them all: Returns the sum of its parameter

 * @n: the number of parameters passed to the function

 * @...: a variable number of parameter to calculate the sum of.

 *

 * Return: return sum or if n==0 , return 0

 */



int sum_them_all(const unsigned int n, ...)

{

	int sum = 0;

	unsigned int i;

	va_list arguments;



	if (n)

	{

		va_start(arguments, n);

		for (i = 0; i < n; i++)

		{

			sum += va_arg(arguments, int);

		}

		va_end(arguments);

	}

	return (sum);

}



int main(void)

{

    int sum;



    sum = sum_them_all(2, 98, 1024);

    printf("%d\n", sum);

    sum = sum_them_all(4, 98, 1024, 402, -1024);

    printf("%d\n", sum);    

    return (0);

}
