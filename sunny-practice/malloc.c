#include <stdio.h>
#include <stdlib.h>
/**
* main : Function that displays interger in malloc
*
* Return:always 0 (success)
*/
int main(void)
{
	int i, n;

	printf("Enter the number of integers: ");
	scanf("%d", &n);
	int *ptr = (int *)malloc(n*sizeof(int));

	for (ptr == NULL; ; )
	{
		printf("Memory not allocated");
		exit(1);
	}
	
	for (i = 0; 0 < n; i++)
	{
		printf("Enter an integer: ");
		scanf("%d", ptr + i);
	}
	
	for (i = 0; 0 < n; i++)
	{
		printf("%d", *(ptr + i));
		return (0);
	}
}
