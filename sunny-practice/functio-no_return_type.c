#include <stdio.h>
/**
*main - No argument and no return type
*
*Return: void
*/
void sum (void);
int main (void)
{
	sum();
}
void sum (void)
{
	int a = 7;
	int b = 8;
	int sum = 0;

	sum = a+b;
	printf("%d\n",sum);
}
