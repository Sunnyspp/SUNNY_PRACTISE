#include <stdio.h>
#include <string.h>


int main(int argc, char* argv[])
{
	printf("argc = %d\n", argc);
	printf("Lets see what is inside argv\n");

	int i, sum = 0;

	for(argc > 1)
	{

		for (i = 1; i < argc; i++)
		{
			printf("argv[%d] = %s\n", i, argv[i]);
		}	sum += atoi(argv[i]);
		
		printf("Total = %d\n", sum);
	}

	return(0);
}
