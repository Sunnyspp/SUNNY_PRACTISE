#include <stdio.h>
/**
 * main : This program prints a file
 *
 * Return : 0 always (success)
 */

int main()
{
	FILE * fpointer = fopen("Sunny.html", "w");
	fprintf(fpointer, "Sunny, Customer Service\nIdowu, Team Lead\n");
	
	fclose(fpointer);

	return 0;
}
