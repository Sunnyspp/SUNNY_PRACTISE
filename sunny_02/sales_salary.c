/*SALESMAN'S SALARY
A computer manufacturing company has the following monthly compensation policy to their salespersons:
Minimum base salary : 1500.00
Bonus for every computer sold : 200.00
Commission on the total monthly sales : 2 per cent
Since the prices of computers are changing, the sales price of each computer is fixed at the
beginning of every month. A program to compute a sales-person's gross salary is given in */

/**
 * Main : Entry point
 * PROGRAM TO CALCULATE A SALESMAN'S SALARY
 * 
 * Return : return 0 always
 */
#include <stdio.h>

#define		BASE_SALARY 1500
#define 	BONUS_RATE  200.00
#define 	COMMISSION 	0.02

int main(void)
{
	int quantity;
	float gross_salary, price;
	float bonus, commission;
	
	printf("input number sold and price\n");
	scanf("%d %f", &quantity, &price);

	bonus 		= BONUS_RATE * quantity;
	commission * quantity * price;
	gross_salary 	= BASE_SALARY + bonus + commission;

	printf("\n");
	printf("Bonus 		= %6.2f\n", bonus);
	printf("Commission 	= %6.2f\n", commission);
	printf("Gross salary 	= %6.2f\n", gross_salary);
	return 0;
}
