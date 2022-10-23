#include <stdio.h>
/**
* main - Program to check if a number is even
* 
*Return: always 0
*/
int main(void)
{
	int data;

	printf("\n Enter a number: = ");
	scanf("%d", &data);

	if((data % 2) == 0)
	{
		printf("\n The Number is even\n\n");
	}
	else
	{
		printf("\nThe Number is odd\n\n");
	}
	return (0);
}
