#include <stdio.h>

/**main - To calculate the fact of a number
*@n - Number to be calculated
*Return - 1
*/
int fact(int n)
{
	if(n ==1)
	{
		return (1);
	}
	else
	{
		return (n = n *fact(n-1));
	}

}
int main(int n)
{
	printf("Enter a number\n");
	scanf("%d", &n);
	printf("\nThe factorial of the number %d is %d\n", n, fact(n));
}
