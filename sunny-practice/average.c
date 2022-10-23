#include <stdio.h>
/**
* main: Entry point
* Description:The program will the sum and average
* a set of numbers
* @N - The maximum entries of the number
* 
* Return 0
*/
#define N	10
int main(void)
{
	float sum, average, numbers;
	int count;

	while(count < N)
	{
		printf("Enter the numbers\n");
		scanf("%f", &numbers);
		sum = sum + numbers;
		count = count + 1;
	}
	average = sum/N;
	printf("sum = %f and N = %d", sum, N);
	printf("\nAverage = %f", average);

	return 0;
}
