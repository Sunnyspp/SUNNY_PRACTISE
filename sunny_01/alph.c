#include <stdio.h>
/**
 * print_alphabet: This function prints Alphabet in Uppercase
 * followed by a newline
 * 
 * Return: return 0 always
 */

 void print_alphabet(char);
 int main(void)
{
	char Alpha;
	Alpha = print_alphabet(char ch);

	return (0);
}
void print_alphabet(char ch)
 {
	for(ch = 'A'; ch <= 'Z'; ch++)
	printf("The letter of Aphabet A - Z\n %c\t", ch);
	printf("\n");

 }
