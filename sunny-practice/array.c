#include <stdio.h>

/**
* main: This program prints the total score
* of 3 subjects using array
* 
* Reurn: 0 always
*/

int main()
{
   int score[3];
   
   printf("Enter Maths score: ");
   scanf("%d", &score[0]);
   
   printf("Enter Physics score: ");
   scanf("%d", &score[1]);
   
   printf("Enter Chemistry score: ");
   scanf("%d", &score[2]);
   
   printf("\n\nYour Maths score is %d\n", score[0]);
   printf("Your Physics score is %d\n", score[1]);
   printf("Your Chemistry score is %d\n", score[2]);
   
   int total;
   total = score[0] + score[1] + score[2];
   
   printf("\n\nYour total score = %d\n", total);
   
    return 0;
}
