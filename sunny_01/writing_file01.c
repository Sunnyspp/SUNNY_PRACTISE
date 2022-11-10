#include <stdio.h>

int main()
{
    FILE * fpointer = fopen("Alexis.txt", "w");
    fprintf(fpointer,"My name is Isibor Alexis\nI am a student of GreenBell International School\n");
    fclose(fpointer);

	return 0;
}
