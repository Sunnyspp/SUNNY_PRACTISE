#include <stdio.h>
/**
* main -Greatest of two numbers
*
* Return: always 0
*/
int main (void)
{
	int a;
	int b;

	printf("Enter a number: ");
	scanf("%d", &a);

	printf("Enter a number: ");
	scanf("%d", &b);

	if (a > b)
	{
		printf("\nThe number %d is the greatest\n\n", a);
	}
	else
	{
		printf("\nThe number %d is the greatest\n", b);
	}
	return 0;
}
