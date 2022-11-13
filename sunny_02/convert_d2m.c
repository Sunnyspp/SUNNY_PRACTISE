/**
 * Main : Entry point
 * PROGRAM TO CONVERT DAYS TO MONTHS AND DAYS
 * 
 * Return : return 0 always
 */
#include <stdio.h>

int main (void)
{
	int months, days;
	
	printf("Enter days\n");
	scanf("%d", &days);

	months = days/30;
	days = days% 30;

	printf("%d Months and %d Days\n", months, days);

	return 0;
}
