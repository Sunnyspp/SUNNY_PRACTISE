#include <stdio.h>

/**
* main: Addition
* Description: This program will add two numbers
*
* Return: 0 always
*/
int main(void)
{
	int number;
	double amount;
	double sum;

	number = 100;
	amount = 30.45 + 35.38;
	sum = number + amount;

	printf("%d\n", number);
	printf("%f\n", amount);
	printf("%f\n",sum);
	
	return 0;
}
