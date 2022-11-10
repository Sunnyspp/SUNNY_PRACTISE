#include <stdio.h>

int main()
{
	char grade;

	printf("Enter your Grade: ");
	scanf(" %c", &grade);
	
	switch(grade)
	{
	
	    case 'A' :
		    printf("Your grade is A, excellent result.\n");
		    break;

	    case 'B' :
	    	printf("Your grade is B,very good result.\n");
	    	break;

	    case 'C' :
	    	printf("Your grade is C, good result.\n");
		    break;

	    case 'D' :
		    printf("Your grade is D, Poor result.\n");
		    break;

    	case 'F' :
	    	printf("Your grade is F, you failed, try again.\n");
	    	break;

        default :
	    	printf("Invalid grade.\n");
		    break;
	}
	return 0;
}
