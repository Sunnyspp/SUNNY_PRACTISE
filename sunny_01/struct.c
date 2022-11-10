#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student
{
	char name [50];
	char course [50];
	int age;
	double gpa;
};

int main()
{
	struct Student student1;
	student1.age = 22;
	student1.gpa = 3.5;
	strcpy(student1.name, "Sunny");
	strcpy(student1.course, "Physics");

	printf("Your name is %s\n", student1.name);
	printf("Your course is %s\n", student1.course);
	printf("Your age is %d\n", student1.age);
	printf("your gpa is %f\n", student1.gpa);

	struct Student student2;
	student2.age = 20;
	student2.gpa = 3.9;
	strcpy(student2.name, "Alexis");
	strcpy(student2.course, "C-Programming");

	printf("\nYour name is %s\n", student2.name);
	printf("Your course is %s\n", student2.course);
	printf("Your age is %d\n", student2.age);
	printf("your gpa is %f\n", student2.gpa);
	
	return 0;	
}
