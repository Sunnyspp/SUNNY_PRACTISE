#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * rand_num - this program will print random
 * from between and given range
 *
 * Return: 0 always
 */

 int main(void)
 {
 	int number;
	srand(time(0));

	number = rand()%100+1;
	printf("Number= %d\n", number);

	return (0);
 }
