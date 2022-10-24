#include <stdio.h>
/**
* @convert_c2f: Function to convert celsious to
* Fahrenheit
* @c: Value in clecsious
*
* Return F (Fahrenheit)
*/

float convert_c2f(float);
int main()
{
	float c;
	float F;
	printf("Enter your Celcious value c: ");
	scanf("%f", &c);
	
	F = convert_c2f(c);
	
	return 0;
}

float convert_c2f(float c)
{
	float F;

	F = (c * 9/5) + 32;
	printf("The value in farhrenheit is %fF\n", F);
	return F;

}
