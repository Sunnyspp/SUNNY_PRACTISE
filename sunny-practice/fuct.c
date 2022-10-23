#include <stdio.h>
/**
*main - To write a function that prints the area
* of a square
* @length : length of the square
* @breadth : Breadth of the square
*
* Return: area
*/
int areaofsquare (int length, int breadth)
{
	int area;
	area = length * breadth;
	return (area);	
}
int main(void)
{
	int l = 10;
	int b = 20;
	int area = areaofsquare(l, b);
	printf("%d\n", area);
	
/*	int l = 30;
	int b = 40;
	int area = areaofsquare(l, b);
	printf("%d\n", area);*/

	return (0);
}
