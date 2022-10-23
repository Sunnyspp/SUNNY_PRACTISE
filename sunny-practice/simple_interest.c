#include <stdio.h>
#include <math.h>
/**
* main: The entry point
* To calculate the simple interest in dollar
* 
* Return: 0 always (success)
*/

#define INRATE  5.0
int main(void)
{
	int Year = 0;
	float Simple_interest;
	float Principal;
	float Amount;
	
	printf("Enter your Principal: ");
	scanf("%f",&Principal);

	printf("Enter your Year: ");
	scanf("%d", &Year);
	
	Simple_interest = (Principal * Year * INRATE)/100;
	printf("The interest is: %f\n", Simple_interest);
	
	Amount = Principal + Simple_interest;
	printf("The total amount to pay back is: %f\n", Amount);

	return 0;
}
