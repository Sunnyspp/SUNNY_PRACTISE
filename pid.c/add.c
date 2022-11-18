#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int a = 5;
	int b = 7;
	int sum = a + b;
	pid_t pid;

	pid = getpid();
	printf("The sum = %d\n", sum);
	printf("The pid = %u\n", pid);

	return 0;
}
