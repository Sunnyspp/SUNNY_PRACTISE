#include <stdio.h>
/**
* Average: function that prints the average of 3 numbers
* @a: number to be inputed
* @b: second number to be inputed
* @c: third number to be inputed
*
* Return: Average
*/

float avg(float, float, float);

int main(void)
{
	float x, y, z;
	
	printf("Enter interger numbers\n");
	scanf("%f", &x);
	scanf("%f", &y);
	scanf("%f", &z);
	
	avg(x, y, z);
	
	return 0;
}

float avg(float a, float b, float c)
{
	float Average;
	float Sum;
	
	Average = (a + b + c)/3.0;
	Sum = a + b + c;
	printf("Sum = %f\n", Sum);
	printf("Average = %lf\n", Average);
	
	return Average;
}
