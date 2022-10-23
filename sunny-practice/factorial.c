#include <stdio.h>
#include <math.h>

/**
* Function that prints the factorial of a number
* 
* @main : return 0 always
* @factorial return 1 if(n == 1 || n == 0)
*/

int factorial(int);
int main (void)
{
    int a;
    
    printf("Enter any integer number: ");
    scanf("%d", &a);
    
    printf("The factorial of %d is = %d\n", a, factorial(a));
    
    return 0;
}
int factorial(int n)
{
    if(n == 1 || n == 0)
    {
        return 1;
    }
    
    return (n * factorial(n-1));
}
